/********************************************************************************
** Form generated from reading UI file 'seachstubyid.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEACHSTUBYID_H
#define UI_SEACHSTUBYID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seachStuById
{
public:
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *sureBtn;

    void setupUi(QWidget *seachStuById)
    {
        if (seachStuById->objectName().isEmpty())
            seachStuById->setObjectName(QString::fromUtf8("seachStuById"));
        seachStuById->resize(280, 307);
        textBrowser = new QTextBrowser(seachStuById);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 50, 256, 192));
        lineEdit = new QLineEdit(seachStuById);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 113, 21));
        label = new QLabel(seachStuById);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 81, 16));
        pushButton = new QPushButton(seachStuById);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 260, 113, 32));
        sureBtn = new QPushButton(seachStuById);
        sureBtn->setObjectName(QString::fromUtf8("sureBtn"));
        sureBtn->setGeometry(QRect(220, 10, 61, 31));

        retranslateUi(seachStuById);

        QMetaObject::connectSlotsByName(seachStuById);
    } // setupUi

    void retranslateUi(QWidget *seachStuById)
    {
        seachStuById->setWindowTitle(QApplication::translate("seachStuById", "Form", nullptr));
        label->setText(QApplication::translate("seachStuById", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("seachStuById", "\345\256\214\346\210\220", nullptr));
        sureBtn->setText(QApplication::translate("seachStuById", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seachStuById: public Ui_seachStuById {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEACHSTUBYID_H
