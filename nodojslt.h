#ifndef NODOJSLT_H
#define NODOJSLT_H
#include <QString>
#include <QList>


class NodoJslt
{

private:
    static int ID;
    QString id;
    int tipo;
    QString valor;
    QList<NodoJslt> *nodos;
    QString recorrerNodos(QString &padre, QList<NodoJslt> *&nodos);
    QString declareDOT();

public:
    NodoJslt();
    NodoJslt(int tipo, QString valor);
    void setValor(QString valor);
    void setTipo(int tipo);
    void setNodos(QList<NodoJslt> nodos);
    void addNodo(NodoJslt nodo);
    void prepNodo(NodoJslt nodo);
    void setNodos(QList<NodoJslt> nodos, NodoJslt nodo);
    QList<NodoJslt> getNodos();
    QString getDOT();
    QString getValor();
    int getTipo();
};

#endif // NODOJSLT_H

