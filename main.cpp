#include "AdressLibrary.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AdressLibrary w;
    w.show();
    return a.exec();
}
