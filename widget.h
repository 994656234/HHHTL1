#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui>
#include <QWidget>
#include <QMap>
#include "log4qt/logger.h"
#include "global.h"

namespace Ui {
    class Widget;
}
class MyBase;
class Header;
class QTimer;
class Database;
class Navigator;
class VehicleRunStatePage;
class CrrcMvb;
class CrrcFault;

class VehicleStationBar;
class VehicleTrainArea;
class VehicleStatusArea;
class VehicleInformationArea;
class VehiclePasswordPage;

class VehicleAirConditionerPage;
class VehicleAuxiliaryPage;
class VehicleLineCircuitBreakerPage;
class VehicleDoorPage;
class VehiclePISPage;
class VehicleBrakePage;
class VehicleTractPage;
class VehicleFireWarningPage;
class VehicleAirCompressorPage;
class VehicleTopologyPage;
class VehicleSetPage;
class VehicleSetStationPage;
class VehicleSetAirConditionPage;
class VehicleMaintainPage;
class VehicleMTHistoryFaultPage;
class VehicleMTTimeSetPage;
class MaintainceAllPortsPage;
class MaintainceInitSetPage;
class MaintainceRIOMPage;
class MaintainceWheelDiameterSetPage;
class MaintainceSoftwareVersionPage;
class MaintainceDataManagePage;
class MaintainceResetExcisionPage;
class MaintainceCommunicationStatePage;
class Simulation;
class VehicleSetBrakeParamPage;
class VehicleSetIntensityControlPage;
class VehicleSetBrakeTestPage;
class VehicleMaintainceTractSubsystemPage;
class MaintainceBrakeSubsystemPage;
class MaintainceAuxiliarySubsystemPage;
class MaintainceAccumulatorSubsystemPage;
class MaintainceRunningGearSubsystemPage;
class FaultEventPage;
class ByPassPage;

class Widget : public QWidget
{
    Q_OBJECT
    LOG4QT_DECLARE_QCLASS_LOGGER

public:
    explicit Widget(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *event);
    void showEvent(QShowEvent *);
    QMap<int, MyBase *> widgets;


    ~Widget();

public slots:
    void changePage(int page);
    void updatePage();
private:
    Ui::Widget *ui;
    QTimer* timer;
    Database* database;
    Navigator* navigator;
    VehicleRunStatePage* vehicleRunStatePage;
    Header *header;
    CrrcMvb* crrcMvb;
    CrrcFault* crrcFault;

    VehicleStationBar* vehicleStationBar;
    VehicleTrainArea* vehicleTrainArea;
    VehicleStatusArea* vehicleStatusArea;
    VehicleInformationArea* vehicleInformationArea;
    VehiclePasswordPage* vehiclePasswordPage;

    VehicleAirConditionerPage* vehicleAirConditionerPage;
    VehicleAuxiliaryPage* vehicleAuxiliaryPage;
    VehicleLineCircuitBreakerPage* vehicleLineCircuitBreakerPage;
    VehicleDoorPage* vehicleDoorPage;
    VehiclePISPage* vehiclePISPage;
    VehicleBrakePage* vehicleBrakePage;
    VehicleTractPage* vehicleTractPage;
    VehicleFireWarningPage* vehicleFireWarningPage;
    VehicleAirCompressorPage* vehicleAirCompressorPage;
    VehicleTopologyPage*vehicleTopologyPage;
    VehicleSetPage* vehicleSetPage;
    VehicleSetStationPage* vehicleSetStationPage;
    VehicleSetAirConditionPage* vehicleSetAirConditionPage;
    VehicleMaintainPage* vehicleMaintainPage;
    VehicleMTHistoryFaultPage* vehicleMTHistoryFaultPage;
    VehicleMTTimeSetPage* vehicleMTTimeSetPage;
    MaintainceAllPortsPage* vehicleMaintainceAllPortsPage;
    MaintainceInitSetPage* vehicleMaintainceInitSetPage;
    MaintainceRIOMPage* vehicleMaintainceRIOMPage;
    MaintainceWheelDiameterSetPage* vehicleMaintainceWheelDiameterSetPage;
    MaintainceSoftwareVersionPage* vehicleMaintainceSoftwareVersionPage;
    MaintainceDataManagePage* vehicleMaintainceDataManagePage;
    MaintainceResetExcisionPage* vehicleMaintainceResetExcisionPage;
    MaintainceCommunicationStatePage* vehicleMaintainceCommunicationStatePage;
    Simulation* simulation;
    VehicleSetBrakeParamPage* vehicleSetBrakeParamPage;
    VehicleSetIntensityControlPage* vehicleSetIntensityControlPage;
    VehicleSetBrakeTestPage* vehicleSetBrakeTestPage;
    VehicleMaintainceTractSubsystemPage* vehicleMaintainceTractSubsystemPage;
    MaintainceBrakeSubsystemPage* vehicleMaintainceBrakeSubsystemPage;
    MaintainceAuxiliarySubsystemPage* vehicleMaintainceAuxiliarySubsystemPage;
    MaintainceAccumulatorSubsystemPage* vehicleMaintainceAccumulatorSubsystemPage;
    MaintainceRunningGearSubsystemPage* vehicleMaintainceRunningGearSubsystemPage;
    FaultEventPage* vehicleFaultEventPage;
    ByPassPage* vehicleByPassPage;
};

#endif // WIDGET_H
