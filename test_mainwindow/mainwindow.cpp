#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (const QSerialPortInfo &info : QSerialPortInfo::availablePorts())
    {
        ui->comboBox_port->addItem(info.portName());     //遍历可用串口，将串口写入下拉框中
    }

    QStringList baudList;
    baudList << "115200" << "57600" << "9600" << "4800" ;
    ui->comboBox_baud->addItems(baudList);     //将波特率添加到下拉列表
    ui->comboBox_baud->setCurrentIndex(2);     //设置默认选中波特率9600

    QStringList byteList;
    byteList << "8" << "7" << "6" << "5" ;
    ui->comboBox_byte->addItems(byteList);     //将数据位添加到下拉列表
    ui->comboBox_byte->setCurrentIndex(0);     //设置默认选中数据位8

    QStringList checkList;     //设置校验位,默认为无
    checkList << "None";
    ui->comboBox_check->addItems(checkList);

    QStringList stopList;     //设置停止位,默认为1
    stopList << "1";
    ui->comboBox_stop->addItems(stopList);

    ui->textEdit_input->setReadOnly(true);       //将接收区设置为只读
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_open_clicked()
{
    serial->setPortName(ui->comboBox_port->currentText());     //设置所用的串口

    switch (ui->comboBox_baud->currentIndex())     //设置波特率
    {
    case 0: serial->setBaudRate(QSerialPort::Baud115200); break;
    case 1: serial->setBaudRate(QSerialPort::Baud57600);  break;
    case 2: serial->setBaudRate(QSerialPort::Baud9600);   break;
    case 3: serial->setBaudRate(QSerialPort::Baud4800);   break;
    default: break;
    }

    switch (ui->comboBox_byte->currentIndex())     //设置数据位
    {
    case 0: serial->setDataBits(QSerialPort::Data8); break;
    case 1: serial->setDataBits(QSerialPort::Data7); break;
    case 2: serial->setDataBits(QSerialPort::Data6); break;
    case 3: serial->setDataBits(QSerialPort::Data5); break;
    default: break;
    }

    serial->setParity(QSerialPort::NoParity);     //设置校验位为无
    serial->setStopBits(QSerialPort::OneStop);     //设置停止位为1

    if (serial->open(QIODevice::ReadWrite))
    {
            QMessageBox::about(NULL, "提示", "串口打开成功！");     //当串口打开失败时出现临时窗口提示
            connect(serial, &QSerialPort::readyRead, this, &MainWindow::input);     //连接信号与槽
            return;
    }
    else
    {
        QMessageBox::about(NULL, "提示", "串口打开失败\r\n不存在或已被占用");     //当串口打开失败时出现临时窗口提示
        return;
    }
}

void MainWindow::on_pushButton_output_clicked()
{
    serial->write(ui->textEdit_output->toPlainText().toUtf8());     //串口发送数据
}

void MainWindow::input()
{
    QByteArray buffer = serial->readAll();    //创建缓冲区，并读取缓冲区的数据
    QString in = ui->textEdit_input->toPlainText();
    in += QString(buffer);
    ui->textEdit_input->setText(in);    //更新接收区（追加）
}

void MainWindow::on_pushButton_clearoutput_clicked()
{
    ui->textEdit_output->clear();     //清空发送区
}


void MainWindow::on_pushButton_clearinput_clicked()
{
    ui->textEdit_input->clear();    //清空接收区
}

void MainWindow::on_pushButton_close_clicked()
{
    serial->close();
    QMessageBox::about(NULL, "提示", "串口已关闭！");     //关闭串口
}
