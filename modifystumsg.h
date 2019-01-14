#ifndef MODIFYSTUMSG_H
#define MODIFYSTUMSG_H

#include <QWidget>
namespace Ui {
class ModifyStuMsgPanel;
}

class ModifyStuMsgPanel : public QWidget
{
    Q_OBJECT

public:
    explicit ModifyStuMsgPanel(QWidget *parent = 0);
    ~ModifyStuMsgPanel();
private:
    Ui::ModifyStuMsgPanel *ui;

public slots:
    void modifyMsg();

};

#endif // MODIFYSTUMSG_H
