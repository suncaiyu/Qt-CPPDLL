#include "QtDll.h"
#include <iostream>
#include <QDebug>

QtDll::QtDll(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);
    EmptyFirstTest e;
    std::string s = e.Show();
    qDebug() << QString::fromStdString(s);
}
