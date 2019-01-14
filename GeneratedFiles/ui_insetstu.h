/********************************************************************************
** Form generated from reading UI file 'insetstu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSETSTU_H
#define UI_INSETSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insetStu
{
public:
    QLineEdit *stuScore2LineText;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *stuIdLineText;
    QLabel *label_2;
    QLineEdit *stuNameLineText;
    QPushButton *finishBtn;
    QLineEdit *stuScore1LineText;
    QLabel *label_5;
    QLineEdit *laterStuIdLineText;
    QLabel *label_6;
    QLineEdit *stuScore3LineText;
    QLineEdit *stuScore4LineText;
    QLabel *label_7;

    void setupUi(QWidget *insetStu)
    {
        if (insetStu->objectName().isEmpty())
            insetStu->setObjectName(QString::fromUtf8("insetStu"));
        insetStu->resize(303, 360);
        stuScore2LineText = new QLineEdit(insetStu);
        stuScore2LineText->setObjectName(QString::fromUtf8("stuScore2LineText"));
        stuScore2LineText->setGeometry(QRect(70, 220, 41, 21));
        label = new QLabel(insetStu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 90, 151, 16));
        label_3 = new QLabel(insetStu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 190, 161, 16));
        label_4 = new QLabel(insetStu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 220, 161, 20));
        stuIdLineText = new QLineEdit(insetStu);
        stuIdLineText->setObjectName(QString::fromUtf8("stuIdLineText"));
        stuIdLineText->setGeometry(QRect(100, 110, 113, 21));
        label_2 = new QLabel(insetStu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 140, 151, 16));
        stuNameLineText = new QLineEdit(insetStu);
        stuNameLineText->setObjectName(QString::fromUtf8("stuNameLineText"));
        stuNameLineText->setGeometry(QRect(100, 160, 113, 21));
        finishBtn = new QPushButton(insetStu);
        finishBtn->setObjectName(QString::fromUtf8("finishBtn"));
        finishBtn->setGeometry(QRect(180, 320, 113, 32));
        stuScore1LineText = new QLineEdit(insetStu);
        stuScore1LineText->setObjectName(QString::fromUtf8("stuScore1LineText"));
        stuScore1LineText->setGeometry(QRect(70, 190, 41, 21));
        label_5 = new QLabel(insetStu);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 40, 181, 20));
        laterStuIdLineText = new QLineEdit(insetStu);
        laterStuIdLineText->setObjectName(QString::fromUtf8("laterStuIdLineText"));
        laterStuIdLineText->setGeometry(QRect(100, 60, 113, 21));
        label_6 = new QLabel(insetStu);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 220, 161, 16));
        stuScore3LineText = new QLineEdit(insetStu);
        stuScore3LineText->setObjectName(QString::fromUtf8("stuScore3LineText"));
        stuScore3LineText->setGeometry(QRect(180, 190, 41, 21));
        stuScore4LineText = new QLineEdit(insetStu);
        stuScore4LineText->setObjectName(QString::fromUtf8("stuScore4LineText"));
        stuScore4LineText->setGeometry(QRect(180, 220, 41, 21));
        label_7 = new QLabel(insetStu);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 190, 161, 16));

        retranslateUi(insetStu);

        QMetaObject::connectSlotsByName(insetStu);
    } // setupUi

    void retranslateUi(QWidget *insetStu)
    {
        insetStu->setWindowTitle(QApplication::translate("insetStu", "Form", nullptr));
        label->setText(QApplication::translate("insetStu", "\350\257\267\350\276\223\345\205\245\350\246\201\346\217\222\345\205\245\345\255\246\347\224\237\347\232\204\345\255\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("insetStu", "\347\272\277\346\200\247\344\273\243\346\225\260\357\274\232", nullptr));
        label_4->setText(QApplication::translate("insetStu", "\345\244\247\345\255\246\347\211\251\347\220\206\357\274\232", nullptr));
        label_2->setText(QApplication::translate("insetStu", "\350\257\267\350\276\223\345\205\245\350\246\201\346\217\222\345\205\245\345\255\246\347\224\237\347\232\204\345\247\223\345\220\215\357\274\232", nullptr));
        finishBtn->setText(QApplication::translate("insetStu", "\345\256\214\346\210\220", nullptr));
        label_5->setText(QApplication::translate("insetStu", "\350\257\267\350\276\223\345\205\245\350\242\253\346\217\222\345\205\245\345\255\246\347\224\237\347\232\204\345\255\246\345\217\267\357\274\232", nullptr));
        label_6->setText(QApplication::translate("insetStu", "\346\261\207\347\274\226\357\274\232", nullptr));
        label_7->setText(QApplication::translate("insetStu", "C++\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insetStu: public Ui_insetStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSETSTU_H
