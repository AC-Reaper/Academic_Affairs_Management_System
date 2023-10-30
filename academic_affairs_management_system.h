#ifndef ACADEMIC_AFFAIRS_MANAGEMENT_SYSTEM_H
#define ACADEMIC_AFFAIRS_MANAGEMENT_SYSTEM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Academic_Affairs_Management_System; }
QT_END_NAMESPACE

class Academic_Affairs_Management_System : public QMainWindow
{
    Q_OBJECT

public:
    Academic_Affairs_Management_System(QWidget *parent = nullptr);
    ~Academic_Affairs_Management_System();

private:
    Ui::Academic_Affairs_Management_System *ui;
};
#endif // ACADEMIC_AFFAIRS_MANAGEMENT_SYSTEM_H
