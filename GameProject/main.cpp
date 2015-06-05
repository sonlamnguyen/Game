#include <QApplication>
#include "pagewaitting.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PageWaitting w;
    w.show();
    
    return a.exec();
}
