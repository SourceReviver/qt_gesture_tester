#include <QApplication>
#include <QPushButton>
#include "touchpadtester.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    auto* t = new touchPadTester();
    t->show();

    return QApplication::exec();
}
