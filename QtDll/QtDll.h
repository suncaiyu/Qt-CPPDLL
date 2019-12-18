#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtDll.h"
#include "EmptyFirstTest.h"

class QtDll : public QMainWindow
{
    Q_OBJECT

public:
    QtDll(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtDllClass *ui;
};
