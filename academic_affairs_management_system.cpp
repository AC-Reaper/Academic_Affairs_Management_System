#include "academic_affairs_management_system.h"
#include "./ui_academic_affairs_management_system.h"

Academic_Affairs_Management_System::Academic_Affairs_Management_System(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Academic_Affairs_Management_System)
{
    ui->setupUi(this);
}

Academic_Affairs_Management_System::~Academic_Affairs_Management_System()
{
    delete ui;
}

