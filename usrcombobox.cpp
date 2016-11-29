#include "usrcombobox.h"

usrComboBox::usrComboBox(QWidget *parent)
    :QComboBox(parent)
{
}

usrComboBox::usrComboBox(const QString &str,QWidget *parent)
    :QComboBox(parent)
{
    this->setEditable(true);
    initstr = str;
    this->setCurrentText(str);
}
void usrComboBox::focusInEvent(QFocusEvent *e)
{
    if(this->currentText()==initstr)
    {
        setCurrentText("");
    }
    QComboBox::focusInEvent(e);
}
void usrComboBox::focusOutEvent(QFocusEvent *e)
{
    if(this->currentText()=="")
    {
        setCurrentText(initstr);
    }
    QComboBox::focusOutEvent(e);
}
