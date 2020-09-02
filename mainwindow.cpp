#include "mainwindow.h"
#include "ui_mainwindow.h"

static int count;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //thread_1_Dislplay_timer=new QTimer;
    // connect(thread_1_Dislplay_timer,SIGNAL(timeout()),this,SLOT(on_thread_1_Dislplay_timer()));
    mthread=new Thread_1(this);
    connect(mthread,SIGNAL(finish_count(int)),this,SLOT(on_thread_1_result(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  //thread_1_Dislplay_timer->start(1);
  mthread->start();
}

void MainWindow::on_thread_1_Dislplay_timer()
{

    //QString qstr;
    //qstr=QString("%1").arg(count);
    //ui->lineEdit->setText(qstr);
}

void MainWindow::on_thread_1_result(const int value)
{
    count=value;
    QString qstr;
    qstr=QString("%1").arg(count);
    ui->lineEdit->setText(qstr);
}

void MainWindow::on_actionExit_triggered()
{
    close();
    //thread_1_Dislplay_timer->stop();
}
