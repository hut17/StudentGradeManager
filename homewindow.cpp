#include "homewindow.h"
#include "ui_homewindow.h"
#include "readmsgfromfilewd.h"
#include <QList>
#include <QDialog>
#include <iostream>
#include "student.h"
#include "displaystumsg.h"
#include "inputstumsg.h"
#include "seachstubyid.h"
#include "insetstu.h"
#include "modifystumsg.h"
#include<qdebug.h>

class Student;
QList<Student> lst;


HomeWindow::HomeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::homeWindow)
{
    ui->setupUi(this);
	setFixedSize(690, 560);
	QTimer *timer = new QTimer(this);
	connect(timer, &QTimer::timeout, this, &HomeWindow::disStuMsg);
    timer->start(100);

#pragma region Actions

	dispAction = new QAction(QIcon(":/icons/display.png"), tr("&Disp..."), this);
	dispAction->setStatusTip(tr("显示学生成绩"));


	inputAction = new QAction(QIcon(":/icons/input.png"), tr("&Input..."), this);
	inputAction->setStatusTip(tr("输入学生成绩"));


	sortAction = new QAction(QIcon(":/icons/sort.png"), tr("&Sort..."), this);
	sortAction->setStatusTip(tr("对学生成绩进行排序"));



	searchAction = new QAction(QIcon(":/icons/search.png"), tr("&Serach..."), this);
	searchAction->setStatusTip(tr("按学号查找学生信息"));

    fileOAction = new QAction(QIcon(":/icons/fileo.png"), tr("&Read..."), this);
	fileOAction->setShortcut(QKeySequence::Open);
	fileOAction->setStatusTip(tr("从文件中读取信息"));

    fileSAction = new QAction(QIcon(":/icons/files.png"), tr("&Save..."), this);
	fileSAction->setShortcut(QKeySequence::Save);
	fileSAction->setStatusTip(tr("将信息存入文件"));

	modifyAction = new QAction(QIcon(":/icons/modify.png"), tr("&Modify..."), this);
	modifyAction->setStatusTip(tr("修改..."));

    deleteAction = new QAction(QIcon(":/icons/delete.png"), tr("&Delete..."), this);
	deleteAction->setStatusTip(tr("删除"));


	QMenu *start = menuBar()->addMenu(tr("&开始"));
	QMenu *file = menuBar()->addMenu(tr("&文件"));



	start->addAction(inputAction);
	start->addAction(dispAction);
    start->addAction(searchAction);
	start->addAction(sortAction);
	start->addAction(modifyAction);
	start->addAction(deleteAction);

	file->addAction(fileSAction);
	file->addAction(fileOAction);


	QToolBar *toolBar = addToolBar(tr("&开始"));
	toolBar->addAction(dispAction);
	toolBar->addAction(inputAction);
	toolBar->addAction(sortAction);
	toolBar->addAction(searchAction);
	toolBar->addAction(fileOAction);
	toolBar->addAction(fileSAction);
	toolBar->addAction(modifyAction);
//	toolBar->addAction(deleteAction);

	toolBar->setStatusTip(tr("waeae"));


    connect(dispAction, &QAction::triggered, this, &HomeWindow::disStuMsg);
	connect(inputAction, &QAction::triggered, this, &HomeWindow::inpStuMsg);
	connect(sortAction, &QAction::triggered, this, &HomeWindow::sortStuAve);
	connect(searchAction, &QAction::triggered, this, &HomeWindow::search);
	connect(fileOAction, &QAction::triggered, this, &HomeWindow::readStuMsgFormFile);
	connect(fileSAction, &QAction::triggered, this, &HomeWindow::write);
	connect(modifyAction, &QAction::triggered, this, &HomeWindow::modify);
connect(deleteAction,&QAction::triggered,this,&HomeWindow::deleteStu);

#pragma endregion
#pragma region Table
 table = new QTableWidget(this);



table->setRowCount(30);
table->setColumnCount(6);
table->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"学号"<<"线性代数"<<"大学物理"<<"面向对象编程"<<"汇编语言");
table->setItem(0,0,new QTableWidgetItem("李小明")); 
table->setEditTriggers(QAbstractItemView::NoEditTriggers);


