/********************************************************************************
** Form generated from reading UI file 'displaystumsg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSTUMSG_H
#define UI_DISPLAYSTUMSG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_displayStuMsg
{
public:
    QTextBrowser *textBrowser;
    QPushButton *finishBtn;

    void setupUi(QWidget *displayStuMsg)
    {
        if (displayStuMsg->objectName().isEmpty())
            displayStuMsg->setObjectName(QString::fromUtf8("displayStuMsg"));
        displayStuMsg->resize(400, 77);
        textBrowser = new QTextBrowser(displayStuMsg);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 10, 261, 21));
        finishBtn = new QPushButton(displayStuMsg);
        finishBtn->setObjectName(QString::fromUtf8("finishBtn"));
        finishBtn->setGeometry(QRect(250, 40, 113, 32));

        retranslateUi(displayStuMsg);

        QMetaObject::connectSlotsByName(displayStuMsg);
    } // setupUi

    void retranslateUi(QWidget *displayStuMsg)
    {
        displayStuMsg->setWindowTitle(QApplication::translate("displayStuMsg", "Form", nullptr));
        finishBtn->setText(QApplication::translate("displayStuMsg", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayStuMsg: public Ui_displayStuMsg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSTUMSG_H
