#ifndef DELETEPANEL_H
#define DELETEPANEL_H

#include <QWidget>
#include<student.h>

namespace Ui {
class DeletePanel;
}

class DeletePanel : public QWidget
{
    Q_OBJECT

public:
    explicit DeletePanel(QWidget *parent = nullptr);
    ~DeletePanel();

private:
    Ui::DeletePanel *ui;
public slots:
    void deleteStu();
};

#endif // DELETEPANEL_H
