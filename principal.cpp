#include "principal.h"
#include "ui_principal.h"
#include "codeeditor.h"
#include <QtWidgets>

Principal::Principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal),
    completer(0)
{
    ui->setupUi(this);
    CodeEditor *editor = new CodeEditor;
    setupEditor(editor);
    ui->tabWidgetFiles->addTab(editor,"Sin guardar");
}

Principal::~Principal()
{
    delete ui;
}

QAbstractItemModel *Principal::modelFromFile(const QString& fileName)
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

void Principal::setupEditor(CodeEditor *completingTextEdit)
{
    QFont font;
    font.setFamily("Courier");
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
}
