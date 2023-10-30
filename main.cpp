#include "academic_affairs_management_system.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Academic_Affairs_Management_System w;
    w.show();
    return a.exec();
}
