/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *editor;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pBnew;
    QPushButton *pBopen;
    QPushButton *pBsave;
    QPushButton *pBsaveAs;
    QPushButton *pBclose;
    QFrame *line;
    QPushButton *pBanalize;
    QFrame *line_2;
    QLineEdit *lEsearch;
    QLineEdit *lEremplace;
    QPushButton *pBsearch;
    QPushButton *pBreplace;
    QPushButton *pBreplaceAll;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tWfiles;
    QWidget *errores;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(715, 502);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(widget_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::South);
        editor = new QWidget();
        editor->setObjectName(QStringLiteral("editor"));
        verticalLayout = new QVBoxLayout(editor);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(editor);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 50));
        widget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pBnew = new QPushButton(widget);
        pBnew->setObjectName(QStringLiteral("pBnew"));
        pBnew->setMinimumSize(QSize(36, 36));
        pBnew->setMaximumSize(QSize(36, 36));
        QIcon icon;
        icon.addFile(QStringLiteral("../Imagenes/nuevo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBnew->setIcon(icon);
        pBnew->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(pBnew);

        pBopen = new QPushButton(widget);
        pBopen->setObjectName(QStringLiteral("pBopen"));
        pBopen->setMinimumSize(QSize(36, 36));
        pBopen->setMaximumSize(QSize(36, 36));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Imagenes/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBopen->setIcon(icon1);
        pBopen->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(pBopen);

        pBsave = new QPushButton(widget);
        pBsave->setObjectName(QStringLiteral("pBsave"));
        pBsave->setMinimumSize(QSize(36, 36));
        pBsave->setMaximumSize(QSize(36, 36));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../Imagenes/guardar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBsave->setIcon(icon2);
        pBsave->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(pBsave);

        pBsaveAs = new QPushButton(widget);
        pBsaveAs->setObjectName(QStringLiteral("pBsaveAs"));
        pBsaveAs->setMinimumSize(QSize(36, 36));
        pBsaveAs->setMaximumSize(QSize(36, 36));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../Imagenes/guardarComo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBsaveAs->setIcon(icon3);
        pBsaveAs->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(pBsaveAs);

        pBclose = new QPushButton(widget);
        pBclose->setObjectName(QStringLiteral("pBclose"));
        pBclose->setMinimumSize(QSize(36, 36));
        pBclose->setMaximumSize(QSize(36, 36));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../Imagenes/cerrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBclose->setIcon(icon4);
        pBclose->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(pBclose);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        pBanalize = new QPushButton(widget);
        pBanalize->setObjectName(QStringLiteral("pBanalize"));
        pBanalize->setMinimumSize(QSize(36, 36));
        pBanalize->setMaximumSize(QSize(36, 36));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../Imagenes/analizar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBanalize->setIcon(icon5);
        pBanalize->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(pBanalize);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        lEsearch = new QLineEdit(widget);
        lEsearch->setObjectName(QStringLiteral("lEsearch"));

        horizontalLayout->addWidget(lEsearch);

        lEremplace = new QLineEdit(widget);
        lEremplace->setObjectName(QStringLiteral("lEremplace"));

        horizontalLayout->addWidget(lEremplace);

        pBsearch = new QPushButton(widget);
        pBsearch->setObjectName(QStringLiteral("pBsearch"));
        pBsearch->setMinimumSize(QSize(36, 36));
        pBsearch->setMaximumSize(QSize(36, 36));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../Imagenes/buscar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBsearch->setIcon(icon6);
        pBsearch->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(pBsearch);

        pBreplace = new QPushButton(widget);
        pBreplace->setObjectName(QStringLiteral("pBreplace"));
        pBreplace->setMinimumSize(QSize(36, 36));
        pBreplace->setMaximumSize(QSize(36, 36));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../Imagenes/reemplazar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBreplace->setIcon(icon7);
        pBreplace->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(pBreplace);

        pBreplaceAll = new QPushButton(widget);
        pBreplaceAll->setObjectName(QStringLiteral("pBreplaceAll"));
        pBreplaceAll->setMinimumSize(QSize(36, 36));
        pBreplaceAll->setMaximumSize(QSize(36, 36));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../Imagenes/reemplazarTodo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBreplaceAll->setIcon(icon8);
        pBreplaceAll->setIconSize(QSize(36, 36));

        horizontalLayout->addWidget(pBreplaceAll);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(editor);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tWfiles = new QTabWidget(widget_2);
        tWfiles->setObjectName(QStringLiteral("tWfiles"));
        tWfiles->setAcceptDrops(false);
        tWfiles->setAutoFillBackground(true);

        verticalLayout_2->addWidget(tWfiles);


        verticalLayout->addWidget(widget_2);

        tabWidget->addTab(editor, QString());
        errores = new QWidget();
        errores->setObjectName(QStringLiteral("errores"));
        tabWidget->addTab(errores, QString());

        verticalLayout_3->addWidget(tabWidget);


        verticalLayout_4->addWidget(widget_3);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tWfiles->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "J2H_200915291_Editor", 0));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tabWidget->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        tabWidget->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        pBnew->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>New</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pBnew->setText(QString());
#ifndef QT_NO_TOOLTIP
        pBopen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Open</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pBopen->setText(QString());
#ifndef QT_NO_TOOLTIP
        pBsave->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Save</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pBsave->setText(QString());
#ifndef QT_NO_TOOLTIP
        pBsaveAs->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Save As</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pBsaveAs->setText(QString());
#ifndef QT_NO_TOOLTIP
        pBclose->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Close</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pBclose->setText(QString());
#ifndef QT_NO_TOOLTIP
        pBanalize->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Run</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pBanalize->setText(QString());
#ifndef QT_NO_TOOLTIP
        lEsearch->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Buscar...</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lEsearch->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        lEsearch->setText(QString());
        lEsearch->setPlaceholderText(QApplication::translate("MainWindow", "Search...", 0));
        lEremplace->setText(QString());
        lEremplace->setPlaceholderText(QApplication::translate("MainWindow", "Replace w\302\241th...", 0));
#ifndef QT_NO_TOOLTIP
        pBsearch->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Search</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pBsearch->setText(QString());
#ifndef QT_NO_TOOLTIP
        pBreplace->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Replace</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pBreplace->setText(QString());
#ifndef QT_NO_TOOLTIP
        pBreplaceAll->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Replace all</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pBreplaceAll->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(editor), QApplication::translate("MainWindow", "Editor", 0));
        tabWidget->setTabText(tabWidget->indexOf(errores), QApplication::translate("MainWindow", "Errores", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
