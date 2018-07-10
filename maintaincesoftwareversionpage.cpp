#include "maintaincesoftwareversionpage.h"
#include "ui_maintaincesoftwareversionpage.h"

MaintainceSoftwareVersionPage::MaintainceSoftwareVersionPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceSoftwareVersionPage)
{
    ui->setupUi(this);
    ui->lbl_8_M1->hide();
    ui->lbl_8_M2->hide();
    ui->lbl_8_Mp1->hide();
    ui->lbl_8_Mp2->hide();
    ui->lbl_8_Name->hide();
    ui->lbl_8_TC1->hide();
    ui->lbl_8_TC2->hide();

    ui->lbl_9_M1->hide();
    ui->lbl_9_M2->hide();
    ui->lbl_9_Mp1->hide();
    ui->lbl_9_Mp2->hide();
    ui->lbl_9_Name->hide();
    ui->lbl_9_TC1->hide();
    ui->lbl_9_TC2->hide();
}

MaintainceSoftwareVersionPage::~MaintainceSoftwareVersionPage()
{
    delete ui;
}

void MaintainceSoftwareVersionPage::paintEvent(QPaintEvent *event)
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

void MaintainceSoftwareVersionPage::on_BTN1_pressed()
{
    changePage(uVehicleMaintainPage);
}

void MaintainceSoftwareVersionPage::on_BTNHome_pressed()
{
    changePage(uVehicleTrainArea);
}

void MaintainceSoftwareVersionPage::on_BTN2_pressed()
{

}

void MaintainceSoftwareVersionPage::on_BTN3_pressed()
{

}

void MaintainceSoftwareVersionPage::on_BTN4_pressed()
{

}
