#include "vehiclemaintaincetractsubsystempage.h"
#include "ui_vehiclemaintaincetractsubsystempage.h"

VehicleMaintainceTractSubsystemPage::VehicleMaintainceTractSubsystemPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleMaintainceTractSubsystemPage)
{
    ui->setupUi(this);
}

VehicleMaintainceTractSubsystemPage::~VehicleMaintainceTractSubsystemPage()
{
    delete ui;
}

void VehicleMaintainceTractSubsystemPage::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); //消除锯齿效果

    //构造painterpath
    QPainterPath path;
    //司机室1
    path.moveTo(225,111);
    path.lineTo(241,111);
    path.lineTo(241,160);
    path.lineTo(225,160);
    path.lineTo(220,156);
    path.lineTo(220,114);
    path.lineTo(225,110);

    //司机室2
    path.moveTo(959,111);
    path.lineTo(975,111);
    path.lineTo(980,114);
    path.lineTo(980,156);
    path.lineTo(975,160);
    path.lineTo(959,160);
    path.lineTo(959,111);

    //path->setFillRule(Qt::WindingFill);
    //设置无画笔，避免边框出现一条黑线
    painter.setPen(Qt::NoPen);
    //设置画刷
    painter.setBrush(QBrush(QColor(170,170,170), Qt::SolidPattern));
    //绘制背景
    painter.drawPath(path);
    // event->accept();//不再向父类传递消息
}

void VehicleMaintainceTractSubsystemPage::on_BTN1_pressed()
{
    changePage(uVehicleMaintainPage);
}

void VehicleMaintainceTractSubsystemPage::on_BTNHome_pressed()
{
    changePage(uVehicleTrainArea);
}
