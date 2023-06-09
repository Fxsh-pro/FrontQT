#include "authform.h"
#include "ui_authform.h"

AuthForm::AuthForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuthForm)
{
    ui->setupUi(this);
    this->change_mode(true);
}

AuthForm::~AuthForm()
{
    delete ui;
}
void AuthForm::change_mode(bool mode){ // mode = true for auth
    ui->label_mail->setVisible(!mode);
    ui->lineEdit_mail->setVisible(!mode);
    ui->pushButton_auth->setVisible(mode);
    ui->pushButton_reg->setVisible(!mode);

    if (mode)
        ui->pushButton_change->setText("To reg");
    else
        ui->pushButton_change->setText("To auth");
}

void AuthForm::on_pushButton_change_clicked()
{
    this->change_mode(ui->pushButton_reg->isVisible());

}


void AuthForm::on_pushButton_reg_clicked()
{
    qDebug() << "req" << ui->lineEdit_login->text()<<" "<< ui->lineEdit_pass->text()<<" " <<ui->lineEdit_mail->text();
    this->on_pushButton_auth_clicked();
}


void AuthForm::on_pushButton_auth_clicked()
{
    qDebug() << "auth" << ui->lineEdit_login->text()<<" "<< ui->lineEdit_pass->text();
    emit closed(ui->lineEdit_login->text());
    this->close();
}

