#include "maple.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Maple w;
    w.showMaximized();
    return a.exec();
}
