#include "maple.h"
#include <QApplication>
#include "globals.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Maple w;
    w.showMaximized();
    int status = a.exec();
    if (Globals::gRenderer != nullptr)
        delete Globals::gRenderer;
    return status;
}
