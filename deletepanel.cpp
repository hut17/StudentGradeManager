#include "deletepanel.h"
#include "ui_deletepanel.h"
extern QList<Student> lst;

DeletePanel::DeletePanel(QWidget *parent) :

    ui(new Ui::DeletePanel)
{
    ui->setupUi(this);
    connect(ui->btn,            SIGNAL(clicked(bool)),  this,   SLOT(deleteStu()));
    connect(ui->btn,            SIGNAL(clicked(bool)),  parent,   SLOT(clearTable()));

}

DeletePanel::~DeletePanel()
{
    delete ui;
}
void DeletePanel::deleteStu(){




    lst.clear();
    this->close();

/*
   QList<Student>::iterator it;
   QByteArray b = ui->line->text().toLatin1();
    char *id = b.data();

int i=0;
    for(it = lst.begin(); it != lst.end(); ++it)
    {


        if(it->ID == id)
       {

           lst.removeOne(*it);
            break;
       }
        i++;
    }
    this->close();

*/
}
