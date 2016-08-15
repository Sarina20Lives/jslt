#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filemanage.h"
#include <QFileDialog>
#include <QMessageBox>
#include "codeeditor.h"
#include <QtWidgets>
#include "sintactico_jslt.h"
#include "lexico_jslt.h"
extern int jsltparse();
extern QString salida;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    completer(0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Métodos para control de autocompletar
 */
QAbstractItemModel *MainWindow::modelFromFile(const QString& fileName)
{
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly))
        return new QStringListModel(completer);

#ifndef QT_NO_CURSOR
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
#endif
    QStringList words;

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        if (!line.isEmpty())
            words << line.trimmed();
    }

#ifndef QT_NO_CURSOR
    QApplication::restoreOverrideCursor();
#endif
    return new QStringListModel(words, completer);
}

void MainWindow::setupEditor(CodeEditor *completingTextEdit)
{
    QFont font;
    font.setFamily("Corbel");
    font.setStyleHint(QFont::Monospace);
    font.setFixedPitch(true);
    font.setPointSize(11);
    completingTextEdit->setFont(font);
    QFontMetrics metrics(font);
    completingTextEdit->setTabStopWidth(4 * metrics.width(' '));
    completer = new QCompleter(this);
    completer->setModel(modelFromFile(":/resources/ToAutocomplete.txt"));
    completer->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    completer->setWrapAround(false);
    completingTextEdit->setCompleter(completer);
    highlighter = new Highlighter(completingTextEdit->document());
    connect(completingTextEdit, SIGNAL(cursorPositionChanged()),this,SLOT(showPosition()));
}



/*
 * Acciones...
 */
void MainWindow::on_pBopen_clicked()
{
    CodeEditor *editor = open();
    if(editor==NULL){
        return;
    }
    setupEditor(editor);
    ui->tWfiles->addTab(editor,editor->title);
    ui->tWfiles->setCurrentIndex(ui->tWfiles->count()-1);
}

void MainWindow::on_pBsave_clicked()
{
    saveOperation(true);
}

void MainWindow::on_pBsaveAs_clicked()
{
    saveOperation(false);
}

void MainWindow::showPosition()
{
    QTextCursor cursor = ((CodeEditor*) ui->tWfiles->currentWidget())->textCursor();
    QString position = QString("Line: %1 Column: %2").arg(cursor.blockNumber()+1).arg(cursor.columnNumber()+1);
    fprintf(stderr, "Line %d, Column %d",cursor.blockNumber()+1, cursor.columnNumber()+1);
    ui->statusBar->showMessage(position);
}

void MainWindow::on_pBreplace_clicked()
{
    replaceOperation(true);
}

void MainWindow::on_pBreplaceAll_clicked()
{
    replaceOperation(false);
}

void MainWindow::on_pBsearch_clicked()
{
    if(checkFieldsSearch(ui->lEsearch->text())==0)
    {
        return;
    }
    CodeEditor * editor = ((CodeEditor*) ui->tWfiles->currentWidget());
    QString content = editor->toPlainText();
    QString find = ui->lEsearch->text();
    int position = content.indexOf(find, ultimaBusqueda);
    if(position == -1)
    {
        if(ultimaBusqueda == 0)
        {
            ui->statusBar->showMessage(QString("El texto '%1' no existe en el contenido de este archivo.").arg(find), 5000);
            return;
        }
        ui->statusBar->showMessage(QString("La búsqueda empezará otra vez desde el principio."), 5000);
        ultimaBusqueda = 0;
        return;
    }
    int length = find.length();
    QTextCursor cursor = editor->textCursor();
    cursor.setPosition(position);
    cursor.setPosition(position + length, QTextCursor::KeepAnchor);
    editor->setTextCursor(cursor);
    if(position == content.lastIndexOf(find,0))
    {
        ultimaBusqueda = 0;
    }
    else
    {
        ultimaBusqueda = position + 1;
    }
}

