#include "vehiclestatusarea.h"
#include "ui_vehiclestatusarea.h"

#include "qdebug.h"

#define ACPFAULT   "border-image: url(:/images/image/ACPfaultbtn.png);background-color:transparent;"
#define ACPWARN   "border-image: url(:/images/image/ACPwarnbtn.png);background-color:transparent;"
#define ACPNORMAL   "border-image: url(:/images/image/ACPnormalbtn.png);background-color:transparent;"

#define SIVNORMAL   "border-image: url(:/images/image/SIVnormalbtn.png);background-color:transparent;"
#define SIVFAULT   "border-image: url(:/images/image/SIVfaultbtn.png);background-color:transparent;"
#define SIVWARN   "border-image: url(:/images/image/SIVwarnbtn.png);background-color:transparent;"

#define BREAKERNORMAL    "border-image: url(:/images/image/breakernormalbtn.png);background-color:transparent;"
#define BREAKERFAULT   "border-image: url(:/images/image/breakerfaultbtn.png);background-color:transparent;"
#define BREAKERWARN   "border-image: url(:/images/image/breakerwarnbtn.png);background-color:transparent;"

#define BCUNORMAL   "border-image: url(:/images/image/BCUnormalbtn.png);background-color:transparent;"
#define BCUFAULT   "border-image: url(:/images/image/BCUfaultbtn.png);background-color:transparent;"
#define BCUWARN   "border-image: url(:/images/image/BCUwarnbtn.png);background-color:transparent;"

#define EDCUNORMAL  "border-image: url(:/images/image/doornormalbtn.png);background-color:transparent;"
#define EDCUFAULT  "border-image: url(:/images/image/doorfaultbtn.png);background-color:transparent;"
#define EDCUWARN   "border-image: url(:/images/image/doorwarnbtn.png);background-color:transparent;"

#define FIRENORMAL   "border-image: url(:/images/image/firenormalbtn.png);background-color:transparent;"
#define FIREFAULT   "border-image: url(:/images/image/firefaultbtn.png);background-color:transparent;"
#define FIREWARN   "border-image: url(:/images/image/firewarnbtn.png);background-color:transparent;"

#define PISNORMAL   "border-image: url(:/images/image/PISnormalbtn.png);background-color:transparent;"
#define PISFAULT   "border-image: url(:/images/image/PISfaultbtn.png);background-color:transparent;"
#define PISWARN   "border-image: url(:/images/image/PISwarnbtn.png);background-color:transparent;"

#define TCUNORMAL   "border-image: url(:/images/image/TCUnormalbtn.png);background-color:transparent;"
#define TCUFAULT   "border-image: url(:/images/image/TCUfaultbtn.png);background-color:transparent;"
#define TCUWARN   "border-image: url(:/images/image/TCUwarnbtn.png);background-color:transparent;"

#define METROCODE   "border-image: url(:/images/image/metroCodebtn.png);background-color:transparent;"

#define HVACNORMAL   "border-image: url(:/images/image/hvacnormalbtndown.png);background-color:transparent;"
#define HVACFAULT   "border-image: url(:/images/image/hvacfaultbtndown.png);background-color:transparent;"
#define HVACWARN   "border-image: url(:/images/image/hvacwarnbtndown.png);background-color:transparent;"

#define LABELUP    "background-color:rgb(0,0,50);"
#define LABELDOWN  "background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(150,150,200,255),stop:1 rgba(0,0,50,255));"



VehicleStatusArea::VehicleStatusArea(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleStatusArea)
{
    ui->setupUi(this);

    buttons<<this->ui->BTNHVAC<<this->ui->BTNSIV<<this->ui->BTNLineCircuitBreaker<<this->ui->BTNEDCU<<this->ui->BTNPIS
            <<this->ui->BTNBCU<<this->ui->BTNTCU<<this->ui->BTNFire<<this->ui->BTNACP<<this->ui->BTNTolopogy;

    labels<<this->ui->LBLHVAC<<this->ui->LBLSIV<<this->ui->LBLLineCircleBreaker<<this->ui->LBLEDCU<<this->ui->LBLPIS
            <<this->ui->LBLBCU<<this->ui->LBLTCU<<this->ui->LBLFire<<this->ui->LBLACP<<this->ui->LBLTolopogy;

    Btnstatus<<HVACNORMAL<<SIVNORMAL<<METROCODE<<EDCUNORMAL<<PISNORMAL<<BCUNORMAL<<TCUNORMAL<<FIRENORMAL<<ACPNORMAL<<BREAKERNORMAL;

    for(int i = 0; i<buttons.size();i++)
    {
        connect(buttons[i],SIGNAL(pressed()),this,SLOT(changeTrainStatus()));
        buttons[i]->setStyleSheet(Btnstatus[i]);
        labels[i]->setStyleSheet(LABELUP);
    }
}
void VehicleStatusArea::changeTrainStatus()
{
    QString BTNname = ((QPushButton *)this->sender())->objectName();

    for(int i = 0; i<buttons.size();i++)
    {
        labels[i]->setStyleSheet(LABELUP);
    }

    if(BTNname == "BTNHVAC")
    {
        changePage(uVehicleAirConditionerPage);
        this->ui->LBLHVAC->setStyleSheet(LABELDOWN);

    }else if(BTNname == "BTNSIV")
    {
        changePage(uVehicleAuxiliaryPage);
        this->ui->LBLSIV->setStyleSheet(LABELDOWN);

    }else if(BTNname == "BTNLineCircuitBreaker")
    {
        changePage(uVehicleLineCircuitBreakerPage);
        this->ui->LBLLineCircleBreaker->setStyleSheet(LABELDOWN);

    }else if(BTNname == "BTNEDCU")
    {
        changePage(uVehicleDoorPage);
        this->ui->LBLEDCU->setStyleSheet(LABELDOWN);

    }else if(BTNname == "BTNPIS")
    {
        changePage(uVehiclePISPage);
        this->ui->LBLPIS->setStyleSheet(LABELDOWN);

    }else if(BTNname == "BTNBCU")
    {
        changePage(uVehicleBrakePage);
        this->ui->LBLBCU->setStyleSheet(LABELDOWN);

    }else if(BTNname == "BTNTCU")
    {
        changePage(uVehicleTractPage);
        this->ui->LBLTCU->setStyleSheet(LABELDOWN);

    }else if(BTNname == "BTNFire")
    {
        changePage(uVehicleFireWarningPage);
        this->ui->LBLFire->setStyleSheet(LABELDOWN);

    }else if(BTNname == "BTNACP")
    {
        changePage(uVehicleAirCompressorPage);
        this->ui->LBLACP->setStyleSheet(LABELDOWN);

    }else if(BTNname == "BTNTolopogy")
    {
        changePage(uVehicleTopologyPage);
        this->ui->LBLTolopogy->setStyleSheet(LABELDOWN);
    }
}

VehicleStatusArea::~VehicleStatusArea()
{
    delete ui;
}
void VehicleStatusArea::updatePage()
{
    this->ui->BTNACP->setStyleSheet(ACPNORMAL);
}

void VehicleStatusArea::refreshAllButton()
{
    for(int i = 0; i<buttons.size();i++)
    {
        labels[i]->setStyleSheet(LABELUP);
    }
}
