#include "bypasspage.h"
#include "ui_bypasspage.h"

ByPassPage::ByPassPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::ByPassPage)
{
    ui->setupUi(this);
    QList<QPushButton*> buttons;
    buttons<<ui->BTN1<<ui->BTN2<<ui->BTN3<<ui->BTN4<<ui->BTN5<<ui->BTN6<<ui->BTN7<<ui->BTN8<<ui->BTN9<<ui->BTNHome;
    foreach(QPushButton* button,buttons)
    {
        connect(button,SIGNAL(pressed()),this,SLOT(pushButtonPressedEvent()));
    }
}

ByPassPage::~ByPassPage()
{
    delete ui;
}

void ByPassPage::pushButtonPressedEvent()
{
    QString btnName=((QPushButton*)this->sender())->objectName();
    if(btnName=="BTN1")
    {
        changePage(uVehicleTrainArea);
    }
    else if(btnName=="BTNHome")
    {
        changePage(uVehicleTrainArea);
    }
}

void ByPassPage::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); //消除锯齿效果

    //构造painterpath
    QPainterPath path;
    //司机室1
    path.moveTo(75,31);
    path.lineTo(101,31);
    path.lineTo(101,100);
    path.lineTo(75,100);
    path.lineTo(70,96);
    path.lineTo(70,34);
    path.lineTo(75,30);

    //司机室2
    path.moveTo(939,31);
    path.lineTo(965,31);
    path.lineTo(970,34);
    path.lineTo(970,96);
    path.lineTo(965,100);
    path.lineTo(939,100);
    path.lineTo(939,31);

    //path->setFillRule(Qt::WindingFill);
    //设置无画笔，避免边框出现一条黑线
    painter.setPen(Qt::NoPen);
    //设置画刷
    painter.setBrush(QBrush(QColor(170,170,170), Qt::SolidPattern));
    //绘制背景
    painter.drawPath(path);
    // event->accept();//不再向父类传递消息
}
