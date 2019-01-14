#ifndef READMSGFROMFILEWD_H
#define READMSGFROMFILEWD_H

#include <QWidget>
#include<qfiledialog.h>
#include<string>
namespace Ui {
class ReadMsgFromFilePanel;
}

class ReadMsgFromFilePanel : public QWidget
{
    Q_OBJECT

public:
    explicit ReadMsgFromFilePanel(QWidget *parent = 0);
    ~ReadMsgFromFilePanel();
      void readMsgFromFile();
      void saveAsFile();

private:
    Ui::ReadMsgFromFilePanel *ui;
};

#endif // READMSGFROMFILEWD_H
