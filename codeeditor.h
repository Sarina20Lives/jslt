#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QPlainTextEdit>
#include <QObject>

QT_BEGIN_NAMESPACE
class QPaintEvent;
class QResizeEvent;
class QSize;
class QWidget;
class QCompleter;
QT_END_NAMESPACE

class LineNumberArea;

//![codeeditordefinition]

class CodeEditor : public QPlainTextEdit
{
    Q_OBJECT

public:
    QString title;
    QString path;

    CodeEditor(QWidget *parent = 0);
    ~CodeEditor();//TextEditor

    void lineNumberAreaPaintEvent(QPaintEvent *event);
    int lineNumberAreaWidth();

    void setCompleter(QCompleter *c);//TextEditor
    QCompleter *completer() const;//TextEditor

protected:
    void keyPressEvent(QKeyEvent *e) Q_DECL_OVERRIDE;//TextEditor
    void focusInEvent(QFocusEvent *e) Q_DECL_OVERRIDE;//TextEditor
    void resizeEvent(QResizeEvent *event) Q_DECL_OVERRIDE;

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    void highlightCurrentLine();
    void updateLineNumberArea(const QRect &, int);
    void insertCompletion(const QString &completion);//TextEditor

private:
    QString textUnderCursor() const;//TextEditor

private:
    QWidget *lineNumberArea;
    QCompleter *c;//TextEditor
};

//![codeeditordefinition]

//![extraarea]

class LineNumberArea : public QWidget
{
public:
    LineNumberArea(CodeEditor *editor) : QWidget(editor) {
        codeEditor = editor;
    }

    QSize sizeHint() const Q_DECL_OVERRIDE {
        return QSize(codeEditor->lineNumberAreaWidth(), 0);
    }

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE {
        codeEditor->lineNumberAreaPaintEvent(event);
    }

private:
    CodeEditor *codeEditor;
};

//![extraarea]

#endif
