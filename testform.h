#ifndef TESTFORM_H
#define TESTFORM_H

#include <QWidget>
#include <QDebug>
#include <QString>
namespace Ui {
class TestForm;
}

class TestForm : public QWidget
{
    Q_OBJECT

public:
    explicit TestForm(QWidget *parent = nullptr);
    ~TestForm();
    void set_mode(int num);
private slots:
    void on_pushButton_clicked();

private:
    Ui::TestForm *ui;

signals:
    void on_check(QString);



};

#endif // TESTFORM_H
