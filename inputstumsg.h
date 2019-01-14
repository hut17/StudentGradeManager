#ifndef INPUTSTUMSG_H
#define INPUTSTUMSG_H

#include <QWidget>

class Student;
namespace Ui {
class InputStuMsgPanel;
}

class InputStuMsgPanel : public QWidget
{
    Q_OBJECT

public:
    explicit InputStuMsgPanel(QWidget *parent = 0);
    ~InputStuMsgPanel();

private:
    Ui::InputStuMsgPanel *ui;

public slots:
    void getStuMsg();

};

#endif // INPUTSTUMSG_H
