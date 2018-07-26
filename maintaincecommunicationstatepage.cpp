#include "maintaincecommunicationstatepage.h"
#include "ui_maintaincecommunicationstatepage.h"

MaintainceCommunicationStatePage::MaintainceCommunicationStatePage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceCommunicationStatePage)
{
    ui->setupUi(this);
    QList<QPushButton*> buttons;
    buttons<<ui->BTN1<<ui->BTN2<<ui->BTN3<<ui->BTN4<<ui->BTN5<<ui->BTN6<<ui->BTN7<<ui->BTN8<<ui->BTN9<<ui->BTNHome;
    foreach(QPushButton* button,buttons)
    {
        connect(button,SIGNAL(pressed()),this,SLOT(pushButtonPressedEvent()));
    }
}

MaintainceCommunicationStatePage::~MaintainceCommunicationStatePage()
{
    delete ui;
}

void MaintainceCommunicationStatePage::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); //消除锯齿效果

    //构造painterpath
    QPainterPath path;
    //司机室1
    path.moveTo(185,111);
    path.lineTo(201,111);
    path.lineTo(201,160);
    path.lineTo(185,160);
    path.lineTo(180,156);
    path.lineTo(180,114);
    path.lineTo(185,110);

    //司机室2
    path.moveTo(919,111);
    path.lineTo(935,111);
    path.lineTo(940,114);
    path.lineTo(940,156);
    path.lineTo(935,160);
    path.lineTo(919,160);
    path.lineTo(919,111);

    //path->setFillRule(Qt::WindingFill);
    //设置无画笔，避免边框出现一条黑线
    painter.setPen(Qt::NoPen);
    //设置画刷
    painter.setBrush(QBrush(QColor(170,170,170), Qt::SolidPattern));
    //绘制背景
    painter.drawPath(path);
    // event->accept();//不再向父类传递消息
}

void MaintainceCommunicationStatePage::pushButtonPressedEvent()
{
    QString btnName=((QPushButton*)this->sender())->objectName();
    if(btnName=="BTN1")
    {
        changePage(uVehicleMaintainPage);
    }
    else if(btnName=="BTNHome")
    {
        changePage(uVehicleTrainArea);
    }
}
