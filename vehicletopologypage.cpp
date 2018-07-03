#include "vehicletopologypage.h"
#include "ui_vehicletopologypage.h"

VehicleTopologyPage::VehicleTopologyPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleTopologyPage)
{
    ui->setupUi(this);
}

VehicleTopologyPage::~VehicleTopologyPage()
{
    delete ui;
}

void VehicleTopologyPage::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); //消除锯齿效果

    //构造painterpath
    QPainterPath path;
    //司机室1
    path.moveTo(75,9);
    path.lineTo(101,9);
    path.lineTo(101,58);
    path.lineTo(75,58);
    path.lineTo(70,54);
    path.lineTo(70,13);
    path.lineTo(75,8);

    //司机室2
    path.moveTo(939,9);
    path.lineTo(965,9);
    path.lineTo(970,13);
    path.lineTo(970,54);
    path.lineTo(965,58);
    path.lineTo(939,58);
    path.lineTo(939,8);

    //path->setFillRule(Qt::WindingFill);
    //设置无画笔，避免边框出现一条黑线
    painter.setPen(Qt::NoPen);
    //设置画刷
    painter.setBrush(QBrush(QColor(170,170,170), Qt::SolidPattern));
    //绘制背景
    painter.drawPath(path);
   // event->accept();//不再向父类传递消息
}
