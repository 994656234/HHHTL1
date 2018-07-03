#include "vehiclesetpage.h"
#include "ui_vehiclesetpage.h"

VehicleSetPage::VehicleSetPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleSetPage)
{
    ui->setupUi(this);
}

VehicleSetPage::~VehicleSetPage()
{
    delete ui;
}

void VehicleSetPage::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); //消除锯齿效果

    //构造painterpath
    QPainterPath path;
    //司机室1
    path.moveTo(75,111);
    path.lineTo(101,111);
    path.lineTo(101,180);
    path.lineTo(75,180);
    path.lineTo(70,176);
    path.lineTo(70,114);
    path.lineTo(75,110);

    //司机室2
    path.moveTo(939,111);
    path.lineTo(965,111);
    path.lineTo(970,114);
    path.lineTo(970,176);
    path.lineTo(965,180);
    path.lineTo(939,180);
    path.lineTo(939,111);

    //path->setFillRule(Qt::WindingFill);
    //设置无画笔，避免边框出现一条黑线
    painter.setPen(Qt::NoPen);
    //设置画刷
    painter.setBrush(QBrush(QColor(170,170,170), Qt::SolidPattern));
    //绘制背景
    painter.drawPath(path);
    // event->accept();//不再向父类传递消息
}

void VehicleSetPage::on_BTN_queryStation_pressed()
{
    changePage(uVehicleSetStationPage);
}

void VehicleSetPage::on_BTN_setAirCondition_pressed()
{
    changePage(uVehicleSetAirConditionPage);
}

void VehicleSetPage::on_BTN_setBrakeParam_pressed()
{

}

void VehicleSetPage::on_BTN_setLight_pressed()
{

}

void VehicleSetPage::on_BTN_setBrakeTest_pressed()
{

}

void VehicleSetPage::on_BTNHome_pressed()
{
    changePage(uVehicleTrainArea);
}
