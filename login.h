﻿#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <pwdLineEditt.h>
#include <usrcombobox.h>
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_clicked();

private:
    pwdLineEdit *pwdBox;
    usrComboBox *usrBox;
    Ui::login *ui;
};

#endif // LOGIN_H