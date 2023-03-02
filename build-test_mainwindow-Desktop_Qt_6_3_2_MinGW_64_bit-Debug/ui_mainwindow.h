/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QTextEdit *textEdit_input;
    QPushButton *pushButton_output;
    QTextEdit *textEdit_output;
    QComboBox *comboBox_port;
    QComboBox *comboBox_baud;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_byte;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_check;
    QComboBox *comboBox_stop;
    QLabel *label_5;
    QPushButton *pushButton_clearoutput;
    QPushButton *pushButton_clearinput;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(619, 368);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_open = new QPushButton(centralwidget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setGeometry(QRect(430, 50, 71, 24));
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(430, 230, 71, 24));
        textEdit_input = new QTextEdit(centralwidget);
        textEdit_input->setObjectName(QString::fromUtf8("textEdit_input"));
        textEdit_input->setGeometry(QRect(10, 20, 331, 171));
        pushButton_output = new QPushButton(centralwidget);
        pushButton_output->setObjectName(QString::fromUtf8("pushButton_output"));
        pushButton_output->setGeometry(QRect(170, 300, 75, 24));
        textEdit_output = new QTextEdit(centralwidget);
        textEdit_output->setObjectName(QString::fromUtf8("textEdit_output"));
        textEdit_output->setGeometry(QRect(10, 240, 331, 51));
        comboBox_port = new QComboBox(centralwidget);
        comboBox_port->setObjectName(QString::fromUtf8("comboBox_port"));
        comboBox_port->setGeometry(QRect(430, 80, 71, 22));
        comboBox_baud = new QComboBox(centralwidget);
        comboBox_baud->setObjectName(QString::fromUtf8("comboBox_baud"));
        comboBox_baud->setGeometry(QRect(430, 110, 71, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 80, 31, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 110, 41, 21));
        comboBox_byte = new QComboBox(centralwidget);
        comboBox_byte->setObjectName(QString::fromUtf8("comboBox_byte"));
        comboBox_byte->setGeometry(QRect(430, 140, 71, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 140, 41, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(370, 170, 51, 20));
        comboBox_check = new QComboBox(centralwidget);
        comboBox_check->setObjectName(QString::fromUtf8("comboBox_check"));
        comboBox_check->setGeometry(QRect(430, 170, 71, 22));
        comboBox_stop = new QComboBox(centralwidget);
        comboBox_stop->setObjectName(QString::fromUtf8("comboBox_stop"));
        comboBox_stop->setGeometry(QRect(430, 200, 71, 22));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 200, 41, 21));
        pushButton_clearoutput = new QPushButton(centralwidget);
        pushButton_clearoutput->setObjectName(QString::fromUtf8("pushButton_clearoutput"));
        pushButton_clearoutput->setGeometry(QRect(260, 300, 75, 24));
        pushButton_clearinput = new QPushButton(centralwidget);
        pushButton_clearinput->setObjectName(QString::fromUtf8("pushButton_clearinput"));
        pushButton_clearinput->setGeometry(QRect(260, 200, 75, 24));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 290, 41, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 190, 41, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 619, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        pushButton_output->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        pushButton_clearoutput->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", nullptr));
        pushButton_clearinput->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\345\214\272", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\345\214\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
