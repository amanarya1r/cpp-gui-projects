#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstNum, secondNum, result;

void MainWindow::on_btnAdd_clicked()
{
    firstNum = ui->NFirstNumber->text().toInt();
    secondNum = ui->NSeconNumber->text().toInt();
    result = firstNum + secondNum;
    ui->NResult->setText(QString::number(result)); //this will convert int into qstring //to know more about it you can refer to the documentation
}


void MainWindow::on_btnSubstract_clicked()
{
    firstNum = ui->NFirstNumber->text().toInt();
    secondNum = ui->NSeconNumber->text().toInt();
    result = firstNum - secondNum;
    ui->NResult->setText(QString::number(result));
}


void MainWindow::on_btnMultiply_clicked()
{
    firstNum = ui->NFirstNumber->text().toInt();
    secondNum = ui->NSeconNumber->text().toInt();
    result = firstNum * secondNum;
    ui->NResult->setText(QString::number(result));
}


void MainWindow::on_btnDivide_clicked()
{
    firstNum = ui->NFirstNumber->text().toInt();
    secondNum = ui->NSeconNumber->text().toInt();
    result = firstNum / secondNum;
    ui->NResult->setText(QString::number(result));
}

