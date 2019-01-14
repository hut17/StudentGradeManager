/********************************************************************************
** Form generated from reading UI file 'homewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homeWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *outputStudentMsgBtn;
    QPushButton *inputStudentMsgBtn;
    QPushButton *sortBtn;
    QPushButton *findMsgWithStudentNumBtn;
    QPushButton *insertStudentMsgBtn;
    QPushButton *modifyStudentMsgBtn;
    QPushButton *readByfileBtn;
    QPushButton *writeAllRecordToFileBtn;
    QPushButton *exitBtn;
    QLabel *label_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *homeWindow)
    {
        if (homeWindow->objectName().isEmpty())
            homeWindow->setObjectName(QString::fromUtf8("homeWindow"));
        homeWindow->resize(315, 489);
        centralWidget = new QWidget(homeWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 271, 371));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        outputStudentMsgBtn = new QPushButton(layoutWidget);
        outputStudentMsgBtn->setObjectName(QString::fromUtf8("outputStudentMsgBtn"));
        QFont font;
        font.setPointSize(11);
        outputStudentMsgBtn->setFont(font);

        verticalLayout->addWidget(outputStudentMsgBtn);

        inputStudentMsgBtn = new QPushButton(layoutWidget);
        inputStudentMsgBtn->setObjectName(QString::fromUtf8("inputStudentMsgBtn"));
        inputStudentMsgBtn->setFont(font);

        verticalLayout->addWidget(inputStudentMsgBtn);

        sortBtn = new QPushButton(layoutWidget);
        sortBtn->setObjectName(QString::fromUtf8("sortBtn"));
        sortBtn->setFont(font);

        verticalLayout->addWidget(sortBtn);

        findMsgWithStudentNumBtn = new QPushButton(layoutWidget);
        findMsgWithStudentNumBtn->setObjectName(QString::fromUtf8("findMsgWithStudentNumBtn"));
        findMsgWithStudentNumBtn->setFont(font);

        verticalLayout->addWidget(findMsgWithStudentNumBtn);

        insertStudentMsgBtn = new QPushButton(layoutWidget);
        insertStudentMsgBtn->setObjectName(QString::fromUtf8("insertStudentMsgBtn"));
        insertStudentMsgBtn->setFont(font);

        verticalLayout->addWidget(insertStudentMsgBtn);

        modifyStudentMsgBtn = new QPushButton(layoutWidget);
        modifyStudentMsgBtn->setObjectName(QString::fromUtf8("modifyStudentMsgBtn"));
        modifyStudentMsgBtn->setFont(font);

        verticalLayout->addWidget(modifyStudentMsgBtn);

        readByfileBtn = new QPushButton(layoutWidget);
        readByfileBtn->setObjectName(QString::fromUtf8("readByfileBtn"));
        readByfileBtn->setFont(font);

        verticalLayout->addWidget(readByfileBtn);

        writeAllRecordToFileBtn = new QPushButton(layoutWidget);
        writeAllRecordToFileBtn->setObjectName(QString::fromUtf8("writeAllRecordToFileBtn"));
        writeAllRecordToFileBtn->setFont(font);

        verticalLayout->addWidget(writeAllRecordToFileBtn);

        exitBtn = new QPushButton(layoutWidget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setFont(font);

        verticalLayout->addWidget(exitBtn);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 291, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 420, 141, 20));
        homeWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(homeWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 315, 22));
        homeWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(homeWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        homeWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(homeWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        homeWindow->setStatusBar(statusBar);

        retranslateUi(homeWindow);

        QMetaObject::connectSlotsByName(homeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *homeWindow)
    {
        homeWindow->setWindowTitle(QApplication::translate("homeWindow", "homeWindow", nullptr));
        outputStudentMsgBtn->setText(QApplication::translate("homeWindow", "\346\230\276\347\244\272\346\211\200\346\234\211\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        inputStudentMsgBtn->setText(QApplication::translate("homeWindow", "\350\276\223\345\205\245\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        sortBtn->setText(QApplication::translate("homeWindow", "\346\214\211\345\271\263\345\235\207\345\210\206\345\215\207\351\231\215\346\216\222\345\272\217", nullptr));
        findMsgWithStudentNumBtn->setText(QApplication::translate("homeWindow", "\346\215\256\345\255\246\345\217\267\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        insertStudentMsgBtn->setText(QApplication::translate("homeWindow", "\346\217\222\345\205\245\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        modifyStudentMsgBtn->setText(QApplication::translate("homeWindow", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        readByfileBtn->setText(QApplication::translate("homeWindow", "\344\273\216\346\226\207\344\273\266\344\270\255\350\257\273\345\217\226\346\225\260\346\215\256", nullptr));
        writeAllRecordToFileBtn->setText(QApplication::translate("homeWindow", "\345\260\206\346\211\200\346\234\211\350\256\260\345\275\225\345\206\231\345\205\245\346\226\207\344\273\266", nullptr));
        exitBtn->setText(QApplication::translate("homeWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", nullptr));
        label_2->setText(QApplication::translate("homeWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">&gt;&gt;&gt;&gt; \345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237 &lt;&lt;&lt;&lt;</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("homeWindow", "Copyrigth pjhubs.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homeWindow: public Ui_homeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
