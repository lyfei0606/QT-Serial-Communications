#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QStringList>
#include <QIODevice>
#include <QMessageBox>
#include <QByteArray>
#include <QString>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QSerialPort *serial =new QSerialPort();     //创建串口指针

private slots:

    void on_pushButton_open_clicked();

    void on_pushButton_close_clicked();

    void on_pushButton_output_clicked();

    void on_pushButton_clearoutput_clicked();

    void on_pushButton_clearinput_clicked();

    void input();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
