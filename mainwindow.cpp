#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    startTimer(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_pressed()
{
    QString prom = ui->lineInput->text();
}

void MainWindow::timerEvent(QTimerEvent *event)
{
     if(showW==true)
     {
           showW=false;
           ui->textBrowser->setText("ALERT!!!");
     }
     else{
           ui->textBrowser->setText("");
           showW=true;
     }

}
