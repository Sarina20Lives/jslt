#include "filemanage.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QTextCursor>
#include "codeeditor.h"

CodeEditor * open(){
    QString path = QFileDialog::getOpenFileName(
                NULL,
                "Seleccione el archivo..",
                pathOrigen,
                "JSON files (*.json);;JSLT files (*.jslt)");
    if(path.isEmpty()){
        return NULL;
    }
    QString contenido=read(path);
    if(contenido==NULL){
        return NULL;
    }
    CodeEditor *editor = new CodeEditor;
    editor->setPlainText(contenido);
    editor->title=getName(path);
    editor->path=path;
    return editor;
}

QString getName(QString path){
    int pos=path.lastIndexOf('/');
    return path.remove(0,pos+1);
}

QString read(QString path)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        return NULL;
    }
    QTextStream in(&file);
    QString content="";
    while (!in.atEnd()) {
        QString line = in.readLine();
        content = content + line + "\n";
    }
    return content;
}

CodeEditor * save(CodeEditor * editor){
    if(editor->path.compare("")==0){
        return saveAs(editor->toPlainText());
    }
    if(write(editor->path, editor->toPlainText())==0){
        return NULL;
    }
    return editor;
}

CodeEditor * saveAs(QString content){
    QString path = QFileDialog::getSaveFileName(
                NULL,
                "Seleccione el archivo..",
                pathOrigen,
                "JSON files (*.json);;JSLT files (*.jslt)");
    if(path.isEmpty()){
        return NULL;
    }
    if(write(path, content)==0){
        return NULL;
    }
    CodeEditor * editor = new CodeEditor;
    editor->path=path;
    editor->title=getName(path);
    editor->setPlainText(content);
    return editor;
}

int write(QString path, QString content)
{
    QFile file(path);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
       return 0;
    }
    QTextStream out(&file);
    out << content << "\n";
    return 1;
}

QString replace(QString  original, QString before, QString after){
    QString str(original); // The initial string.
    QString subStr(before); // String to replace.
    QString newStr(after); // Replacement string.
    str.replace(str.indexOf(subStr), subStr.size(), newStr);
    return str;
}

QString replaceAll(QString original, QString before, QString after){
    original.replace(before, after);
    return original;
}

