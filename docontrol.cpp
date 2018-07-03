#include "docontrol.h"
#include "ui_docontrol.h"

DoControl::DoControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DoControl)
{
    ui->setupUi(this);
}

DoControl::~DoControl()
{
    delete ui;
}
