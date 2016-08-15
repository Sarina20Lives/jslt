#include "nodojslt.h"
#include <QString>
#include <QList>

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
    return QString("\t%1[label=\"%2|%3|%4\"];\n")
            .arg(this->id)
            .arg(this->tipo)
            .arg(this->valor);
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



