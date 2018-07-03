#include "dicontrol.h"
#include "ui_dicontrol.h"

DIControl::DIControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DIControl)
{
    ui->setupUi(this);
}

DIControl::~DIControl()
{
    delete ui;
}

void DIControl::initialName(QList<QString> &names, QString str, QString traintype)
{
    if(names.length()!=DI_LENGTH)
    {
        //_LOG << "the length do not equal to" << DI_LENGTH;
        return;
    }

    QList<QLabel*>labels;
    labels<<ui->lbl_CH1_Name<<ui->lbl_CH2_Name<<ui->lbl_CH3_Name<<ui->lbl_CH4_Name<<ui->lbl_CH5_Name<<ui->lbl_CH6_Name
            <<ui->lbl_CH7_Name<<ui->lbl_CH8_Name<<ui->lbl_CH9_Name<<ui->lbl_CH10_Name<<ui->lbl_CH11_Name<<ui->lbl_CH12_Name
            <<ui->lbl_CH13_Name<<ui->lbl_CH14_Name<<ui->lbl_CH15_Name<<ui->lbl_CH16_Name<<ui->lbl_CH17_Name<<ui->lbl_CH18_Name
            <<ui->lbl_CH19_Name<<ui->lbl_CH20_Name<<ui->lbl_CH21_Name<<ui->lbl_CH22_Name<<ui->lbl_CH23_Name<<ui->lbl_CH24_Name;
    for(int i=0;i<labels.length();i++)
    {
        labels.at(i)->setText(names.at(i));
    }

    QList<QLabel*> labelsName;
    labelsName<<ui->lbl_CH1<<ui->lbl_CH2<<ui->lbl_CH3<<ui->lbl_CH4<<ui->lbl_CH5<<ui->lbl_CH6<<ui->lbl_CH7<<ui->lbl_CH8
            <<ui->lbl_CH9<<ui->lbl_CH10<<ui->lbl_CH11<<ui->lbl_CH12<<ui->lbl_CH13<<ui->lbl_CH14<<ui->lbl_CH15<<ui->lbl_CH16
            <<ui->lbl_CH17<<ui->lbl_CH18<<ui->lbl_CH19<<ui->lbl_CH20<<ui->lbl_CH21<<ui->lbl_CH22<<ui->lbl_CH23<<ui->lbl_CH24;
    for(int i=0;i<labelsName.length();i++)
    {
        labelsName.at(i)->setText(str+"-"+QString::number(i+1));
    }

    if(traintype=="TC")
    {
        ui->TrainType1->setText("TC1");
        ui->TrainType2->setText("TC2");
        ui->TrainType3->setText("TC1");
        ui->TrainType4->setText("TC2");
    }
    else if(traintype=="MP")
    {
        ui->TrainType1->setText("MP1");
        ui->TrainType2->setText("MP2");
        ui->TrainType3->setText("MP1");
        ui->TrainType4->setText("MP2");
    }
    else if(traintype=="M")
    {
        ui->TrainType1->setText("M1");
        ui->TrainType2->setText("M2");
        ui->TrainType3->setText("M1");
        ui->TrainType4->setText("M2");
    }
    else
    {}

}

void DIControl::updateDi(QList<bool> &state)
{
    if(state.length()!=DI_LENGTH*2)
    {
        //_LOG << "the length do not equal to" << DI_LENGTH*2;
        return;
    }

    QList<QLabel*> labels;
    labels<<ui->lbl_CH1_State1<<ui->lbl_CH2_State1<<ui->lbl_CH3_State1<<ui->lbl_CH4_State1<<ui->lbl_CH5_State1<<ui->lbl_CH6_State1
            <<ui->lbl_CH7_State1<<ui->lbl_CH8_State1<<ui->lbl_CH9_State1<<ui->lbl_CH10_State1<<ui->lbl_CH11_State1<<ui->lbl_CH12_State1
            <<ui->lbl_CH13_State1<<ui->lbl_CH14_State1<<ui->lbl_CH15_State1<<ui->lbl_CH16_State1<<ui->lbl_CH17_State1<<ui->lbl_CH18_State1
            <<ui->lbl_CH19_State1<<ui->lbl_CH20_State1<<ui->lbl_CH21_State1<<ui->lbl_CH22_State1<<ui->lbl_CH23_State1<<ui->lbl_CH24_State1
            <<ui->lbl_CH1_State2<<ui->lbl_CH2_State2<<ui->lbl_CH3_State2<<ui->lbl_CH4_State2<<ui->lbl_CH5_State2<<ui->lbl_CH6_State2
            <<ui->lbl_CH7_State2<<ui->lbl_CH8_State2<<ui->lbl_CH9_State2<<ui->lbl_CH10_State2<<ui->lbl_CH11_State2<<ui->lbl_CH12_State2
            <<ui->lbl_CH13_State2<<ui->lbl_CH14_State2<<ui->lbl_CH15_State2<<ui->lbl_CH16_State2<<ui->lbl_CH17_State2<<ui->lbl_CH18_State2
            <<ui->lbl_CH19_State2<<ui->lbl_CH20_State2<<ui->lbl_CH21_State2<<ui->lbl_CH22_State2<<ui->lbl_CH23_State2<<ui->lbl_CH24_State2;
    for(int i=0;i< state.length();i++)
    {
        if(state.at(i))
        {
            labels.at(i)->setText("1");
            labels.at(i)->setStyleSheet("background-color:rgb(255,255,255)");
        }
        else
        {
            labels.at(i)->setText("0");
            labels.at(i)->setStyleSheet("background-color:rgb(255,255,255)");
        }
    }

}
