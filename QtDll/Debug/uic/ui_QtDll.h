/********************************************************************************
** Form generated from reading UI file 'QtDll.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDLL_H
#define UI_QTDLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDllClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtDllClass)
    {
        if (QtDllClass->objectName().isEmpty())
            QtDllClass->setObjectName(QString::fromUtf8("QtDllClass"));
        QtDllClass->resize(600, 400);
        menuBar = new QMenuBar(QtDllClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QtDllClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtDllClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtDllClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtDllClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QtDllClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtDllClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtDllClass->setStatusBar(statusBar);

        retranslateUi(QtDllClass);

        QMetaObject::connectSlotsByName(QtDllClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtDllClass)
    {
        QtDllClass->setWindowTitle(QCoreApplication::translate("QtDllClass", "QtDll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtDllClass: public Ui_QtDllClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDLL_H
