#ifndef PWDLINEEIDT_H
#define PWDLINEEIDT_H

#include <QLineEdit>
#include <QString>
class pwdLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit pwdLineEdit(QWidget *parent = 0);
    explicit pwdLineEdit(const QString &str, QWidget *parent = 0);
protected:
    virtual void focusInEvent(QFocusEvent *e);
    virtual void focusOutEvent(QFocusEvent *e);
private:
    QString initStr;
signals:

public slots:

};

#endif // PWDLINEEIDT_H
