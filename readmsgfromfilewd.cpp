#include "readmsgfromfilewd.h"
#include "ui_readmsgfromfilewd.h"
#include <QFile>
#include <fstream>

#include "student.h"

using namespace std;
extern QList<Student> lst;

readMsgFromFileWD::readMsgFromFileWD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::readMsgFromFileWD)
{
    ui->setupUi(this);

    connect(ui->finishBtn,               SIGNAL(clicked(bool)),  this,   SLOT(close()));
}

readMsgFromFileWD::~readMsgFromFileWD()
{
    delete ui;
}

void readMsgFromFileWD::readMsgFromFile()
{
    ui->textBrowser->setText("正在从文件中读取数据......");
	//QString path = QFileDialog::getOpenFileName(this,
	//	tr("Open File"),
	//	".",
	//	tr("Text Files(*.txt)"));
    ifstream ifile("info.txt");
        if(!ifile)
        {
            ui->textBrowser->append("文件打开失败！");
            return;
        }
        char ch;
        int i;
        for (i=0;i<20;i++)//读取数目
        {
            string s_name,s_id,s_score1, s_score2,s_score3,s_score4;
            if(!ifile.get(ch))
            {
                 ui->textBrowser->append("文件已读取完毕！");
                return;
            }
            while (ch!='/')//读取姓名
            {
                s_name+=ch;
                ifile.get(ch);
            }
            ifile.get(ch);
            while (ch!='/')//读取学号
            {
                s_id+=ch;
                ifile.get(ch);
            }
            ifile.get(ch);
            while(ch!='/')//读取分数
            {
                s_score1+=ch;
                 ifile.get(ch);
            }
			ifile.get(ch);
			while (ch != '/')//读取分数
			{
				s_score2 += ch;
				ifile.get(ch);
			}
			ifile.get(ch);
			while (ch != '/')//读取分数
			{
				s_score3 += ch;
				ifile.get(ch);
			}
			ifile.get(ch);
            while(ch!='\n')//读取分数
            {
                s_score4+=ch;
                if(!ifile.get(ch))
                {
                    ui->textBrowser->append("文件已读取完毕！");
                }
            }

			Student temp;
			strcpy(temp.name, s_name.c_str());
			strcpy(temp.ID, s_id.c_str());
			temp.score1 = atoi(s_score1.c_str());
			temp.score2 = atoi(s_score2.c_str());
			temp.score3 = atoi(s_score3.c_str());
			temp.score4 = atoi(s_score4.c_str());
			lst.push_back(temp);

   //         ui->textBrowser->append(QString::fromStdString(s_id));
   //         ui->textBrowser->append(QString::fromStdString(s_name));
   //         ui->textBrowser->append(QString::fromStdString(s_score1));
   //         ui->textBrowser->append(QString::fromStdString(s_score2));
			//ui->textBrowser->append(QString::fromStdString(s_score3));
			//ui->textBrowser->append(QString::fromStdString(s_score4));
    
        }

}

void readMsgFromFileWD::saveAsFile()
{
    ui->textBrowser->append("正在打开文件.....");
	//QString path = QFileDialog::getOpenFileName(this,
	//	tr("Open File"),
	//	".",
	//	tr("Text Files(*.txt)"));
    ofstream ofile("info.txt",ios::app);
        if (!ofile)
        {
            ui->textBrowser->append("打开文件失败......");
            return;
        }
        QList<Student>::iterator it;
        for(it = lst.begin(); it != lst.end(); ++it)
        {
            ofile<<it->name<<"/"<<it->ID<<"/"<<it->score1 << "/" << it->score2 << "/" << it->score3 << "/" << it->score4<<"\n";
        }
        ui->textBrowser->append("保存完毕...");
        ofile.close();
        return ;

}
