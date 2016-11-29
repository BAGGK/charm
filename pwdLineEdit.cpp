#include "pwdLineEditt.h"

pwdLineEdit::pwdLineEdit(QWidget *parent) : QLineEdit(parent)
{

}

pwdLineEdit::pwdLineEdit(const QString &str,QWidget *parent):QLineEdit(str,parent)
{
    this->initStr = str;
}

void pwdLineEdit::focusInEvent(QFocusEvent *e)
{
    if(this->text()==initStr)
    {
        this->setText("");
    }
    this->setEchoMode(QLineEdit::Password);
    QLineEdit::focusInEvent(e);
}

void pwdLineEdit::focusOutEvent(QFocusEvent *e)
{
    if(this->text()==""){
        this->setEchoMode(QLineEdit::Normal);
        this->setText(this->initStr);
    }
    QLineEdit::focusOutEvent(e);
}
