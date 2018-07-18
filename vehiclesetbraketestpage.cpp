#include "vehiclesetbraketestpage.h"
#include "ui_vehiclesetbraketestpage.h"

VehicleSetBrakeTestPage::VehicleSetBrakeTestPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleSetBrakeTestPage)
{
    ui->setupUi(this);
    QList<QPushButton*> buttons;
    buttons<<ui->BTN1<<ui->BTN2<<ui->BTN3<<ui->BTN4<<ui->BTN5<<ui->BTN6<<ui->BTN7<<ui->BTN8<<ui->BTN9<<ui->BTNHome;
    foreach(QPushButton* button,buttons)
    {
        connect(button,SIGNAL(pressed()),this,SLOT(pushButtonPressedEvent()));
    }
}

VehicleSetBrakeTestPage::~VehicleSetBrakeTestPage()
{
    delete ui;
}

void VehicleSetBrakeTestPage::pushButtonPressedEvent()
{
    QString btnName=((QPushButton*)this->sender())->objectName();
    if(btnName=="BTN1")
    {
        changePage(uVehicleSetPage);
    }
    else if(btnName=="BTNHome")
    {
        changePage(uVehicleTrainArea);
    }
}

void VehicleSetBrakeTestPage::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); //消除锯齿效果

    //构造painterpath
    QPainterPath path;
    //司机室1
    path.moveTo(275,31);
    path.lineTo(301,31);
    path.lineTo(301,100);
    path.lineTo(275,100);
    path.lineTo(270,96);
    path.lineTo(270,34);
    path.lineTo(275,30);

    //司机室2
    path.moveTo(839,31);
    path.lineTo(865,31);
    path.lineTo(870,34);
    path.lineTo(870,96);
    path.lineTo(865,100);
    path.lineTo(839,100);
    path.lineTo(839,31);

    //path->setFillRule(Qt::WindingFill);
    //设置无画笔，避免边框出现一条黑线
    painter.setPen(Qt::NoPen);
    //设置画刷
    painter.setBrush(QBrush(QColor(170,170,170), Qt::SolidPattern));
    //绘制背景
    painter.drawPath(path);
    // event->accept();//不再向父类传递消息
}
