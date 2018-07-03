#include "header.h"
#include "ui_header.h"
#include "qdatetime.h"
Header::Header(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Header)
{
    ui->setupUi(this);
}

Header::~Header()
{
    delete ui;
}
void Header::updatePage()
{
    this->ui->LBLDateTime->setText(QDateTime::currentDateTime().date().toString("yyyy-MM-dd ")+QDateTime::currentDateTime().time().toString("hh:mm:ss"));
    this->ui->LBLServiceNum->setText("服务号: "+QString::number(12345));
}
void Header::setPageName(QString name)
{
    this->ui->LBLPageName->setText(name);
}


