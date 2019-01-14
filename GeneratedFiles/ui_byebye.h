/********************************************************************************
** Form generated from reading UI file 'byebye.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BYEBYE_H
#define UI_BYEBYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_byebye
{
public:
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *byebye)
    {
        if (byebye->objectName().isEmpty())
            byebye->setObjectName(QString::fromUtf8("byebye"));
        byebye->resize(282, 225);
        label = new QLabel(byebye);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 131, 16));
        line = new QFrame(byebye);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 30, 281, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(byebye);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 150, 81, 16));
        label_3 = new QLabel(byebye);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 70, 81, 16));
        label_4 = new QLabel(byebye);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 90, 121, 16));

        retranslateUi(byebye);

        QMetaObject::connectSlotsByName(byebye);
    } // setupUi

    void retranslateUi(QWidget *byebye)
    {
        byebye->setWindowTitle(QApplication::translate("byebye", "Form", nullptr));
        label->setText(QApplication::translate("byebye", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237v1.0", nullptr));
        label_2->setText(QApplication::translate("byebye", "\346\254\242\350\277\216\344\270\213\346\254\241\344\275\277\347\224\250", nullptr));
        label_3->setText(QApplication::translate("byebye", "EOS\345\205\250\345\212\233\346\211\223\351\200\240", nullptr));
        label_4->setText(QApplication::translate("byebye", "\345\217\252\344\270\272\347\273\231\346\202\250\346\234\200\345\245\275\347\232\204\346\234\215\345\212\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class byebye: public Ui_byebye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BYEBYE_H
