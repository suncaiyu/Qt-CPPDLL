#include "QtDll.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtDll w;
    w.show();
    return a.exec();
}
