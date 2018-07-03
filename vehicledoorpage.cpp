#include "vehicledoorpage.h"
#include "ui_vehicledoorpage.h"

VehicleDoorPage::VehicleDoorPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleDoorPage)
{
    ui->setupUi(this);
}

VehicleDoorPage::~VehicleDoorPage()
{
    delete ui;
}

void VehicleDoorPage::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); //消除锯齿效果

    //构造painterpath
    QPainterPath path;
    //司机室1
    path.moveTo(60, 61);
    path.lineTo(89, 61);
    path.lineTo(89,179);
    path.lineTo(60,179);
    path.lineTo(50,160);
    path.lineTo(50,70);
    path.lineTo(60, 61);

    //司机室2
    path.moveTo(931,61);
    path.lineTo(960,61);
    path.lineTo(970,71);
    path.lineTo(970,171);
    path.lineTo(960,179);
    path.lineTo(931,179);
    path.lineTo(931,61);

    //path->setFillRule(Qt::WindingFill);
    //设置无画笔，避免边框出现一条黑线
    painter.setPen(Qt::NoPen);
    //设置画刷
    painter.setBrush(QBrush(QColor(170,170,170), Qt::SolidPattern));
    //绘制背景
    painter.drawPath(path);
   // event->accept();//不再向父类传递消息
}
