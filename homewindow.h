#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H

#include <QMainWindow>
#include <student.h>
#include<qaction.h>
#include"qtextedit.h"
#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
#include<qtablewidget.h>
#include<qheaderview.h>
#include<qtimer.h>
#include<deletepanel.h>
namespace Ui {
class homeWindow;
}

class HomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomeWindow(QWidget *parent = 0);
    ~HomeWindow();
private:
    Ui::homeWindow *ui;
	int h = 0, l;

	QAction *inputAction;
	QAction *dispAction;
	QAction *sortAction;
	QAction *searchAction;
	QAction *fileOAction;
	QAction *fileSAction;
	QAction *modifyAction;
	QAction *deleteAction;


	QTableWidget* table;

public slots:
    void clearTable();
	void reFresh();
    void readStuMsgFormFile();
    void disStuMsg();
    void inpStuMsg();
    void sortStuAve();
    void search();
    void deleteStu();
    void modify();
    void write();
};



#endif // HOMEWINDOW_H
