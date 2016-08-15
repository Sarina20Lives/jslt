#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include "highlighter.h"

namespace Ui {
class Principal;
}

class QAbstractItemModel;
class QComboBox;
class QCompleter;
class QLabel;
class QLineEdit;
class QProgressBar;
class CodeEditor;


class Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = 0);
    ~Principal();

private:
    void setupEditor(CodeEditor *completingTextEdit);
    Ui::Principal *ui;
    QAbstractItemModel *modelFromFile(const QString& fileName);
    QCompleter *completer;
    Highlighter *highlighter;

};

#endif // PRINCIPAL_H
