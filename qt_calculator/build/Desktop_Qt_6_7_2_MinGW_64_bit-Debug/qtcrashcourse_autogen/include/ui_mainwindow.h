/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtFirstNum;
    QLineEdit *txtSecondNum;
    QPushButton *btnAdd;
    QPushButton *btnSub;
    QPushButton *btnDiv;
    QPushButton *btnMul;
    QLabel *label_3;
    QLineEdit *txtResult;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(833, 571);
        MainWindow->setIconSize(QSize(80, 80));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 80, 161, 61));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 160, 161, 61));
        label_2->setFont(font);
        txtFirstNum = new QLineEdit(centralwidget);
        txtFirstNum->setObjectName("txtFirstNum");
        txtFirstNum->setGeometry(QRect(200, 100, 161, 28));
        txtSecondNum = new QLineEdit(centralwidget);
        txtSecondNum->setObjectName("txtSecondNum");
        txtSecondNum->setGeometry(QRect(200, 180, 161, 28));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(70, 280, 83, 29));
        btnSub = new QPushButton(centralwidget);
        btnSub->setObjectName("btnSub");
        btnSub->setGeometry(QRect(200, 280, 83, 31));
        btnDiv = new QPushButton(centralwidget);
        btnDiv->setObjectName("btnDiv");
        btnDiv->setGeometry(QRect(480, 280, 83, 29));
        btnMul = new QPushButton(centralwidget);
        btnMul->setObjectName("btnMul");
        btnMul->setGeometry(QRect(350, 280, 83, 29));
        btnMul->setMinimumSize(QSize(20, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 360, 161, 61));
        txtResult = new QLineEdit(centralwidget);
        txtResult->setObjectName("txtResult");
        txtResult->setGeometry(QRect(180, 370, 161, 28));
        txtResult->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 20, 311, 41));
        label_4->setLineWidth(5);
        label_4->setTextFormat(Qt::PlainText);
        label_4->setScaledContents(false);
        label_4->setWordWrap(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Number :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second Number :", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "WELCOME TO DASTAGIR QT CALCULATOR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
