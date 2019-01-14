#ifndef SEACHSTUBYID_H
#define SEACHSTUBYID_H

#include <QWidget>

namespace Ui {
class SeachStuByIdPanel;
}

class SeachStuByIdPanel : public QWidget
{
    Q_OBJECT

public:
    explicit SeachStuByIdPanel(QWidget *parent = 0);
    ~SeachStuByIdPanel();

private:
    Ui::SeachStuByIdPanel *ui;
public slots:
    void searchStuById();
};

#endif // SEACHSTUBYID_H
