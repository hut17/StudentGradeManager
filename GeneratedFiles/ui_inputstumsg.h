/********************************************************************************
** Form generated from reading UI file 'inputstumsg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTSTUMSG_H
#define UI_INPUTSTUMSG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inputStuMsg
{
public:
    QLineEdit *stuIdLineText;
    QLineEdit *stuNameLineText;
    QLineEdit *stuScore1LineText;
    QLineEdit *stuScore2LineText;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *finishBtn;
    QLineEdit *stuScore3LineText;
    QLineEdit *stuScore4LineText;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *inputStuMsg)
    {
        if (inputStuMsg->objectName().isEmpty())
            inputStuMsg->setObjectName(QString::fromUtf8("inputStuMsg"));
        inputStuMsg->resize(298, 383);
        stuIdLineText = new QLineEdit(inputStuMsg);
        stuIdLineText->setObjectName(QString::fromUtf8("stuIdLineText"));
        stuIdLineText->setGeometry(QRect(100, 80, 113, 21));
        stuNameLineText = new QLineEdit(inputStuMsg);
        stuNameLineText->setObjectName(QString::fromUtf8("stuNameLineText"));
        stuNameLineText->setGeometry(QRect(100, 130, 113, 21));
        stuScore1LineText = new QLineEdit(inputStuMsg);
        stuScore1LineText->setObjectName(QString::fromUtf8("stuScore1LineText"));
        stuScore1LineText->setGeometry(QRect(130, 180, 41, 21));
        stuScore2LineText = new QLineEdit(inputStuMsg);
        stuScore2LineText->setObjectName(QString::fromUtf8("stuScore2LineText"));
        stuScore2LineText->setGeometry(QRect(130, 230, 41, 21));
        label = new QLabel(inputStuMsg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 60, 131, 16));
        label_2 = new QLabel(inputStuMsg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 110, 131, 16));
        label_3 = new QLabel(inputStuMsg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 160, 221, 20));
        label_4 = new QLabel(inputStuMsg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 210, 211, 20));
        finishBtn = new QPushButton(inputStuMsg);
        finishBtn->setObjectName(QString::fromUtf8("finishBtn"));
        finishBtn->setGeometry(QRect(180, 340, 113, 32));
        stuScore3LineText = new QLineEdit(inputStuMsg);
        stuScore3LineText->setObjectName(QString::fromUtf8("stuScore3LineText"));
        stuScore3LineText->setGeometry(QRect(130, 270, 41, 21));
        stuScore4LineText = new QLineEdit(inputStuMsg);
        stuScore4LineText->setObjectName(QString::fromUtf8("stuScore4LineText"));
        stuScore4LineText->setGeometry(QRect(130, 310, 41, 21));
        label_5 = new QLabel(inputStuMsg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 250, 211, 20));
        label_6 = new QLabel(inputStuMsg);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 290, 211, 20));

        retranslateUi(inputStuMsg);

        QMetaObject::connectSlotsByName(inputStuMsg);
    } // setupUi

    void retranslateUi(QWidget *inputStuMsg)
    {
        inputStuMsg->setWindowTitle(QApplication::translate("inputStuMsg", "Form", nullptr));
        label->setText(QApplication::translate("inputStuMsg", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\347\232\204\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("inputStuMsg", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\347\232\204\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("inputStuMsg", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\347\272\277\346\200\247\344\273\243\346\225\260\346\210\220\347\273\251\357\274\232", nullptr));
        label_4->setText(QApplication::translate("inputStuMsg", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\345\244\247\345\255\246\347\211\251\347\220\206\346\210\220\347\273\251:", nullptr));
        finishBtn->setText(QApplication::translate("inputStuMsg", "\345\256\214\346\210\220", nullptr));
        label_5->setText(QApplication::translate("inputStuMsg", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\351\235\242\345\220\221\345\257\271\350\261\241\347\274\226\347\250\213\346\210\220\347\273\251:", nullptr));
        label_6->setText(QApplication::translate("inputStuMsg", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\346\261\207\347\274\226\350\257\255\350\250\200\346\210\220\347\273\251:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inputStuMsg: public Ui_inputStuMsg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTSTUMSG_H
