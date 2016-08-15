#include <QString>
#include <QTextCursor>
#include "codeeditor.h"
#ifndef FILEMANAGE_H
#define FILEMANAGE_H


//Variables
const QString pathOrigen="/home/sarina/";

//Files Manage
CodeEditor *open();
QString getName(QString path);
QString read(QString path);
CodeEditor * save(CodeEditor * editor);
CodeEditor * saveAs(QString content);
int write(QString path, QString content);
QString replace(QString original, QString before, QString after);
QString replaceAll(QString original, QString before, QString after);


#endif // FILEMANAGE_H
