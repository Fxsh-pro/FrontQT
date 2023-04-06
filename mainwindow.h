
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "authform.h"
#include "testform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void slot_show(QString log);
private slots:
    void on_pushButton_Test_clicked();

private:
    Ui::MainWindow *ui;
    AuthForm *ui_auth;
    TestForm *ui_test;
};

#endif // MAINWINDOW_H
