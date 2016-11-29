#include "login.h"
#include <QApplication>
#include <QComboBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;

    w.show();

    return a.exec();
}
