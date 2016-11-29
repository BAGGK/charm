#include "login.h"
#include "ui_login.h"
#include <QColor>
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    setWindowTitle(" ");   //设置标题标题
    QFont hideFont("Microsoft YaHei", 9, QFont::AnyStyle);

    pwdBox = new pwdLineEdit(QString::fromLocal8Bit("密码"),this);
    pwdBox->setGeometry(160,270,230,30);
    pwdBox->setFont(hideFont);
    pwdBox->setStyleSheet("color:rgb(125,125,125)");

    usrBox = new usrComboBox(QString::fromLocal8Bit("账号/手机/邮箱"),this);
    usrBox->setGeometry(160,230,230,30);
    usrBox->setStyleSheet("color:rgb(125,125,125)");
    ui->setupUi(this);  // 和ui命名空间之内变量的在这条之后，无关的在前面
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    if(usrBox->currentText()==""||usrBox->currentText()=="账号")
    {
        ;
    }
    if(usrBox->currentText()=="lzk"&&
            pwdBox->text()=="845613")
    {
        this->accept();
    }
}
