#include "testform.h"
#include "ui_testform.h"

TestForm::TestForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestForm)
{
    ui->setupUi(this);
}

TestForm::~TestForm()
{
    delete ui;
}

void TestForm::on_pushButton_clicked()
{
    emit on_check(ui->lineEdit->text());
    qDebug()<<"Check";
    this->close();
}

void TestForm:: set_mode(int num){
    ui->label->setText(QString::fromStdString(std::to_string(num)));
}
