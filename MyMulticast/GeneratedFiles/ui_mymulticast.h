/********************************************************************************
** Form generated from reading UI file 'mymulticast.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMULTICAST_H
#define UI_MYMULTICAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMulticastClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyMulticastClass)
    {
        if (MyMulticastClass->objectName().isEmpty())
            MyMulticastClass->setObjectName(QStringLiteral("MyMulticastClass"));
        MyMulticastClass->resize(600, 400);
        menuBar = new QMenuBar(MyMulticastClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MyMulticastClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyMulticastClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyMulticastClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MyMulticastClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MyMulticastClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MyMulticastClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyMulticastClass->setStatusBar(statusBar);

        retranslateUi(MyMulticastClass);

        QMetaObject::connectSlotsByName(MyMulticastClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyMulticastClass)
    {
        MyMulticastClass->setWindowTitle(QApplication::translate("MyMulticastClass", "MyMulticast", 0));
    } // retranslateUi

};

namespace Ui {
    class MyMulticastClass: public Ui_MyMulticastClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMULTICAST_H
