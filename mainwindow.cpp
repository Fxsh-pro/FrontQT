
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_auth = new AuthForm;
    ui_test = new TestForm;
    connect(ui_auth, &AuthForm::closed, this, &MainWindow::slot_show);
    ui_auth->show();
}
void MainWindow::slot_show(QString log)
{
    this->show();
    ui->label->setText(log);
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_Test_clicked()
{
    ui_test->set_mode(1);
    ui_test->show();
}

