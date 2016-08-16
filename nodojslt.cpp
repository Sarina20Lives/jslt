#include "nodojslt.h"
#include <QString>
#include <QList>
#include <QProcess>
#include <QStringList>

int NodoJslt::ID = 0;

NodoJslt::NodoJslt()
{
    this->id = QString("nodo") + QString::number(NodoJslt::ID);
    this->nodos = new QList<NodoJslt>;
    this->tipo = 0;
    this->valor = "";
    NodoJslt::ID++;
}

NodoJslt::NodoJslt(int tipo, QString valor)
{
    this->id = QString("nodo") + QString::number(NodoJslt::ID);
    this->nodos = new QList<NodoJslt>;
    this->tipo = tipo;
    this->valor = valor;
    NodoJslt::ID++;
}


QString NodoJslt::getDOT()
{
    QString DOT = QString("digraph G{\n");
    DOT += QString("\tnode[shape=\"record\"];\n");
    DOT += this->declareDOT();
    DOT += recorrerNodos(this->id, this->nodos);
    DOT += QString("}");
    return DOT;
}

void NodoJslt::genAST(QString name)
{
    QString archivoDOT = name.append(".dot");
    QString archivoIMG = name.replace(".dot", ".png");
    FILE *fp;
    fp = fopen ( archivoDOT.toUtf8().data(), "w+" );

    if(fp == NULL){
        fprintf(stderr, "No es posible crear el archivo '%s'\n", archivoDOT.toUtf8().data());
        return;
    }else{
        fprintf(fp, "%s", this->getDOT().toUtf8().data());
        fclose (fp);
    }

    //dot -Tjpg astJson.dot -o astJson.jpg
    QString program = "dot";
    QStringList arguments;
    arguments << "-Tpng" << archivoDOT << "-o" << archivoIMG;
    QProcess *myProcess = new QProcess();
    myProcess->start(program, arguments);
}


QString NodoJslt::getValor()
{
    return this->valor;
}

int NodoJslt::getTipo()
{
    return this->tipo;
}

QString NodoJslt::declareDOT()
{
    return QString("\t%1[label=\"%2|%3\"];\n")
            .arg(this->id)
            .arg(this->tipo)
            .arg(this->valor.replace("\"","").replace("<","\\<").replace(">","\\>"));
}

QString NodoJslt::recorrerNodos(QString &padre, QList<NodoJslt> *&nodos) {
    QString DOT = QString();
    foreach (NodoJslt nodo, *nodos) {
        DOT += nodo.declareDOT();
        DOT += QString("\t%1->%2;\n")
              .arg(padre)
              .arg(nodo.id);
        DOT += recorrerNodos(nodo.id, nodo.nodos);
    }
    return DOT;
}

void NodoJslt::setValor(QString valor)
{
    this->valor = valor;
}

void NodoJslt::setTipo(int tipo)
{
    this->tipo = tipo;
}

void NodoJslt::addNodo(NodoJslt nodo)
{
    this->nodos->append(nodo);
}

void NodoJslt::prepNodo(NodoJslt nodo) {
    this->nodos->prepend(nodo);
}

QList<NodoJslt> NodoJslt::getNodos()
{
    return *this->nodos;
}

void NodoJslt::setNodos(QList<NodoJslt> nodos)
{
    this->nodos = new QList<NodoJslt>(nodos);
}

void NodoJslt::setNodos(QList<NodoJslt> nodos, NodoJslt nodo)
{
    this->nodos = new QList<NodoJslt>(nodos);
    this->nodos->append(nodo);
}