void MainWindow::on_pBnew_clicked()
{
    CodeEditor *editor = new CodeEditor;
    editor->title="Untitled";
    editor->path="";
    setupEditor(editor);
    ui->tWfiles->addTab(editor,editor->title);
    ui->tWfiles->setCurrentIndex(ui->tWfiles->count()-1);
}

void MainWindow::on_pBclose_clicked()
{
    int pos=ui->tWfiles->currentIndex();
    if(pos==-1){
        reportQMessageBox("No existen archivos abiertos actualmente.");
        return;
    }
    ui->tWfiles->removeTab(pos);
}

void MainWindow::saveOperation(bool operacion){
    int pos=ui->tWfiles->currentIndex();
    CodeEditor * editor=((CodeEditor*) ui->tWfiles->currentWidget());
    if(checkNullContent(editor)==0){
        return;
    }
    if(operacion){
        editor=save(editor);
    }else{
        editor=saveAs(editor->toPlainText());
    }
    if(editor==NULL){
        reportQMessageBox("No se ha guardado el archivo");
        return;
    }
    setupEditor(editor);
    ui->tWfiles->removeTab(pos);
    ui->tWfiles->insertTab(pos,editor,editor->title);
    ui->tWfiles->setCurrentIndex(pos);
    reportQMessageBox("El archivo ha sido guardado");
}

void MainWindow::replaceOperation(bool operacion){
    int pos=ui->tWfiles->currentIndex();
    CodeEditor * editor=((CodeEditor*) ui->tWfiles->currentWidget());
    if(checkNullContent(editor)==0){
        return;
    }
    if(checkFieldsContent(editor->toPlainText())==0){
        return;
    }
    if(checkFieldsSearch(ui->lEsearch->text())==0){
        return;
    }
    if(checkFieldsReplace(ui->lEremplace->text())==0){
        return;
    }
    QString content;
    if(operacion){
        content=replace(editor->toPlainText(), ui->lEsearch->text(), ui->lEremplace->text());
    }else{
        content=replaceAll(editor->toPlainText(), ui->lEsearch->text(), ui->lEremplace->text());
    }
    editor->setPlainText(content);
    setupEditor(editor);
    ui->tWfiles->removeTab(pos);
    ui->tWfiles->insertTab(pos,editor,editor->title);
    ui->tWfiles->setCurrentIndex(pos);
}

/* ************************************************************************************************
 * * MÉTODOS EXTRAS...
 * ************************************************************************************************/

void reportQMessageBox(QString message){
    QMessageBox msg;
    msg.information(NULL,"Resultado de la operación:",message);
}

int checkNullContent(CodeEditor * content){
    if(content==NULL){
        reportQMessageBox("No existen ninguna área de edición abierta actualmente.");
        return 0;
    }
    return 1;
}

int checkFieldsContent(QString content){
    if(content.isEmpty() || content.compare("")==0 ){
        reportQMessageBox("No hay un contenido disponible");
        return 0;
    }
    return 1;
}

int checkFieldsSearch(QString search){
    if(search.isEmpty() || search.compare("")==0 ){
        reportQMessageBox("Debe ingresar una cadena a buscar");
        return 0;
    }
    return 1;
}

int checkFieldsReplace(QString replace){
    if(replace.isEmpty() || replace.compare("")==0 ){
        reportQMessageBox("Debe ingresar una cadena para reemplazar");
        return 0;
    }
    return 1;
}

void MainWindow::on_pBanalize_clicked()
{
    CodeEditor * editor=((CodeEditor*) ui->tWfiles->currentWidget());
    if(checkNullContent(editor)==0){
        return;
    }

    QString entrada = editor->toPlainText();
    if(entrada.length()==0){
        QMessageBox::critical(this, "Error en el análisis","No se admite una cadena vacia.");
        return;
    }

    YY_BUFFER_STATE bufferState = jslt_scan_string(entrada.toUtf8().constData());
    int estado = jsltparse();
    if(estado==0){
        reportQMessageBox("El análisis ha sido correcto.");
    }

    jslt_delete_buffer(bufferState);
}
