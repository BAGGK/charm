#ifndef USECOMBOBOX_H
#define USECOMBOBOX_H

#include <QComboBox>
#include <QString>

class usrComboBox:public QComboBox
{
public:
    usrComboBox(QWidget *parent = 0);
    usrComboBox(const QString &str,QWidget *parent = 0);
protected:
    virtual void focusInEvent(QFocusEvent *e);
    virtual void focusOutEvent(QFocusEvent *e);
private:
    QString initstr;
};

#endif // USECOMBOBOX_H
