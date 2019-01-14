/********************************************************************************
** Form generated from reading UI file 'modifystumsg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTUMSG_H
#define UI_MODIFYSTUMSG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyStuMsg
{
public:
    QLabel *label;
    QLineEdit *modifyIDlineEdit;
    QLabel *label_2;
    QLineEdit *newIDlineEdit;
    QLabel *label_3;
    QLineEdit *newNamelineEdit;
    QLabel *label_4;
    QLineEdit *newScore1lineEdit;
    QLabel *label_5;
    QLineEdit *newScore2lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *modifyStuMsg)
    {
        if (modifyStuMsg->objectName().isEmpty())
            modifyStuMsg->setObjectName(QString::fromUtf8("modifyStuMsg"));
        modifyStuMsg->resize(342, 309);
        label = new QLabel(modifyStuMsg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 151, 16));
        modifyIDlineEdit = new QLineEdit(modifyStuMsg);
        modifyIDlineEdit->setObjectName(QString::fromUtf8("modifyIDlineEdit"));
        modifyIDlineEdit->setGeometry(QRect(110, 40, 113, 21));
        label_2 = new QLabel(modifyStuMsg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 80, 91, 16));
        newIDlineEdit = new QLineEdit(modifyStuMsg);
        newIDlineEdit->setObjectName(QString::fromUtf8("newIDlineEdit"));
        newIDlineEdit->setGeometry(QRect(160, 80, 113, 21));
        label_3 = new QLabel(modifyStuMsg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 120, 91, 16));
        newNamelineEdit = new QLineEdit(modifyStuMsg);
        newNamelineEdit->setObjectName(QString::fromUtf8("newNamelineEdit"));
        newNamelineEdit->setGeometry(QRect(160, 120, 113, 21));
        label_4 = new QLabel(modifyStuMsg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 160, 91, 16));
        newScore1lineEdit = new QLineEdit(modifyStuMsg);
        newScore1lineEdit->setObjectName(QString::fromUtf8("newScore1lineEdit"));
        newScore1lineEdit->setGeometry(QRect(160, 160, 113, 21));
        label_5 = new QLabel(modifyStuMsg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 200, 91, 16));
        newScore2lineEdit = new QLineEdit(modifyStuMsg);
        newScore2lineEdit->setObjectName(QString::fromUtf8("newScore2lineEdit"));
        newScore2lineEdit->setGeometry(QRect(160, 200, 113, 21));
        pushButton = new QPushButton(modifyStuMsg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 250, 91, 32));

        retranslateUi(modifyStuMsg);

        QMetaObject::connectSlotsByName(modifyStuMsg);
    } // setupUi

    void retranslateUi(QWidget *modifyStuMsg)
    {
        modifyStuMsg->setWindowTitle(QApplication::translate("modifyStuMsg", "Form", nullptr));
        label->setText(QApplication::translate("modifyStuMsg", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\345\255\246\347\224\237\347\232\204\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("modifyStuMsg", "\344\277\256\346\224\271\345\220\216\347\232\204\345\255\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("modifyStuMsg", "\344\277\256\346\224\271\345\220\216\347\232\204\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QApplication::translate("modifyStuMsg", "\344\277\256\346\224\271\345\220\216\347\232\204\346\210\220\347\273\2511:", nullptr));
        label_5->setText(QApplication::translate("modifyStuMsg", "\344\277\256\346\224\271\345\220\216\347\232\204\346\210\220\347\273\2512:", nullptr));
        pushButton->setText(QApplication::translate("modifyStuMsg", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyStuMsg: public Ui_modifyStuMsg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTUMSG_H