table->verticalHeader()->hide();
table->horizontalHeader()->setStretchLastSection(true);
table->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);

setCentralWidget(table);




//
#pragma endregion





  /*  connect(ui->readByfileBtn,                    SIGNAL(clicked(bool)),  this,   SLOT(readStuMsgFormFile()));
    connect(ui->outputStudentMsgBtn,              SIGNAL(clicked(bool)),  this,   SLOT(disStuMsg()));
    connect(ui->inputStudentMsgBtn,               SIGNAL(clicked(bool)),  this,   SLOT(inpStuMsg()));
    connect(ui->sortBtn,                          SIGNAL(clicked(bool)),  this,   SLOT(sortStuAve()));
    connect(ui->findMsgWithStudentNumBtn,         SIGNAL(clicked(bool)),  this,   SLOT(search()));
    connect(ui->insertStudentMsgBtn,              SIGNAL(clicked(bool)),  this,   SLOT(insert()));
    connect(ui->modifyStudentMsgBtn,              SIGNAL(clicked(bool)),  this,   SLOT(modify()));
    connect(ui->writeAllRecordToFileBtn,          SIGNAL(clicked(bool)),  this,   SLOT(write()));
    connect(ui->exitBtn,                          SIGNAL(clicked(bool)),  this,   SLOT(byeBye()));*/
}

HomeWindow::~HomeWindow()
{
    delete ui;
}

void HomeWindow::readStuMsgFormFile()
{
    readMsgFromFileWD* readWD = new readMsgFromFileWD;
    readWD->setWindowTitle("读取数据");
    readWD->show();
    readWD->readMsgFromFile();
}

void HomeWindow::disStuMsg()
{

    /*displayStuMsg *dis = new displayStuMsg;
    dis->setWindowTitle("显示学生信息");
    dis->show();
    dis->dispStuMsg();*/

	QList<Student>::iterator it;

	for (it = lst.begin() + h; it != lst.end(); it++)
	{
		QString str1 = QString::QString::fromLocal8Bit(it->name);
		QString str2 = QString::QString::fromLocal8Bit(it->ID);
		QString str3 = QString::QString::number(it->score1);
		QString str4 = QString::QString::number(it->score2);
		QString str5 = QString::QString::number(it->score3);
		QString str6 = QString::QString::number(it->score4);



		table->setItem(h, l, new QTableWidgetItem(str1));
		table->setItem(h, l + 1, new QTableWidgetItem(str2));
		table->setItem(h, l + 2, new QTableWidgetItem(str3));
		table->setItem(h, l + 3, new QTableWidgetItem(str4));
		table->setItem(h, l + 4, new QTableWidgetItem(str5));
		table->setItem(h, l + 5, new QTableWidgetItem(str6));


		h++;

	}
}

void HomeWindow::deleteStu(){
DeletePanel *dep=new DeletePanel(this);
dep->setWindowTitle("删除学生信息");
dep->show();

}
void HomeWindow::inpStuMsg()
{
    inputStuMsg *inp = new inputStuMsg;
    inp->setWindowTitle("输入学生信息");
    inp->show();
}
void HomeWindow::clearTable(){
for(int i=0;i<6;i++)
{
    for(int j=0;j<30;j++)
    {
        table->setItem(i, j, new QTableWidgetItem(""));

    }
}

}
void HomeWindow::reFresh()
{
	h = 0;
}
void HomeWindow::sortStuAve()
{
	h = 0;
    displayStuMsg *dis = new displayStuMsg;
    dis->setWindowTitle("按降序对学生平均分进行排序");
    dis->show();
    dis->sortWithStuAve();
}

void HomeWindow::search()
{
    seachStuById *sea = new seachStuById;
    sea->setWindowTitle("根据学号查找学生信息");
    sea->show();
}



void HomeWindow::modify()
{
    modifyStuMsg *mod = new modifyStuMsg(this);
    mod->setWindowTitle("修改学生信息");
    mod->show();
}

void HomeWindow::write()
{
    readMsgFromFileWD* readWD = new readMsgFromFileWD;
    readWD->setWindowTitle("将数据写入文件");
    readWD->show();
    readWD->saveAsFile();
}

