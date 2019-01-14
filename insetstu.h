#ifndef INSETSTU_H
#define INSETSTU_H

#include <QWidget>

namespace Ui {
class InsetStuPanel;
}

class InsetStuPanel : public QWidget
{
    Q_OBJECT

public:
    explicit InsetStuPanel(QWidget *parent = 0);
    ~InsetStuPanel();

private:
    Ui::InsetStuPanel *ui;

public slots:
    void insertStu();
};

#endif // INSETSTU_H
