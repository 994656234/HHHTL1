#include "faulteventpage.h"
#include "ui_faulteventpage.h"

#define FAULTBUTTONUP "background-color: rgb(0, 0, 50);border:0px;"
#define FAULTBUTTONDOWN "background-color: rgb(255, 0, 0);border:0px;"

FaultEventPage::FaultEventPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::FaultEventPage)
{
    ui->setupUi(this);
    QList<QPushButton*> buttons;
    buttons<<ui->BTN1<<ui->BTN2<<ui->BTN3<<ui->BTN4<<ui->BTN5<<ui->BTN6<<ui->BTN7<<ui->BTN8<<ui->BTN9<<ui->BTNHome;
    foreach(QPushButton* button,buttons)
    {
        connect(button,SIGNAL(pressed()),this,SLOT(pushButtonPressedEvent()));
    }


    faultButtons<<ui->BTN_1_bg<<ui->BTN_2_bg<<ui->BTN_3_bg<<ui->BTN_4_bg<<ui->BTN_5_bg<<ui->BTN6<<ui->BTN7<<ui->BTN8
            <<ui->BTN_9_bg;
    foreach(QPushButton* button,faultButtons)
    {
        connect(button,SIGNAL(pressed()),this,SLOT(faultPushButtonPressedEvent()));
    }

    this->labelList1<<ui->lbl_1_confirm<<ui->lbl_1_faultCode<<ui->lbl_1_faultDevice<<ui->lbl_1_faultLevel<<ui->lbl_1_faultName
            <<ui->lbl_1_startTime;
    this->labelList2<<ui->lbl_2_confirm<<ui->lbl_2_faultCode<<ui->lbl_2_faultDevice<<ui->lbl_2_faultLevel<<ui->lbl_2_faultName
            <<ui->lbl_2_startTime;
    this->labelList3<<ui->lbl_3_confirm<<ui->lbl_3_faultCode<<ui->lbl_3_faultDevice<<ui->lbl_3_faultLevel<<ui->lbl_3_faultName
            <<ui->lbl_3_startTime;

}

FaultEventPage::~FaultEventPage()
{
    delete ui;
}

void FaultEventPage::paintEvent(QPaintEvent *event)
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

void FaultEventPage::pushButtonPressedEvent()
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

void FaultEventPage::faultPushButtonPressedEvent()
{
    foreach(QPushButton* button,faultButtons)
    {
        button->setStyleSheet(FAULTBUTTONUP);
    }
    QString btnName=((QPushButton*)this->sender())->objectName();
    if(btnName=="BTN_1_bg")
    {
        ui->BTN_1_bg->setStyleSheet(FAULTBUTTONDOWN);
    }
}
