#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QString>
#include "thread_1.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();    

private slots:
    void on_pushButton_clicked();
    void on_thread_1_Dislplay_timer();
    void on_thread_1_result(const int value);

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    Thread_1 *mthread;
    QTimer *thread_1_Dislplay_timer;
};
#endif // MAINWINDOW_H
