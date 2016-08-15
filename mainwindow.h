#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "highlighter.h"
#include <QString>


namespace Ui {
class MainWindow;
}

class QAbstractItemModel;
class QComboBox;
class QCompleter;
class QLabel;
class QLineEdit;
class QProgressBar;
class CodeEditor;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void showPosition();

private slots:
    void on_pBopen_clicked();

    void on_pBsave_clicked();

    void on_pBsaveAs_clicked();

    void on_pBreplace_clicked();

    void on_pBreplaceAll_clicked();

    void on_pBsearch_clicked();

    void on_pBnew_clicked();

    void on_pBclose_clicked();

    void saveOperation(bool operacion);

    void replaceOperation(bool operacion);

    void on_pBanalize_clicked();

private:
    void setupEditor(CodeEditor *completingTextEdit);
    Ui::MainWindow *ui;
    QAbstractItemModel *modelFromFile(const QString& fileName);
    QCompleter *completer;
    Highlighter *highlighter;
    int ultimaBusqueda;
};

void reportQMessageBox(QString message);
int checkNullContent(CodeEditor * content);
int checkFieldsContent(QString content);
int checkFieldsSearch(QString search);
int checkFieldsReplace(QString replace);

#endif // MAINWINDOW_H
