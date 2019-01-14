#include "homewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HomeWindow w;
    w.setWindowTitle("学生成绩管理系统 v1.0");
    w.show();

    return a.exec();
}
