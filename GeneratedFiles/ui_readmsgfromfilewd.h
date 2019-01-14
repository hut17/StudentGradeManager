/********************************************************************************
** Form generated from reading UI file 'readmsgfromfilewd.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READMSGFROMFILEWD_H
#define UI_READMSGFROMFILEWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_readMsgFromFileWD
{
public:
    QPushButton *finishBtn;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *readMsgFromFileWD)
    {
        if (readMsgFromFileWD->objectName().isEmpty())
            readMsgFromFileWD->setObjectName(QString::fromUtf8("readMsgFromFileWD"));
        readMsgFromFileWD->resize(357, 360);
        finishBtn = new QPushButton(readMsgFromFileWD);
        finishBtn->setObjectName(QString::fromUtf8("finishBtn"));
        finishBtn->setGeometry(QRect(230, 310, 113, 32));
        textBrowser = new QTextBrowser(readMsgFromFileWD);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 40, 281, 231));

        retranslateUi(readMsgFromFileWD);

        QMetaObject::connectSlotsByName(readMsgFromFileWD);
    } // setupUi

    void retranslateUi(QWidget *readMsgFromFileWD)
    {
        readMsgFromFileWD->setWindowTitle(QApplication::translate("readMsgFromFileWD", "Form", nullptr));
        finishBtn->setText(QApplication::translate("readMsgFromFileWD", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class readMsgFromFileWD: public Ui_readMsgFromFileWD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READMSGFROMFILEWD_H
