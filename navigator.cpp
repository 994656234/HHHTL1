#include "navigator.h"
#include "ui_navigator.h"
#include "qdebug.h"

Navigator::Navigator(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Navigator)
{
    ui->setupUi(this);


    buttons<<this->ui->BTNEvent<<this->ui->BTNSetting<<this->ui->BTNMaintaince<<this->ui->BTNSpare1<<this->ui->BTNArriveB
            <<this->ui->BTNLeaveB<<this->ui->BTNSkipback<<this->ui->BTNSkipforward<<this->ui->BTNSpare2<<this->ui->BTNHome;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(pressed()), this, SLOT(NBpressEvent()));
    }
}

Navigator::~Navigator()
{
    delete ui;
}

void Navigator::NBpressEvent()
{
    QString BTNname = ((QPushButton *)this->sender())->objectName();
    for(int i = 0; i < buttons.size();i++)
    {
        buttons[i]->setStyleSheet(NButtonUP);
    }
    if(BTNname == "BTNEvent")
    {
        this->ui->BTNEvent->setStyleSheet(NButtonDOWN);
    }else if(BTNname == "BTNSetting")
    {
        this->ui->BTNSetting->setStyleSheet(NButtonDOWN);
        changePage(uVehiclePasswordPage);
    }else if(BTNname == "BTNMaintaince")
    {
        this->ui->BTNMaintaince->setStyleSheet(NButtonDOWN);
        changePage(uVehicleMaintainPage);

    }else if(BTNname == "BTNArriveB")
    {
        this->ui->BTNArriveB->setStyleSheet(NButtonDOWN);
    }else if(BTNname == "BTNLeaveB")
    {
        this->ui->BTNLeaveB->setStyleSheet(NButtonDOWN);
    }else if(BTNname == "BTNSkipback")
    {
        this->ui->BTNSkipback->setStyleSheet(NButtonDOWN);

    }else if(BTNname == "BTNSkipforward")
    {
        this->ui->BTNSkipforward->setStyleSheet(NButtonDOWN);

    }else if(BTNname == "BTNHome")
    {
        changePage(uVehicleTrainArea);
    }else
    {

    }
    this->ui->BTNHome->setStyleSheet("border-image: url(:/images/image/Home.png);");
}
