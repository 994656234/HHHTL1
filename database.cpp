#include "database.h"

Database::Database()
{
    HMIPosition = MainGetDefaultPara::getInt("/Position/HMI");
}

void Database::updateDatabse(CrrcMvb* crrcMvb)
{
    this->crrcMvb = crrcMvb;

    /**************************************CCU-All************************************/
    PUBPORT_CCULfSign_U16=crrcMvb->getUnsignedInt(0x00F,0);
    PUBPORT_CCUTimeYear_U8=crrcMvb->getUnsignedChar(0x00F,2);
    PUBPORT_CCUTimeMonth_U8=crrcMvb->getUnsignedChar(0x00F,3);
    PUBPORT_CCUTimeDay_U8==crrcMvb->getUnsignedChar(0x00F,4);
    PUBPORT_CCUTimeHour_U8=crrcMvb->getUnsignedChar(0x00F,5);
    PUBPORT_CCUTimeMinute_U8=crrcMvb->getUnsignedChar(0x00F,6);
    PUBPORT_CCUTimeSecond_U8=crrcMvb->getUnsignedChar(0x00F,7);
    PUBPORT_SettingTimeEnable_B1=crrcMvb->getBool(0x00F,8,0);
    PUBPORT_TimeValid_B1=crrcMvb->getBool(0x00F,8,1);
    PUBPORT_TraRfrSpdValid_B1=crrcMvb->getBool(0x00F,8,2);
    PUBPORT_TrainNumberValid_B1=crrcMvb->getBool(0x00F,8,3);
    PUBPORT_LineNumberValid_B1=crrcMvb->getBool(0x00F,8,4);
    PUBPORT_TraRfrSpd_U16=crrcMvb->getUnsignedInt(0x00F,10);
    PUBPORT_TrainNmbr_U8=crrcMvb->getUnsignedChar(0x00F,12);
    PUBPORT_LineNmbr_U8=crrcMvb->getUnsignedChar(0x00F,13);

    /***************************************RIOM-CCU**********************************/

    /**************************************CCU-RIOM***********************************/

    /**************************************HMI1-CCU***********************************/
    crrcMvb->setUnsignedInt(0x210,0,HM1CT_LifeSignal_U16);
    crrcMvb->setUnsignedChar(0x210,2,HM1CT_HMISWVerH_U8);
    crrcMvb->setUnsignedChar(0x210,3,HM1CT_HMISWVerL_U8);
    crrcMvb->setUnsignedChar(0x210,4,HM1CT_Year_U8);
    crrcMvb->setUnsignedChar(0x210,5,HM1CT_Month_U8);
    crrcMvb->setUnsignedChar(0x210,6,HM1CT_Day_U8);
    crrcMvb->setUnsignedChar(0x210,7,HM1CT_Hour_U8);
    crrcMvb->setUnsignedChar(0x210,8,HM1CT_Minute_U8);
    crrcMvb->setUnsignedChar(0x210,9,HM1CT_Second_U8);
    crrcMvb->setUnsignedChar(0x210,10,HM1CT_TrainNum_U8);
    crrcMvb->setUnsignedChar(0x210,11,HM1CT_LineNum_U8);
    crrcMvb->setUnsignedChar(0x210,12,HM1CT_WheelDia1_U8);
    crrcMvb->setUnsignedChar(0x210,13,HM1CT_WheelDia2_U8);
    crrcMvb->setUnsignedChar(0x210,14,HM1CT_WheelDia3_U8);
    crrcMvb->setUnsignedChar(0x210,15,HM1CT_WheelDia4_U8);
    crrcMvb->setUnsignedChar(0x210,16,HM1CT_WheelDia5_U8);
    crrcMvb->setUnsignedChar(0x210,17,HM1CT_WheelDia6_U8);

    crrcMvb->setBool(0x210,20,0,HM1CT_SAVETime_B1);
    crrcMvb->setBool(0x210,20,1,HM1CT_SAVETrainNum_B1);
    crrcMvb->setBool(0x210,20,2,HM1CT_SAVELineNum_B1);
    crrcMvb->setBool(0x210,20,3,HM1CT_SAVEWheelDig1_B1);
    crrcMvb->setBool(0x210,20,4,HM1CT_SAVEWheelDig2_B1);
    crrcMvb->setBool(0x210,20,5,HM1CT_SAVEWheelDig3_B1);
    crrcMvb->setBool(0x210,20,6,HM1CT_SAVEWheelDig4_B1);
    crrcMvb->setBool(0x210,20,7,HM1CT_SAVEWheelDig5_B1);
    crrcMvb->setBool(0x210,21,0,HM1CT_SAVEWheelDig6_B1);

    crrcMvb->setUnsignedChar(0x210,31,HM1CT_SetFlagChecker_U8);

    crrcMvb->setBool(0x211,0,0,HM1CT_HVACEmgcyVenti_B1);
    crrcMvb->setBool(0x211,0,1,HM1CT_HVACVenti_B1);
    crrcMvb->setBool(0x211,0,2,HM1CT_HVACAutoCoolMode_B1);
    crrcMvb->setBool(0x211,0,3,HM1CT_HVACAutoWarmMode_B1);
    crrcMvb->setBool(0x211,0,4,HM1CT_HVACStop_B1);

    crrcMvb->setBool(0x211,1,0,HM1CT_Reduce0point5_B1);
    crrcMvb->setBool(0x211,1,1,HM1CT_Reduce1_B1);
    crrcMvb->setBool(0x211,1,2,HM1CT_Reduce1point5_B1);
    crrcMvb->setBool(0x211,1,3,HM1CT_Reduce2_B1);
    crrcMvb->setBool(0x211,1,4,HM1CT_Reduce2point5_B1);
    crrcMvb->setBool(0x211,1,5,HM1CT_Add0point5_B1);
    crrcMvb->setBool(0x211,1,6,HM1CT_Add1_B1);
    crrcMvb->setBool(0x211,1,7,HM1CT_Add1point5_B1);

    crrcMvb->setBool(0x211,2,0,HM1CT_Add2_B1);
    crrcMvb->setBool(0x211,2,1,HM1CT_Add2point5_B1);

    crrcMvb->setUnsignedChar(0x211,3,HM1CT_SAVEHVACPosition_U8);

    crrcMvb->setBool(0x211,4,0,HM1CT_Mp1DCUFaultReset_B1);
    crrcMvb->setBool(0x211,4,1,HM1CT_M1DCUFaultReset_B1);
    crrcMvb->setBool(0x211,4,2,HM1CT_M2DCUFaultReset_B1);
    crrcMvb->setBool(0x211,4,3,HM1CT_Mp2DCUFaultReset_B1);
    crrcMvb->setBool(0x211,4,4,HM1CT_Mp1DynamicBrkCut_B1);
    crrcMvb->setBool(0x211,4,5,HM1CT_M1DynamicBrkCut_B1);
    crrcMvb->setBool(0x211,4,6,HM1CT_M2DynamicBrkCut_B1);
    crrcMvb->setBool(0x211,4,7,HM1CT_Mp2DynamicBrkCut_B1);

    crrcMvb->setBool(0x211,5,0,HM1CT_ACU1Reset_B1);
    crrcMvb->setBool(0x211,5,1,HM1CT_ACU2Reset_B1);
    crrcMvb->setBool(0x211,5,2,HM1CT_ACU3Reset_B1);
    crrcMvb->setBool(0x211,5,3,HM1CT_ACU4Reset_B1);
    crrcMvb->setBool(0x211,5,4,HM1CT_ACU1Cutoff_B1);
    crrcMvb->setBool(0x211,5,5,HM1CT_ACU2Cutoff_B1);
    crrcMvb->setBool(0x211,5,6,HM1CT_ACU3Cutoff_B1);
    crrcMvb->setBool(0x211,5,7,HM1CT_ACU4Cutoff_B1);

    crrcMvb->setBool(0x211,6,2,HM1CT_DCURunStatClear_B1);
    crrcMvb->setBool(0x211,6,3,HM1CT_ACMRunStatClear_B1);

    crrcMvb->setBool(0x211,6,6,HM1CT_TC1APClear_B1);
    crrcMvb->setBool(0x211,6,7,HM1CT_TC2APClear_B1);

    crrcMvb->setBool(0x211,7,3,HM1CT_ACDETestStopFlag_B1);
    crrcMvb->setBool(0x211,7,4,HM1CT_ACDETestStartFlag_B1);

    crrcMvb->setBool(0x211,7,7,HM1CT_BCUSelfTestReq_B1);

    crrcMvb->setBool(0x211,8,4,HM1CT_OpenLeftDrReq_B1);
    crrcMvb->setBool(0x211,8,5,HM1CT_OpenRightDrReq_B1);
    crrcMvb->setBool(0x211,8,6,HM1CT_CloseLeftDrReq_B1);
    crrcMvb->setBool(0x211,8,7,HM1CT_CloseRightDrReq_B1);

    crrcMvb->setBool(0x211,26,0,HM1CT_RunStatSetFlag_B1);

    crrcMvb->setUnsignedChar(0x211,27,HM1CT_RunStatSetType_U8);



    /**************************************HMI2-CCU***********************************/
    crrcMvb->setUnsignedInt(0x220,0,HM2CT_LifeSignal_U16);
    crrcMvb->setUnsignedChar(0x220,2,HM2CT_HMISWVerH_U8);
    crrcMvb->setUnsignedChar(0x220,3,HM2CT_HMISWVerL_U8);
    crrcMvb->setUnsignedChar(0x220,4,HM2CT_Year_U8);
    crrcMvb->setUnsignedChar(0x220,5,HM2CT_Month_U8);
    crrcMvb->setUnsignedChar(0x220,6,HM2CT_Day_U8);
    crrcMvb->setUnsignedChar(0x220,7,HM2CT_Hour_U8);
    crrcMvb->setUnsignedChar(0x220,8,HM2CT_Minute_U8);
    crrcMvb->setUnsignedChar(0x220,9,HM2CT_Second_U8);
    crrcMvb->setUnsignedChar(0x220,10,HM2CT_TrainNum_U8);
    crrcMvb->setUnsignedChar(0x220,11,HM2CT_LineNum_U8);
    crrcMvb->setUnsignedChar(0x220,12,HM2CT_WheelDia1_U8);
    crrcMvb->setUnsignedChar(0x220,13,HM2CT_WheelDia2_U8);
    crrcMvb->setUnsignedChar(0x220,14,HM2CT_WheelDia3_U8);
    crrcMvb->setUnsignedChar(0x220,15,HM2CT_WheelDia4_U8);
    crrcMvb->setUnsignedChar(0x220,16,HM2CT_WheelDia5_U8);
    crrcMvb->setUnsignedChar(0x220,17,HM2CT_WheelDia6_U8);

    crrcMvb->setBool(0x220,20,0,HM2CT_SAVETime_B1);
    crrcMvb->setBool(0x220,20,1,HM2CT_SAVETrainNum_B1);
    crrcMvb->setBool(0x220,20,2,HM2CT_SAVELineNum_B1);
    crrcMvb->setBool(0x220,20,3,HM2CT_SAVEWheelDig1_B1);
    crrcMvb->setBool(0x220,20,4,HM2CT_SAVEWheelDig2_B1);
    crrcMvb->setBool(0x220,20,5,HM2CT_SAVEWheelDig3_B1);
    crrcMvb->setBool(0x220,20,6,HM2CT_SAVEWheelDig4_B1);
    crrcMvb->setBool(0x220,20,7,HM2CT_SAVEWheelDig5_B1);
    crrcMvb->setBool(0x220,21,0,HM2CT_SAVEWheelDig6_B1);

    crrcMvb->setUnsignedChar(0x220,31,HM2CT_SetFlagChecker_U8);

    crrcMvb->setBool(0x221,0,0,HM2CT_HVACEmgcyVenti_B1);
    crrcMvb->setBool(0x221,0,1,HM2CT_HVACVenti_B1);
    crrcMvb->setBool(0x221,0,2,HM2CT_HVACAutoCoolMode_B1);
    crrcMvb->setBool(0x221,0,3,HM2CT_HVACAutoWarmMode_B1);
    crrcMvb->setBool(0x221,0,4,HM2CT_HVACStop_B1);

    crrcMvb->setBool(0x221,1,0,HM2CT_Reduce0point5_B1);
    crrcMvb->setBool(0x221,1,1,HM2CT_Reduce1_B1);
    crrcMvb->setBool(0x221,1,2,HM2CT_Reduce1point5_B1);
    crrcMvb->setBool(0x221,1,3,HM2CT_Reduce2_B1);
    crrcMvb->setBool(0x221,1,4,HM2CT_Reduce2point5_B1);
    crrcMvb->setBool(0x221,1,5,HM2CT_Add0point5_B1);
    crrcMvb->setBool(0x221,1,6,HM2CT_Add1_B1);
    crrcMvb->setBool(0x221,1,7,HM2CT_Add1point5_B1);

    crrcMvb->setBool(0x221,2,0,HM2CT_Add2_B1);
    crrcMvb->setBool(0x221,2,1,HM2CT_Add2point5_B1);

    crrcMvb->setUnsignedChar(0x221,3,HM2CT_SAVEHVACPosition_U8);

    crrcMvb->setBool(0x221,4,0,HM2CT_Mp1DCUFaultReset_B1);
    crrcMvb->setBool(0x221,4,1,HM2CT_M1DCUFaultReset_B1);
    crrcMvb->setBool(0x221,4,2,HM2CT_M2DCUFaultReset_B1);
    crrcMvb->setBool(0x221,4,3,HM2CT_Mp2DCUFaultReset_B1);
    crrcMvb->setBool(0x221,4,4,HM2CT_Mp1DynamicBrkCut_B1);
    crrcMvb->setBool(0x221,4,5,HM2CT_M1DynamicBrkCut_B1);
    crrcMvb->setBool(0x221,4,6,HM2CT_M2DynamicBrkCut_B1);
    crrcMvb->setBool(0x221,4,7,HM2CT_Mp2DynamicBrkCut_B1);

    crrcMvb->setBool(0x221,5,0,HM2CT_ACU1Reset_B1);
    crrcMvb->setBool(0x221,5,1,HM2CT_ACU2Reset_B1);
    crrcMvb->setBool(0x221,5,2,HM2CT_ACU3Reset_B1);
    crrcMvb->setBool(0x221,5,3,HM2CT_ACU4Reset_B1);
    crrcMvb->setBool(0x221,5,4,HM2CT_ACU1Cutoff_B1);
    crrcMvb->setBool(0x221,5,5,HM2CT_ACU2Cutoff_B1);
    crrcMvb->setBool(0x221,5,6,HM2CT_ACU3Cutoff_B1);
    crrcMvb->setBool(0x221,5,7,HM2CT_ACU4Cutoff_B1);

    crrcMvb->setBool(0x221,6,2,HM2CT_DCURunStatClear_B1);
    crrcMvb->setBool(0x221,6,3,HM2CT_ACMRunStatClear_B1);

    crrcMvb->setBool(0x221,6,6,HM2CT_TC1APClear_B1);
    crrcMvb->setBool(0x221,6,7,HM2CT_TC2APClear_B1);

    crrcMvb->setBool(0x221,7,3,HM2CT_ACDETestStopFlag_B1);
    crrcMvb->setBool(0x221,7,4,HM2CT_ACDETestStartFlag_B1);

    crrcMvb->setBool(0x221,7,7,HM2CT_BCUSelfTestReq_B1);

    crrcMvb->setBool(0x221,8,4,HM2CT_OpenLeftDrReq_B1);
    crrcMvb->setBool(0x221,8,5,HM2CT_OpenRightDrReq_B1);
    crrcMvb->setBool(0x221,8,6,HM2CT_CloseLeftDrReq_B1);
    crrcMvb->setBool(0x221,8,7,HM2CT_CloseRightDrReq_B1);

    crrcMvb->setBool(0x221,26,0,HM2CT_RunStatSetFlag_B1);

    crrcMvb->setUnsignedChar(0x221,27,HM2CT_RunStatSetType_U8);


    /****************************************************CCU-HMI********************************************/
    CTHM_CCU1On_B1=crrcMvb->getBool(0x208,0,0);
    CTHM_CCU2On_B1=crrcMvb->getBool(0x208,0,1);
    CTHM_ERM1On_B1=crrcMvb->getBool(0x208,0,2);
    CTHM_ERM2On_B1=crrcMvb->getBool(0x208,0,3);
    CTHM_HMI1On_B1=crrcMvb->getBool(0x208,0,4);
    CTHM_HMI2On_B1=crrcMvb->getBool(0x208,0,5);

    CTHM_TC1RIOMGWOn_B1=crrcMvb->getBool(0x208,1,0);
    CTHM_TC1RIOMGWROn_B1=crrcMvb->getBool(0x208,1,1);
    CTHM_Mp1RIOMGWOn_B1=crrcMvb->getBool(0x208,1,2);
    CTHM_M1RIOMGWOn_B1=crrcMvb->getBool(0x208,1,3);
    CTHM_M2RIOMGWOn_B1=crrcMvb->getBool(0x208,1,4);
    CTHM_Mp2RIOMGWOn_B1=crrcMvb->getBool(0x208,1,5);
    CTHM_TC2RIOMGWOn_B1=crrcMvb->getBool(0x208,1,6);
    CTHM_TC2RIOMGWROn_B1=crrcMvb->getBool(0x208,1,7);

    CTHM_TC1DI1On_B1=crrcMvb->getBool(0x208,2,0);
    CTHM_TC1DI2On_B1=crrcMvb->getBool(0x208,2,1);
    CTHM_TC1DI3On_B1=crrcMvb->getBool(0x208,2,2);
    CTHM_TC1DI4On_B1=crrcMvb->getBool(0x208,2,3);
    CTHM_TC1DO1On_B1=crrcMvb->getBool(0x208,2,4);
    CTHM_TC1DO2On_B1=crrcMvb->getBool(0x208,2,5);
    CTHM_TC1AX1On_B1=crrcMvb->getBool(0x208,2,6);
    CTHM_TC1AX2On_B1=crrcMvb->getBool(0x208,2,7);

    CTHM_MP1DI1On_B1=crrcMvb->getBool(0x208,3,0);
    CTHM_MP1DO1On_B1=crrcMvb->getBool(0x208,3,1);
    CTHM_M1DI1On_B1=crrcMvb->getBool(0x208,3,2);
    CTHM_M1DO1On_B1=crrcMvb->getBool(0x208,3,3);
    CTHM_M2DI1On_B1=crrcMvb->getBool(0x208,3,4);
    CTHM_M2DO1On_B1=crrcMvb->getBool(0x208,3,5);
    CTHM_MP2DI1On_B1=crrcMvb->getBool(0x208,3,6);
    CTHM_MP2DO1On_B1=crrcMvb->getBool(0x208,3,7);

    CTHM_TC2DI1On_B1=crrcMvb->getBool(0x208,4,0);
    CTHM_TC2DI2On_B1=crrcMvb->getBool(0x208,4,1);
    CTHM_TC2DI3On_B1=crrcMvb->getBool(0x208,4,2);
    CTHM_TC2DI4On_B1=crrcMvb->getBool(0x208,4,3);
    CTHM_TC2DO1On_B1=crrcMvb->getBool(0x208,4,4);
    CTHM_TC2DO2On_B1=crrcMvb->getBool(0x208,4,5);
    CTHM_TC2AX1On_B1=crrcMvb->getBool(0x208,4,6);
    CTHM_TC2AX2On_B1=crrcMvb->getBool(0x208,4,7);

    CTHM_DCUM1On_B1=crrcMvb->getBool(0x208,5,0);
    CTHM_DCUM2On_B1=crrcMvb->getBool(0x208,5,1);
    CTHM_DCUM3On_B1=crrcMvb->getBool(0x208,5,2);
    CTHM_DCUM4On_B1=crrcMvb->getBool(0x208,5,3);
    CTHM_ACU1On_B1=crrcMvb->getBool(0x208,5,4);
    CTHM_ACU2On_B1=crrcMvb->getBool(0x208,5,5);
    CTHM_ACU3On_B1=crrcMvb->getBool(0x208,5,6);
    CTHM_ACU4On_B1=crrcMvb->getBool(0x208,5,7);

    CTHM_BCU1On_B1=crrcMvb->getBool(0x208,6,0);
    CTHM_BCU2On_B1=crrcMvb->getBool(0x208,6,1);
    CTHM_BCU3On_B1=crrcMvb->getBool(0x208,6,2);
    CTHM_BCU4On_B1=crrcMvb->getBool(0x208,6,3);
    CTHM_EDCU1On_B1=crrcMvb->getBool(0x208,6,4);
    CTHM_EDCU2On_B1=crrcMvb->getBool(0x208,6,5);
    CTHM_EDCU3On_B1=crrcMvb->getBool(0x208,6,6);
    CTHM_EDCU4On_B1=crrcMvb->getBool(0x208,6,7);

    CTHM_EDCU5On_B1=crrcMvb->getBool(0x208,7,0);
    CTHM_EDCU6On_B1=crrcMvb->getBool(0x208,7,1);
    CTHM_EDCU7On_B1=crrcMvb->getBool(0x208,7,2);
    CTHM_EDCU8On_B1=crrcMvb->getBool(0x208,7,3);
    CTHM_EDCU9On_B1=crrcMvb->getBool(0x208,7,4);
    CTHM_EDCU10On_B1=crrcMvb->getBool(0x208,7,5);
    CTHM_EDCU11On_B1=crrcMvb->getBool(0x208,7,6);
    CTHM_EDCU12On_B1=crrcMvb->getBool(0x208,7,7);

    CTHM_HVAC1On_B1=crrcMvb->getBool(0x208,8,0);
    CTHM_HVAC2On_B1=crrcMvb->getBool(0x208,8,1);
    CTHM_HVAC3On_B1=crrcMvb->getBool(0x208,8,2);
    CTHM_HVAC4On_B1=crrcMvb->getBool(0x208,8,3);
    CTHM_HVAC5On_B1=crrcMvb->getBool(0x208,8,4);
    CTHM_HVAC6On_B1=crrcMvb->getBool(0x208,8,5);
    CTHM_PIS1On_B1=crrcMvb->getBool(0x208,8,6);
    CTHM_PIS2On_B1=crrcMvb->getBool(0x208,8,7);

    CTHM_CCUD1On_B1=crrcMvb->getBool(0x208,9,0);
    CTHM_CCUD2On_B1=crrcMvb->getBool(0x208,9,1);
    CTHM_ATC1On_B1=crrcMvb->getBool(0x208,9,2);
    CTHM_ATC2On_B1=crrcMvb->getBool(0x208,9,3);
    CTHM_TDS1On_B1=crrcMvb->getBool(0x208,9,4);
    CTHM_TDS2On_B1=crrcMvb->getBool(0x208,9,5);
    CTHM_BMS1On_B1=crrcMvb->getBool(0x208,9,6);
    CTHM_BMS2On_B1=crrcMvb->getBool(0x208,9,7);

    CTHM_FAS1On_B1=crrcMvb->getBool(0x208,10,0);
    CTHM_FAS2On_B1=crrcMvb->getBool(0x208,10,1);
    CTHM_LCU1On_B1=crrcMvb->getBool(0x208,10,2);
    CTHM_LCU2On_B1=crrcMvb->getBool(0x208,10,3);
    CTHM_LCU3On_B1=crrcMvb->getBool(0x208,10,4);
    CTHM_LCU4On_B1=crrcMvb->getBool(0x208,10,5);
    CTHM_LCU5On_B1=crrcMvb->getBool(0x208,10,6);
    CTHM_LCU6On_B1=crrcMvb->getBool(0x208,10,7);

    CTHM_LCU7On_B1=crrcMvb->getBool(0x208,11,0);
    CTHM_LCU8On_B1=crrcMvb->getBool(0x208,11,1);
    CTHM_PCU1On_B1=crrcMvb->getBool(0x208,11,2);
    CTHM_PCU2On_B1=crrcMvb->getBool(0x208,11,3);

    CTHM_PIS1Active_B1=crrcMvb->getBool(0x208,12,0);
    CTHM_PIS2Active_B1=crrcMvb->getBool(0x208,12,1);
    CTHM_ATC1Active_B1=crrcMvb->getBool(0x208,12,2);
    CTHM_ATC2Active_B1=crrcMvb->getBool(0x208,12,3);
    CTHM_CCU1Active_B1=crrcMvb->getBool(0x208,12,4);
    CTHM_CCU2Active_B1=crrcMvb->getBool(0x208,12,5);
    CTHM_TC1Active_B1=crrcMvb->getBool(0x208,12,6);
    CTHM_TC2Active_B1=crrcMvb->getBool(0x208,12,7);

    CTHM_Traction_B1=crrcMvb->getBool(0x208,13,0);
    CTHM_Brake_B1=crrcMvb->getBool(0x208,13,1);
    CTHM_FastBrake_B1=crrcMvb->getBool(0x208,13,2);
    CTHM_EmgyBrake_B1=crrcMvb->getBool(0x208,13,3);
    CTHM_Backward_B1=crrcMvb->getBool(0x208,13,4);
    CTHM_Forward_B1=crrcMvb->getBool(0x208,13,5);
    CTHM_DrOpenEnable_B1=crrcMvb->getBool(0x208,13,6);

    CTHM_LineNum_U8=crrcMvb->getUnsignedChar(0x208,14);
    CTHM_TrainNum_U8=crrcMvb->getUnsignedChar(0x208,15);
    CTHM_Grade_U8=crrcMvb->getUnsignedChar(0x208,16);
    CTHM_DriveMode_U8=crrcMvb->getUnsignedChar(0x208,17);

    CTHM_TrainLimitSpeed_U16=crrcMvb->getUnsignedInt(0x208,18);
    CTHM_TrainSpeed_U16=crrcMvb->getUnsignedInt(0x208,20);
    CTHM_CatenaryVoltage_U16=crrcMvb->getUnsignedInt(0x208,22);
    CTHM_CatenaryCurrent_U16=crrcMvb->getUnsignedInt(0x208,24);

    CTHM_WheelDig1FedBk_U8=crrcMvb->getUnsignedChar(0x208,26);
    CTHM_WheelDig2FedBk_U8=crrcMvb->getUnsignedChar(0x208,27);
    CTHM_WheelDig3FedBk_U8=crrcMvb->getUnsignedChar(0x208,28);
    CTHM_WheelDig4FedBk_U8=crrcMvb->getUnsignedChar(0x208,29);
    CTHM_WheelDig5FedBk_U8=crrcMvb->getUnsignedChar(0x208,30);
    CTHM_WheelDig6FedBk_U8=crrcMvb->getUnsignedChar(0x208,31);
    CTHM_CCU1SWVer_U8=crrcMvb->getUnsignedChar(0x209,0);
    CTHM_CCU1MVBVer_U8=crrcMvb->getUnsignedChar(0x209,1);
    CTHM_CCU1SDBVer_U8=crrcMvb->getUnsignedChar(0x209,2);
    CTHM_CCU1VxWorksVer_U8=crrcMvb->getUnsignedChar(0x209,3);
    CTHM_CCU1FPGAVer_U8=crrcMvb->getUnsignedChar(0x209,4);
    CTHM_CCU2SWVer_U8=crrcMvb->getUnsignedChar(0x209,5);
    CTHM_CCU2MVBVer_U8=crrcMvb->getUnsignedChar(0x209,6);
    CTHM_CCU2SDBVer_U8=crrcMvb->getUnsignedChar(0x209,7);
    CTHM_CCU2VxWorksVer_U8=crrcMvb->getUnsignedChar(0x209,8);
    CTHM_CCU2FPGAVer_U8=crrcMvb->getUnsignedChar(0x209,9);

    CTHM_Acceleration_U16=crrcMvb->getUnsignedInt(0x209,10);
    CTHM_Acceleration40_U16=crrcMvb->getUnsignedInt(0x209,12);
    CTHM_Acceleration80_U16=crrcMvb->getUnsignedInt(0x209,14);
    CTHM_Deceleration_U16=crrcMvb->getUnsignedInt(0x209,16);
    CTHM_AcDeStartVelocity_U16=crrcMvb->getUnsignedInt(0x209,18);
    CTHM_AcDeDistance_U16=crrcMvb->getUnsignedInt(0x209,20);
    CTHM_AcDeTime_U16=crrcMvb->getUnsignedInt(0x209,22);

    CTHM_TC1Load_U16=crrcMvb->getUnsignedInt(0x20A,0);
    CTHM_MP1Load_U16=crrcMvb->getUnsignedInt(0x20A,2);
    CTHM_M1Load_U16=crrcMvb->getUnsignedInt(0x20A,4);
    CTHM_M2Load_U16=crrcMvb->getUnsignedInt(0x20A,6);
    CTHM_MP2Load_U16=crrcMvb->getUnsignedInt(0x20A,8);
    CTHM_TC2Load_U16=crrcMvb->getUnsignedInt(0x20A,10);

    CTHM_CurrentStation_U32=crrcMvb->getUnsignedInt(0x20A,12);
    CTHM_NextStationID_U32=crrcMvb->getUnsignedInt(0x20A,16);
    CTHM_LastStationID_U32=crrcMvb->getUnsignedInt(0x20A,20);

    /**********************************************ERM1-CCU*********************************************/
    DT1CT_ERMLifeSign_U8=crrcMvb->getUnsignedChar(0x310,0);
    DT1CT_ERMSWVer_U8=crrcMvb->getUnsignedChar(0x310,1);
    DT1CT_ERMVxWorksVer_U8=crrcMvb->getUnsignedChar(0x310,2);
    DT1CT_ERMMVBSWVer_U8=crrcMvb->getUnsignedChar(0x310,3);
    DT1CT_ERMSDBVer_U8=crrcMvb->getUnsignedChar(0x310,4);
    DT1CT_ERMFPGAVer_U8=crrcMvb->getUnsignedChar(0x310,5);

    DT1CT_TCMSRunTime_U32=crrcMvb->getUnsignedInt32(0x311,16);
    DT1CT_RunKilometers_U32=crrcMvb->getUnsignedInt32(0x311,20);
    DT1CT_DCU1ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x311,24);
    DT1CT_DCU2ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x311,28);

    DT1CT_DCU3ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x312,0);
    DT1CT_DCU4ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x312,4);
    DT1CT_ACM1ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x312,8);
    DT1CT_ACM2ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x312,12);
    DT1CT_ACM3ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x312,16);
    DT1CT_ACM4ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x312,20);
    DT1CT_DCU1RhBrkConsEnergy_U32=crrcMvb->getUnsignedInt32(0x312,24);
    DT1CT_DCU2RhBrkConsEnergy_U32=crrcMvb->getUnsignedInt32(0x312,28);

    DT1CT_DCU3RhBrkConsEnergy_U32=crrcMvb->getUnsignedInt32(0x313,0);
    DT1CT_DCU4RhBrkConsEnergy_U32=crrcMvb->getUnsignedInt32(0x313,4);
    DT1CT_DCU1RegBrkEnergy_U32=crrcMvb->getUnsignedInt32(0x313,8);
    DT1CT_DCU2RegBrkEnergy_U32=crrcMvb->getUnsignedInt32(0x313,12);
    DT1CT_DCU3RegBrkEnergy_U32=crrcMvb->getUnsignedInt32(0x313,16);
    DT1CT_DCU4RegBrkEnergy_U32=crrcMvb->getUnsignedInt32(0x313,20);
    DT1CT_TC1APRunTime_U32=crrcMvb->getUnsignedInt32(0x313,24);
    DT1CT_TC2APRunTime_U32=crrcMvb->getUnsignedInt32(0x313,28);

    /**********************************************ERM2-CCU*********************************************/
    DT2CT_ERMLifeSign_U8=crrcMvb->getUnsignedChar(0x320,0);
    DT2CT_ERMSWVer_U8=crrcMvb->getUnsignedChar(0x320,1);
    DT2CT_ERMVxWorksVer_U8=crrcMvb->getUnsignedChar(0x320,2);
    DT2CT_ERMMVBSWVer_U8=crrcMvb->getUnsignedChar(0x320,3);
    DT2CT_ERMSDBVer_U8=crrcMvb->getUnsignedChar(0x320,4);
    DT2CT_ERMFPGAVer_U8=crrcMvb->getUnsignedChar(0x320,5);

    DT2CT_TCMSRunTime_U32=crrcMvb->getUnsignedInt32(0x321,16);
    DT2CT_RunKilometers_U32=crrcMvb->getUnsignedInt32(0x321,20);
    DT2CT_DCU1ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x321,24);
    DT2CT_DCU2ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x321,28);

    DT2CT_DCU3ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x322,0);
    DT2CT_DCU4ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x322,4);
    DT2CT_ACM1ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x322,8);
    DT2CT_ACM2ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x322,12);
    DT2CT_ACM3ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x322,16);
    DT2CT_ACM4ConsEnergy_U32=crrcMvb->getUnsignedInt32(0x322,20);
    DT2CT_DCU1RhBrkConsEnergy_U32=crrcMvb->getUnsignedInt32(0x322,24);
    DT2CT_DCU2RhBrkConsEnergy_U32=crrcMvb->getUnsignedInt32(0x322,28);

    DT2CT_DCU3RhBrkConsEnergy_U32=crrcMvb->getUnsignedInt32(0x323,0);
    DT2CT_DCU4RhBrkConsEnergy_U32=crrcMvb->getUnsignedInt32(0x323,4);
    DT2CT_DCU1RegBrkEnergy_U32=crrcMvb->getUnsignedInt32(0x323,8);
    DT2CT_DCU2RegBrkEnergy_U32=crrcMvb->getUnsignedInt32(0x323,12);
    DT2CT_DCU3RegBrkEnergy_U32=crrcMvb->getUnsignedInt32(0x323,16);
    DT2CT_DCU4RegBrkEnergy_U32=crrcMvb->getUnsignedInt32(0x323,20);
    DT2CT_TC1APRunTime_U32=crrcMvb->getUnsignedInt32(0x323,24);
    DT2CT_TC2APRunTime_U32=crrcMvb->getUnsignedInt32(0x323,28);

    /************************************************CCU-ERM************************************************/
    CTDT_CCULifeSign_U8=crrcMvb->getUnsignedChar(0x308,0);

    CTDT_TracSignNotSame_B1=crrcMvb->getBool(0x308,1,0);
    CTDT_BrkSignNotSame_B1=crrcMvb->getBool(0x308,1,1);
    CTDT_EBBrkSignNotSame_B1=crrcMvb->getBool(0x308,1,2);
    CTDT_AIBrkSignNotSame_B1=crrcMvb->getBool(0x308,1,3);
    CTDT_ForwardSignNotSame_B1=crrcMvb->getBool(0x308,1,4);
    CTDT_BackwardSignNotSame_B1=crrcMvb->getBool(0x308,1,5);
    CTDT_TC1ActSignNotSame_B1=crrcMvb->getBool(0x308,1,7);

    CTDT_TC2ActSignNotSame_B1=crrcMvb->getBool(0x308,2,0);
    CTDT_TC1ForwardSignRedFault_B1=crrcMvb->getBool(0x308,2,1);
    CTDT_TC2ForwardSignRedFault_B1=crrcMvb->getBool(0x308,2,2);
    CTDT_TC1BackwardSignRedFault_B1=crrcMvb->getBool(0x308,2,3);
    CTDT_TC2BackwardSignRedFault_B1=crrcMvb->getBool(0x308,2,4);
    CTDT_TC1TracSignRedFault_B1=crrcMvb->getBool(0x308,2,5);
    CTDT_TC2TracSignRedFault_B1=crrcMvb->getBool(0x308,2,6);
    CTDT_TC1BrkSignRedFault_B1=crrcMvb->getBool(0x308,2,7);

    CTDT_TC2BrkSignRedFault_B1=crrcMvb->getBool(0x308,3,0);
    CTDT_TC1FastBrkSignRedFault_B1=crrcMvb->getBool(0x308,3,1);
    CTDT_TC2FastBrkSignRedFault_B1=crrcMvb->getBool(0x308,3,2);
    CTDT_Mp1ADDLowPanto_B1=crrcMvb->getBool(0x308,3,3);
    CTDT_Mp2ADDLowPanto_B1=crrcMvb->getBool(0x308,3,4);
    CTDT_BothCabActive_B1=crrcMvb->getBool(0x308,3,5);
    CTDT_TC1BothDirectionActive_B1=crrcMvb->getBool(0x308,3,6);
    CTDT_TC2BothDirectionActive_B1=crrcMvb->getBool(0x308,3,7);

    CTDT_TC1BothTracBrkActive_B1=crrcMvb->getBool(0x308,4,0);
    CTDT_TC2BothTracBrkActive_B1=crrcMvb->getBool(0x308,4,1);
    CTDT_TC1BothSideOpenDoor_B1=crrcMvb->getBool(0x308,4,2);
    CTDT_TC2BothSideOpenDoor_B1=crrcMvb->getBool(0x308,4,3);
    CTDT_TC1BCUSTInterrupted_B1=crrcMvb->getBool(0x308,4,4);
    CTDT_MP1BCUSTInterrupted_B1=crrcMvb->getBool(0x308,4,5);
    CTDT_M1BCUSTInterrupted_B1=crrcMvb->getBool(0x308,4,6);
    CTDT_M2BCUSTInterrupted_B1=crrcMvb->getBool(0x308,4,7);

    CTDT_MP2BCUSTInterrupted_B1=crrcMvb->getBool(0x308,5,0);
    CTDT_TC2BCUSTInterrupted_B1=crrcMvb->getBool(0x308,5,1);
    CTDT_2SCUFault_B1=crrcMvb->getBool(0x308,5,2);

    /**************************************************DDC1-CCU*****************************************/
    TR1CT_DCUMLifeSignal_I16=crrcMvb->getSignedInt(0x480,0);
    TR1CT_DCUMBrkForce_I16=crrcMvb->getSignedInt(0x480,2);
    TR1CT_Axis1Speed_I16=crrcMvb->getSignedInt(0x480,4);
    TR1CT_Axis2Speed_I16=crrcMvb->getSignedInt(0x480,6);
    TR1CT_Axis3Speed_I16=crrcMvb->getSignedInt(0x480,8);
    TR1CT_Axis4Speed_I16=crrcMvb->getSignedInt(0x480,10);
    TR1CT_BrkChopingCtrlRate_I16=crrcMvb->getSignedInt(0x480,12);

    TR1CT_EBOK_B1=crrcMvb->getBool(0x480,14,2);
    TR1CT_Slide_B1=crrcMvb->getBool(0x480,14,7);
    TR1CT_Axis4SpeedValid_B1=crrcMvb->getBool(0x480,15,0);
    TR1CT_Axis3SpeedValid_B1=crrcMvb->getBool(0x480,15,1);
    TR1CT_Axis2SpeedValid_B1=crrcMvb->getBool(0x480,15,2);
    TR1CT_Axis1SpeedValid_B1=crrcMvb->getBool(0x480,15,3);
    TR1CT_TBEValid_B1=crrcMvb->getBool(0x480,15,7);

    TR1CT_DCULifeSignal1_I16=crrcMvb->getSignedInt(0x481,0);
    TR1CT_ActualPower_I16=crrcMvb->getSignedInt(0x481,2);
    TR1CT_DCVoltage_I16=crrcMvb->getSignedInt(0x481,4);
    TR1CT_DCCurrent_I16=crrcMvb->getSignedInt(0x481,6);
    TR1CT_EBVirtualValue_I16=crrcMvb->getSignedInt(0x481,8);
    TR1CT_TractionStatus_I16=crrcMvb->getSignedInt(0x481,10);
    TR1CT_MaxEBEffort_I16=crrcMvb->getSignedInt(0x481,14);
    TR1CT_BrkChopingActualRate_I16=crrcMvb->getSignedInt(0x481,16);
    TR1CT_MotorCurrent_I16=crrcMvb->getSignedInt(0x481,18);
    TR1CT_SystemFeedback_I16=crrcMvb->getSignedInt(0x481,20);
    TR1CT_MaxAvailbleEB_I16=crrcMvb->getSignedInt(0x481,22);

    TR1CT_AdjustActive_B1=crrcMvb->getBool(0x481,28,0);
    TR1CT_Backward_B1=crrcMvb->getBool(0x481,28,2);
    TR1CT_Forward_B1=crrcMvb->getBool(0x481,28,3);

    TR1CT_GroundingFlt_B1=crrcMvb->getBool(0x481,29,0);
    TR1CT_ChoppingPowerValid_B1=crrcMvb->getBool(0x481,29,2);
    TR1CT_MotorPowerValid_B1=crrcMvb->getBool(0x481,29,3);
    TR1CT_MaxEBValid_B1=crrcMvb->getBool(0x481,29,4);
    TR1CT_TrcSaftyEnable_B1=crrcMvb->getBool(0x481,29,5);
    TR1CT_DCCurrentValid_B1=crrcMvb->getBool(0x481,29,6);
    TR1CT_DCVoltageValid_B1=crrcMvb->getBool(0x481,29,7);

    TR1CT_LineVoltageOK_B1=crrcMvb->getBool(0x481,30,5);
    TR1CT_OutsideFanFullSpeed_B1=crrcMvb->getBool(0x481,30,6);
    TR1CT_OutsideFanHalfSpeed_B1=crrcMvb->getBool(0x481,30,7);

    TR1CT_IESContacterQ2_B1=crrcMvb->getBool(0x481,31,1);
    TR1CT_IESContacterQ1_B1=crrcMvb->getBool(0x481,31,2);
    TR1CT_SupplyMode_B1=crrcMvb->getBool(0x481,31,3);
    TR1CT_MotorCurrentValid_B1=crrcMvb->getBool(0x481,31,4);
    TR1CT_DivContacterClose_B1=crrcMvb->getBool(0x481,31,5);
    TR1CT_HSCBClose_B1=crrcMvb->getBool(0x481,31,7);

    TR1CT_DCULifeSignal2_I16=crrcMvb->getSignedInt(0x492,0);
    TR1CT_DCUMVersion_I16=crrcMvb->getSignedInt(0x492,2);
    TR1CT_TrcRadiatorTemp_I16=crrcMvb->getSignedInt(0x492,4);
    TR1CT_Motor1Temp_I16=crrcMvb->getSignedInt(0x492,6);
    TR1CT_Motor2Temp_I16=crrcMvb->getSignedInt(0x492,8);
    TR1CT_Motor3Temp_I16=crrcMvb->getSignedInt(0x492,10);
    TR1CT_Motor4Temp_I16=crrcMvb->getSignedInt(0x492,12);
    TR1CT_TrcAirTemp_I16=crrcMvb->getSignedInt(0x492,14);
    TR1CT_ChargingRTemp_I16=crrcMvb->getSignedInt(0x492,16);
    TR1CT_BrkRTemp_I16=crrcMvb->getSignedInt(0x492,18);
    TR1CT_Axis1Diameter_I16=crrcMvb->getSignedInt(0x492,20);
    TR1CT_Axis2Diameter_I16=crrcMvb->getSignedInt(0x492,22);
    TR1CT_Axis3Diameter_I16=crrcMvb->getSignedInt(0x492,24);
    TR1CT_Axis4Diameter_I16=crrcMvb->getSignedInt(0x492,26);

    TR1CT_WashingMode_B1=crrcMvb->getBool(0x492,29,1);
    TR1CT_NotZeroSpeed_B1=crrcMvb->getBool(0x492,29,3);
    TR1CT_MainControler3_B1=crrcMvb->getBool(0x492,29,5);
    TR1CT_MainControler2_B1=crrcMvb->getBool(0x492,29,6);
    TR1CT_MainControler1_B1=crrcMvb->getBool(0x492,29,7);

    TR1CT_Axis4DiameterValid_B1=crrcMvb->getBool(0x492,30,2);
    TR1CT_Axis3DiameterValid_B1=crrcMvb->getBool(0x492,30,3);
    TR1CT_Axis2DiameterValid_B1=crrcMvb->getBool(0x492,30,4);
    TR1CT_Axis1DiameterValid_B1=crrcMvb->getBool(0x492,30,5);
    TR1CT_BrkRTempValid_B1=crrcMvb->getBool(0x492,30,7);

    TR1CT_ChargingRTempValid_B1=crrcMvb->getBool(0x492,31,0);
    TR1CT_DCUInvAirTempValid_B1=crrcMvb->getBool(0x492,31,2);
    TR1CT_Motor4TempValid_B1=crrcMvb->getBool(0x492,31,3);
    TR1CT_Motor3TempValid_B1=crrcMvb->getBool(0x492,31,4);
    TR1CT_Motor2TempValid_B1=crrcMvb->getBool(0x492,31,5);
    TR1CT_Motor1TempValid_B1=crrcMvb->getBool(0x492,31,6);
    TR1CT_DCUInvRadiatorTempValid_B1=crrcMvb->getBool(0x492,31,7);

    TR1CT_TractionEnergy_I16=crrcMvb->getSignedInt(0x494,8);
    TR1CT_RebornEnergy_I16=crrcMvb->getSignedInt(0x494,10);
    TR1CT_MCMWorkingTime_I16=crrcMvb->getSignedInt(0x494,12);
    TR1CT_MotorWorkingDistance_I16=crrcMvb->getSignedInt(0x494,14);

    /**************************************************DDC2-CCU*****************************************/
    TR2CT_DCUMLifeSignal_I16=crrcMvb->getSignedInt(0x4C0,0);
    TR2CT_DCUMBrkForce_I16=crrcMvb->getSignedInt(0x4C0,2);
    TR2CT_Axis1Speed_I16=crrcMvb->getSignedInt(0x4C0,4);
    TR2CT_Axis2Speed_I16=crrcMvb->getSignedInt(0x4C0,6);
    TR2CT_Axis3Speed_I16=crrcMvb->getSignedInt(0x4C0,8);
    TR2CT_Axis4Speed_I16=crrcMvb->getSignedInt(0x4C0,10);
    TR2CT_BrkChopingCtrlRate_I16=crrcMvb->getSignedInt(0x4C0,12);

    TR2CT_EBOK_B1=crrcMvb->getBool(0x4C0,14,2);
    TR2CT_Slide_B1=crrcMvb->getBool(0x4C0,14,7);
    TR2CT_Axis4SpeedValid_B1=crrcMvb->getBool(0x4C0,15,0);
    TR2CT_Axis3SpeedValid_B1=crrcMvb->getBool(0x4C0,15,1);
    TR2CT_Axis2SpeedValid_B1=crrcMvb->getBool(0x4C0,15,2);
    TR2CT_Axis1SpeedValid_B1=crrcMvb->getBool(0x4C0,15,3);
    TR2CT_TBEValid_B1=crrcMvb->getBool(0x4C0,15,7);

    TR2CT_DCULifeSignal1_I16=crrcMvb->getSignedInt(0x4C1,0);
    TR2CT_ActualPower_I16=crrcMvb->getSignedInt(0x4C1,2);
    TR2CT_DCVoltage_I16=crrcMvb->getSignedInt(0x4C1,4);
    TR2CT_DCCurrent_I16=crrcMvb->getSignedInt(0x4C1,6);
    TR2CT_EBVirtualValue_I16=crrcMvb->getSignedInt(0x4C1,8);
    TR2CT_TractionStatus_I16=crrcMvb->getSignedInt(0x4C1,10);
    TR2CT_MaxEBEffort_I16=crrcMvb->getSignedInt(0x4C1,14);
    TR2CT_BrkChopingActualRate_I16=crrcMvb->getSignedInt(0x4C1,16);
    TR2CT_MotorCurrent_I16=crrcMvb->getSignedInt(0x4C1,18);
    TR2CT_SystemFeedback_I16=crrcMvb->getSignedInt(0x4C1,20);
    TR2CT_MaxAvailbleEB_I16=crrcMvb->getSignedInt(0x4C1,22);

    TR2CT_AdjustActive_B1=crrcMvb->getBool(0x4C1,28,0);
    TR2CT_Backward_B1=crrcMvb->getBool(0x4C1,28,2);
    TR2CT_Forward_B1=crrcMvb->getBool(0x4C1,28,3);

    TR2CT_GroundingFlt_B1=crrcMvb->getBool(0x4C1,29,0);
    TR2CT_ChoppingPowerValid_B1=crrcMvb->getBool(0x4C1,29,2);
    TR2CT_MotorPowerValid_B1=crrcMvb->getBool(0x4C1,29,3);
    TR2CT_MaxEBValid_B1=crrcMvb->getBool(0x4C1,29,4);
    TR2CT_TrcSaftyEnable_B1=crrcMvb->getBool(0x4C1,29,5);
    TR2CT_DCCurrentValid_B1=crrcMvb->getBool(0x4C1,29,6);
    TR2CT_DCVoltageValid_B1=crrcMvb->getBool(0x4C1,29,7);

    TR2CT_LineVoltageOK_B1=crrcMvb->getBool(0x4C1,30,5);
    TR2CT_OutsideFanFullSpeed_B1=crrcMvb->getBool(0x4C1,30,6);
    TR2CT_OutsideFanHalfSpeed_B1=crrcMvb->getBool(0x4C1,30,7);

    TR2CT_IESContacterQ2_B1=crrcMvb->getBool(0x4C1,31,1);
    TR2CT_IESContacterQ1_B1=crrcMvb->getBool(0x4C1,31,2);
    TR2CT_SupplyMode_B1=crrcMvb->getBool(0x4C1,31,3);
    TR2CT_MotorCurrentValid_B1=crrcMvb->getBool(0x4C1,31,4);
    TR2CT_DivContacterClose_B1=crrcMvb->getBool(0x4C1,31,5);
    TR2CT_HSCBClose_B1=crrcMvb->getBool(0x4C1,31,7);

    TR2CT_DCULifeSignal2_I16=crrcMvb->getSignedInt(0x4C2,0);
    TR2CT_DCUMVersion_I16=crrcMvb->getSignedInt(0x4C2,2);
    TR2CT_TrcRadiatorTemp_I16=crrcMvb->getSignedInt(0x4C2,4);
    TR2CT_Motor1Temp_I16=crrcMvb->getSignedInt(0x4C2,6);
    TR2CT_Motor2Temp_I16=crrcMvb->getSignedInt(0x4C2,8);
    TR2CT_Motor3Temp_I16=crrcMvb->getSignedInt(0x4C2,10);
    TR2CT_Motor4Temp_I16=crrcMvb->getSignedInt(0x4C2,12);
    TR2CT_TrcAirTemp_I16=crrcMvb->getSignedInt(0x4C2,14);
    TR2CT_ChargingRTemp_I16=crrcMvb->getSignedInt(0x4C2,16);
    TR2CT_BrkRTemp_I16=crrcMvb->getSignedInt(0x4C2,18);
    TR2CT_Axis1Diameter_I16=crrcMvb->getSignedInt(0x4C2,20);
    TR2CT_Axis2Diameter_I16=crrcMvb->getSignedInt(0x4C2,22);
    TR2CT_Axis3Diameter_I16=crrcMvb->getSignedInt(0x4C2,24);
    TR2CT_Axis4Diameter_I16=crrcMvb->getSignedInt(0x4C2,26);

    TR2CT_WashingMode_B1=crrcMvb->getBool(0x4C2,29,1);
    TR2CT_NotZeroSpeed_B1=crrcMvb->getBool(0x4C2,29,3);
    TR2CT_MainControler3_B1=crrcMvb->getBool(0x4C2,29,5);
    TR2CT_MainControler2_B1=crrcMvb->getBool(0x4C2,29,6);
    TR2CT_MainControler1_B1=crrcMvb->getBool(0x4C2,29,7);

    TR2CT_Axis4DiameterValid_B1=crrcMvb->getBool(0x4C2,30,2);
    TR2CT_Axis3DiameterValid_B1=crrcMvb->getBool(0x4C2,30,3);
    TR2CT_Axis2DiameterValid_B1=crrcMvb->getBool(0x4C2,30,4);
    TR2CT_Axis1DiameterValid_B1=crrcMvb->getBool(0x4C2,30,5);
    TR2CT_BrkRTempValid_B1=crrcMvb->getBool(0x4C2,30,7);

    TR2CT_ChargingRTempValid_B1=crrcMvb->getBool(0x4C2,31,0);
    TR2CT_DCUInvAirTempValid_B1=crrcMvb->getBool(0x4C2,31,2);
    TR2CT_Motor4TempValid_B1=crrcMvb->getBool(0x4C2,31,3);
    TR2CT_Motor3TempValid_B1=crrcMvb->getBool(0x4C2,31,4);
    TR2CT_Motor2TempValid_B1=crrcMvb->getBool(0x4C2,31,5);
    TR2CT_Motor1TempValid_B1=crrcMvb->getBool(0x4C2,31,6);
    TR2CT_DCUInvRadiatorTempValid_B1=crrcMvb->getBool(0x4C2,31,7);

    TR2CT_TractionEnergy_I16=crrcMvb->getSignedInt(0x4C4,8);
    TR2CT_RebornEnergy_I16=crrcMvb->getSignedInt(0x4C4,10);
    TR2CT_MCMWorkingTime_I16=crrcMvb->getSignedInt(0x4C4,12);
    TR2CT_MotorWorkingDistance_I16=crrcMvb->getSignedInt(0x4C4,14);

    /**************************************************DDC3-CCU*****************************************/
    TR3CT_DCUMLifeSignal_I16=crrcMvb->getSignedInt(0x4D0,0);
    TR3CT_DCUMBrkForce_I16=crrcMvb->getSignedInt(0x4D0,2);
    TR3CT_Axis1Speed_I16=crrcMvb->getSignedInt(0x4D0,4);
    TR3CT_Axis2Speed_I16=crrcMvb->getSignedInt(0x4D0,6);
    TR3CT_Axis3Speed_I16=crrcMvb->getSignedInt(0x4D0,8);
    TR3CT_Axis4Speed_I16=crrcMvb->getSignedInt(0x4D0,10);
    TR3CT_BrkChopingCtrlRate_I16=crrcMvb->getSignedInt(0x4D0,12);

    TR3CT_EBOK_B1=crrcMvb->getBool(0x4D0,14,2);
    TR3CT_Slide_B1=crrcMvb->getBool(0x4D0,14,7);
    TR3CT_Axis4SpeedValid_B1=crrcMvb->getBool(0x4D0,15,0);
    TR3CT_Axis3SpeedValid_B1=crrcMvb->getBool(0x4D0,15,1);
    TR3CT_Axis2SpeedValid_B1=crrcMvb->getBool(0x4D0,15,2);
    TR3CT_Axis1SpeedValid_B1=crrcMvb->getBool(0x4D0,15,3);
    TR3CT_TBEValid_B1=crrcMvb->getBool(0x4D0,15,7);

    TR3CT_DCULifeSignal1_I16=crrcMvb->getSignedInt(0x4D1,0);
    TR3CT_ActualPower_I16=crrcMvb->getSignedInt(0x4D1,2);
    TR3CT_DCVoltage_I16=crrcMvb->getSignedInt(0x4D1,4);
    TR3CT_DCCurrent_I16=crrcMvb->getSignedInt(0x4D1,6);
    TR3CT_EBVirtualValue_I16=crrcMvb->getSignedInt(0x4D1,8);
    TR3CT_TractionStatus_I16=crrcMvb->getSignedInt(0x4D1,10);
    TR3CT_MaxEBEffort_I16=crrcMvb->getSignedInt(0x4D1,14);
    TR3CT_BrkChopingActualRate_I16=crrcMvb->getSignedInt(0x4D1,16);
    TR3CT_MotorCurrent_I16=crrcMvb->getSignedInt(0x4D1,18);
    TR3CT_SystemFeedback_I16=crrcMvb->getSignedInt(0x4D1,20);
    TR3CT_MaxAvailbleEB_I16=crrcMvb->getSignedInt(0x4D1,22);

    TR3CT_AdjustActive_B1=crrcMvb->getBool(0x4D1,28,0);
    TR3CT_Backward_B1=crrcMvb->getBool(0x4D1,28,2);
    TR3CT_Forward_B1=crrcMvb->getBool(0x4D1,28,3);

    TR3CT_GroundingFlt_B1=crrcMvb->getBool(0x4D1,29,0);
    TR3CT_ChoppingPowerValid_B1=crrcMvb->getBool(0x4D1,29,2);
    TR3CT_MotorPowerValid_B1=crrcMvb->getBool(0x4D1,29,3);
    TR3CT_MaxEBValid_B1=crrcMvb->getBool(0x4D1,29,4);
    TR3CT_TrcSaftyEnable_B1=crrcMvb->getBool(0x4D1,29,5);
    TR3CT_DCCurrentValid_B1=crrcMvb->getBool(0x4D1,29,6);
    TR3CT_DCVoltageValid_B1=crrcMvb->getBool(0x4D1,29,7);

    TR3CT_LineVoltageOK_B1=crrcMvb->getBool(0x4D1,30,5);
    TR3CT_OutsideFanFullSpeed_B1=crrcMvb->getBool(0x4D1,30,6);
    TR3CT_OutsideFanHalfSpeed_B1=crrcMvb->getBool(0x4D1,30,7);

    TR3CT_IESContacterQ2_B1=crrcMvb->getBool(0x4D1,31,1);
    TR3CT_IESContacterQ1_B1=crrcMvb->getBool(0x4D1,31,2);
    TR3CT_SupplyMode_B1=crrcMvb->getBool(0x4D1,31,3);
    TR3CT_MotorCurrentValid_B1=crrcMvb->getBool(0x4D1,31,4);
    TR3CT_DivContacterClose_B1=crrcMvb->getBool(0x4D1,31,5);
    TR3CT_HSCBClose_B1=crrcMvb->getBool(0x4D1,31,7);

    TR3CT_DCULifeSignal2_I16=crrcMvb->getSignedInt(0x4D2,0);
    TR3CT_DCUMVersion_I16=crrcMvb->getSignedInt(0x4D2,2);
    TR3CT_TrcRadiatorTemp_I16=crrcMvb->getSignedInt(0x4D2,4);
    TR3CT_Motor1Temp_I16=crrcMvb->getSignedInt(0x4D2,6);
    TR3CT_Motor2Temp_I16=crrcMvb->getSignedInt(0x4D2,8);
    TR3CT_Motor3Temp_I16=crrcMvb->getSignedInt(0x4D2,10);
    TR3CT_Motor4Temp_I16=crrcMvb->getSignedInt(0x4D2,12);
    TR3CT_TrcAirTemp_I16=crrcMvb->getSignedInt(0x4D2,14);
    TR3CT_ChargingRTemp_I16=crrcMvb->getSignedInt(0x4D2,16);
    TR3CT_BrkRTemp_I16=crrcMvb->getSignedInt(0x4D2,18);
    TR3CT_Axis1Diameter_I16=crrcMvb->getSignedInt(0x4D2,20);
    TR3CT_Axis2Diameter_I16=crrcMvb->getSignedInt(0x4D2,22);
    TR3CT_Axis3Diameter_I16=crrcMvb->getSignedInt(0x4D2,24);
    TR3CT_Axis4Diameter_I16=crrcMvb->getSignedInt(0x4D2,26);

    TR3CT_WashingMode_B1=crrcMvb->getBool(0x4D2,29,1);
    TR3CT_NotZeroSpeed_B1=crrcMvb->getBool(0x4D2,29,3);
    TR3CT_MainControler3_B1=crrcMvb->getBool(0x4D2,29,5);
    TR3CT_MainControler2_B1=crrcMvb->getBool(0x4D2,29,6);
    TR3CT_MainControler1_B1=crrcMvb->getBool(0x4D2,29,7);

    TR3CT_Axis4DiameterValid_B1=crrcMvb->getBool(0x4D2,30,2);
    TR3CT_Axis3DiameterValid_B1=crrcMvb->getBool(0x4D2,30,3);
    TR3CT_Axis2DiameterValid_B1=crrcMvb->getBool(0x4D2,30,4);
    TR3CT_Axis1DiameterValid_B1=crrcMvb->getBool(0x4D2,30,5);
    TR3CT_BrkRTempValid_B1=crrcMvb->getBool(0x4D2,30,7);

    TR3CT_ChargingRTempValid_B1=crrcMvb->getBool(0x4D2,31,0);
    TR3CT_DCUInvAirTempValid_B1=crrcMvb->getBool(0x4D2,31,2);
    TR3CT_Motor4TempValid_B1=crrcMvb->getBool(0x4D2,31,3);
    TR3CT_Motor3TempValid_B1=crrcMvb->getBool(0x4D2,31,4);
    TR3CT_Motor2TempValid_B1=crrcMvb->getBool(0x4D2,31,5);
    TR3CT_Motor1TempValid_B1=crrcMvb->getBool(0x4D2,31,6);
    TR3CT_DCUInvRadiatorTempValid_B1=crrcMvb->getBool(0x4D2,31,7);

    TR3CT_TractionEnergy_I16=crrcMvb->getSignedInt(0x4D4,8);
    TR3CT_RebornEnergy_I16=crrcMvb->getSignedInt(0x4D4,10);
    TR3CT_MCMWorkingTime_I16=crrcMvb->getSignedInt(0x4D4,12);
    TR3CT_MotorWorkingDistance_I16=crrcMvb->getSignedInt(0x4D4,14);


    /**************************************************DDC4-CCU*****************************************/
    TR4CT_DCUMLifeSignal_I16=crrcMvb->getSignedInt(0x480,0);
    TR4CT_DCUMBrkForce_I16=crrcMvb->getSignedInt(0x480,2);
    TR4CT_Axis1Speed_I16=crrcMvb->getSignedInt(0x480,4);
    TR4CT_Axis2Speed_I16=crrcMvb->getSignedInt(0x480,6);
    TR4CT_Axis3Speed_I16=crrcMvb->getSignedInt(0x480,8);
    TR4CT_Axis4Speed_I16=crrcMvb->getSignedInt(0x480,10);
    TR4CT_BrkChopingCtrlRate_I16=crrcMvb->getSignedInt(0x480,12);

    TR4CT_EBOK_B1=crrcMvb->getBool(0x480,14,2);
    TR4CT_Slide_B1=crrcMvb->getBool(0x480,14,7);
    TR4CT_Axis4SpeedValid_B1=crrcMvb->getBool(0x480,15,0);
    TR4CT_Axis3SpeedValid_B1=crrcMvb->getBool(0x480,15,1);
    TR4CT_Axis2SpeedValid_B1=crrcMvb->getBool(0x480,15,2);
    TR4CT_Axis1SpeedValid_B1=crrcMvb->getBool(0x480,15,3);
    TR4CT_TBEValid_B1=crrcMvb->getBool(0x480,15,7);

    TR4CT_DCULifeSignal1_I16=crrcMvb->getSignedInt(0x481,0);
    TR4CT_ActualPower_I16=crrcMvb->getSignedInt(0x481,2);
    TR4CT_DCVoltage_I16=crrcMvb->getSignedInt(0x481,4);
    TR4CT_DCCurrent_I16=crrcMvb->getSignedInt(0x481,6);
    TR4CT_EBVirtualValue_I16=crrcMvb->getSignedInt(0x481,8);
    TR4CT_TractionStatus_I16=crrcMvb->getSignedInt(0x481,10);
    TR4CT_MaxEBEffort_I16=crrcMvb->getSignedInt(0x481,14);
    TR4CT_BrkChopingActualRate_I16=crrcMvb->getSignedInt(0x481,16);
    TR4CT_MotorCurrent_I16=crrcMvb->getSignedInt(0x481,18);
    TR4CT_SystemFeedback_I16=crrcMvb->getSignedInt(0x481,20);
    TR4CT_MaxAvailbleEB_I16=crrcMvb->getSignedInt(0x481,22);

    TR4CT_AdjustActive_B1=crrcMvb->getBool(0x481,28,0);
    TR4CT_Backward_B1=crrcMvb->getBool(0x481,28,2);
    TR4CT_Forward_B1=crrcMvb->getBool(0x481,28,3);

    TR4CT_GroundingFlt_B1=crrcMvb->getBool(0x481,29,0);
    TR4CT_ChoppingPowerValid_B1=crrcMvb->getBool(0x481,29,2);
    TR4CT_MotorPowerValid_B1=crrcMvb->getBool(0x481,29,3);
    TR4CT_MaxEBValid_B1=crrcMvb->getBool(0x481,29,4);
    TR4CT_TrcSaftyEnable_B1=crrcMvb->getBool(0x481,29,5);
    TR4CT_DCCurrentValid_B1=crrcMvb->getBool(0x481,29,6);
    TR4CT_DCVoltageValid_B1=crrcMvb->getBool(0x481,29,7);

    TR4CT_LineVoltageOK_B1=crrcMvb->getBool(0x481,30,5);
    TR4CT_OutsideFanFullSpeed_B1=crrcMvb->getBool(0x481,30,6);
    TR4CT_OutsideFanHalfSpeed_B1=crrcMvb->getBool(0x481,30,7);

    TR4CT_IESContacterQ2_B1=crrcMvb->getBool(0x481,31,1);
    TR4CT_IESContacterQ1_B1=crrcMvb->getBool(0x481,31,2);
    TR4CT_SupplyMode_B1=crrcMvb->getBool(0x481,31,3);
    TR4CT_MotorCurrentValid_B1=crrcMvb->getBool(0x481,31,4);
    TR4CT_DivContacterClose_B1=crrcMvb->getBool(0x481,31,5);
    TR4CT_HSCBClose_B1=crrcMvb->getBool(0x481,31,7);

    TR4CT_DCULifeSignal2_I16=crrcMvb->getSignedInt(0x482,0);
    TR4CT_DCUMVersion_I16=crrcMvb->getSignedInt(0x482,2);
    TR4CT_TrcRadiatorTemp_I16=crrcMvb->getSignedInt(0x482,4);
    TR4CT_Motor1Temp_I16=crrcMvb->getSignedInt(0x482,6);
    TR4CT_Motor2Temp_I16=crrcMvb->getSignedInt(0x482,8);
    TR4CT_Motor3Temp_I16=crrcMvb->getSignedInt(0x482,10);
    TR4CT_Motor4Temp_I16=crrcMvb->getSignedInt(0x482,12);
    TR4CT_TrcAirTemp_I16=crrcMvb->getSignedInt(0x482,14);
    TR4CT_ChargingRTemp_I16=crrcMvb->getSignedInt(0x482,16);
    TR4CT_BrkRTemp_I16=crrcMvb->getSignedInt(0x482,18);
    TR4CT_Axis1Diameter_I16=crrcMvb->getSignedInt(0x482,20);
    TR4CT_Axis2Diameter_I16=crrcMvb->getSignedInt(0x482,22);
    TR4CT_Axis3Diameter_I16=crrcMvb->getSignedInt(0x482,24);
    TR4CT_Axis4Diameter_I16=crrcMvb->getSignedInt(0x482,26);

    TR4CT_WashingMode_B1=crrcMvb->getBool(0x482,29,1);
    TR4CT_NotZeroSpeed_B1=crrcMvb->getBool(0x482,29,3);
    TR4CT_MainControler3_B1=crrcMvb->getBool(0x482,29,5);
    TR4CT_MainControler2_B1=crrcMvb->getBool(0x482,29,6);
    TR4CT_MainControler1_B1=crrcMvb->getBool(0x482,29,7);

    TR4CT_Axis4DiameterValid_B1=crrcMvb->getBool(0x482,30,2);
    TR4CT_Axis3DiameterValid_B1=crrcMvb->getBool(0x482,30,3);
    TR4CT_Axis2DiameterValid_B1=crrcMvb->getBool(0x482,30,4);
    TR4CT_Axis1DiameterValid_B1=crrcMvb->getBool(0x482,30,5);
    TR4CT_BrkRTempValid_B1=crrcMvb->getBool(0x482,30,7);

    TR4CT_ChargingRTempValid_B1=crrcMvb->getBool(0x482,31,0);
    TR4CT_DCUInvAirTempValid_B1=crrcMvb->getBool(0x482,31,2);
    TR4CT_Motor4TempValid_B1=crrcMvb->getBool(0x482,31,3);
    TR4CT_Motor3TempValid_B1=crrcMvb->getBool(0x482,31,4);
    TR4CT_Motor2TempValid_B1=crrcMvb->getBool(0x482,31,5);
    TR4CT_Motor1TempValid_B1=crrcMvb->getBool(0x482,31,6);
    TR4CT_DCUInvRadiatorTempValid_B1=crrcMvb->getBool(0x482,31,7);

    TR4CT_TractionEnergy_I16=crrcMvb->getSignedInt(0x484,8);
    TR4CT_RebornEnergy_I16=crrcMvb->getSignedInt(0x484,10);
    TR4CT_MCMWorkingTime_I16=crrcMvb->getSignedInt(0x484,12);
    TR4CT_MotorWorkingDistance_I16=crrcMvb->getSignedInt(0x484,14);

    /****************************************************CCU-DCU(all)********************************************/
    CTTR_SysTimeYearDCUM_I8=crrcMvb->getUnsignedChar(0x800,0);
    CTTR_SysTimeMonthDCUM_I8=crrcMvb->getUnsignedChar(0x800,1);
    CTTR_SysTimeDayDCUM_I8=crrcMvb->getUnsignedChar(0x800,2);
    CTTR_SysTimeHourDCUM_I8=crrcMvb->getUnsignedChar(0x800,3);
    CTTR_SysTimeMinuteDCUM_I8=crrcMvb->getUnsignedChar(0x800,4);
    CTTR_SysTimeSecondDCUM_I8=crrcMvb->getUnsignedChar(0x800,5);

    /*****************************************************CCU-DCU1***********************************************/
    CTTR1_CCULifeSignal1_I16=crrcMvb->getSignedInt(0x498,0);
    CTTR1_TractionEffortPercent_I16=crrcMvb->getSignedInt(0x498,4);
    CTTR1_TrainSpeed_I16=crrcMvb->getSignedInt(0x498,6);
    CTTR1_RefAxisSpeed_I16=crrcMvb->getSignedInt(0x498,8);

    CTTR1_EACooperition_B1=crrcMvb->getBool(0x498,14,3);
    CTTR1_TrcEffortValid_B1=crrcMvb->getBool(0x498,14,5);

    CTTR1_RefAxisSpeedValid_B1=crrcMvb->getBool(0x498,15,1);
    CTTR1_Brake_B1=crrcMvb->getBool(0x498,15,2);
    CTTR1_Traction_B1=crrcMvb->getBool(0x498,15,3);
    CTTR1_SpeedValid_B1=crrcMvb->getBool(0x498,15,5);
    CTTR1_FastBrake_B1=crrcMvb->getBool(0x498,15,6);

    CTTR1_CCULifeSignal2_I16=crrcMvb->getSignedInt(0x499,0);
    CTTR1_LoadAdjustParameter_I16=crrcMvb->getSignedInt(0x499,2);
    CTTR1_SystemChoise_I16=crrcMvb->getSignedInt(0x499,12);

    CTTR1_LoadAdjustParaValid_B1=crrcMvb->getBool(0x499,28,1);
    CTTR1_Backward_B1=crrcMvb->getBool(0x499,28,7);

    CTTR1_Forward_B1=crrcMvb->getBool(0x499,29,0);
    CTTR1_EDCutOff_B1=crrcMvb->getBool(0x499,29,1);
    CTTR1_3PhaseActived_B1=crrcMvb->getBool(0x499,29,7);

    CTTR1_LineVoltageOn_B1=crrcMvb->getBool(0x499,31,6);
    CTTR1_HighVoltageEnable_B1=crrcMvb->getBool(0x499,31,7);

    CTTR1_CCULifeSignal3_I16=crrcMvb->getSignedInt(0x49A,0);
    CTTR1_RefDiameter_I16=crrcMvb->getSignedInt(0x49A,6);
    CTTR1_RefAxisNumber_I16=crrcMvb->getSignedInt(0x49A,8);
    CTTR1_EnvironmentTemp_I16=crrcMvb->getSignedInt(0x49A,14);
    CTTR1_SpeedLimit_I16=crrcMvb->getSignedInt(0x49A,16);

    CTTR1_CCUD2OK_B1=crrcMvb->getBool(0x49A,26,1);
    CTTR1_SpeedLimitValid_B1=crrcMvb->getBool(0x49A,26,2);
    CTTR1_WashingMode_B1=crrcMvb->getBool(0x49A,26,3);
    CTTR1_VersionEnable_B1=crrcMvb->getBool(0x49A,26,5);
    CTTR1_CounterClear_B1=crrcMvb->getBool(0x49A,26,7);

    CTTR1_RefDiameterValid_B1=crrcMvb->getBool(0x49A,27,0);
    CTTR1_CCUD1OK_B1=crrcMvb->getBool(0x49A,27,1);
    CTTR1_FltReset_B1=crrcMvb->getBool(0x49A,27,6);

    CTTR1_EBCutOff_B1=crrcMvb->getBool(0x49A,28,6);


    /*****************************************************CCU-DCU2***********************************************/
    CTTR2_CCULifeSignal1_I16=crrcMvb->getSignedInt(0x4C8,0);
    CTTR2_TractionEffortPercent_I16=crrcMvb->getSignedInt(0x4C8,4);
    CTTR2_TrainSpeed_I16=crrcMvb->getSignedInt(0x4C8,6);
    CTTR2_RefAxisSpeed_I16=crrcMvb->getSignedInt(0x4C8,8);

    CTTR2_EACooperition_B1=crrcMvb->getBool(0x4C8,14,3);
    CTTR2_TrcEffortValid_B1=crrcMvb->getBool(0x4C8,14,5);

    CTTR2_RefAxisSpeedValid_B1=crrcMvb->getBool(0x4C8,15,1);
    CTTR2_Brake_B1=crrcMvb->getBool(0x4C8,15,2);
    CTTR2_Traction_B1=crrcMvb->getBool(0x4C8,15,3);
    CTTR2_SpeedValid_B1=crrcMvb->getBool(0x4C8,15,5);
    CTTR2_FastBrake_B1=crrcMvb->getBool(0x4C8,15,6);

    CTTR2_CCULifeSignal2_I16=crrcMvb->getSignedInt(0x4C9,0);
    CTTR2_LoadAdjustParameter_I16=crrcMvb->getSignedInt(0x4C9,2);
    CTTR2_SystemChoise_I16=crrcMvb->getSignedInt(0x4C9,12);

    CTTR2_LoadAdjustParaValid_B1=crrcMvb->getBool(0x4C9,28,1);
    CTTR2_Backward_B1=crrcMvb->getBool(0x4C9,28,7);

    CTTR2_Forward_B1=crrcMvb->getBool(0x4C9,29,0);
    CTTR2_EDCutOff_B1=crrcMvb->getBool(0x4C9,29,1);
    CTTR2_3PhaseActived_B1=crrcMvb->getBool(0x4C9,29,7);

    CTTR2_LineVoltageOn_B1=crrcMvb->getBool(0x4C9,31,6);
    CTTR2_HighVoltageEnable_B1=crrcMvb->getBool(0x4C9,31,7);

    CTTR2_CCULifeSignal3_I16=crrcMvb->getSignedInt(0x4CA,0);
    CTTR2_RefDiameter_I16=crrcMvb->getSignedInt(0x4CA,6);
    CTTR2_RefAxisNumber_I16=crrcMvb->getSignedInt(0x4CA,8);
    CTTR2_EnvironmentTemp_I16=crrcMvb->getSignedInt(0x4CA,14);
    CTTR2_SpeedLimit_I16=crrcMvb->getSignedInt(0x4CA,16);

    CTTR2_CCUD2OK_B1=crrcMvb->getBool(0x4CA,26,1);
    CTTR2_SpeedLimitValid_B1=crrcMvb->getBool(0x4CA,26,2);
    CTTR2_WashingMode_B1=crrcMvb->getBool(0x4CA,26,3);
    CTTR2_VersionEnable_B1=crrcMvb->getBool(0x4CA,26,5);
    CTTR2_CounterClear_B1=crrcMvb->getBool(0x4CA,26,7);

    CTTR2_RefDiameterValid_B1=crrcMvb->getBool(0x4CA,27,0);
    CTTR2_CCUD1OK_B1=crrcMvb->getBool(0x4CA,27,1);
    CTTR2_FltReset_B1=crrcMvb->getBool(0x4CA,27,6);

    CTTR2_EBCutOff_B1=crrcMvb->getBool(0x4CA,28,6);

    /*****************************************************CCU-DCU3***********************************************/
    CTTR3_CCULifeSignal1_I16=crrcMvb->getSignedInt(0x4D8,0);
    CTTR3_TractionEffortPercent_I16=crrcMvb->getSignedInt(0x4D8,4);
    CTTR3_TrainSpeed_I16=crrcMvb->getSignedInt(0x4D8,6);
    CTTR3_RefAxisSpeed_I16=crrcMvb->getSignedInt(0x4D8,8);

    CTTR3_EACooperition_B1=crrcMvb->getBool(0x4D8,14,3);
    CTTR3_TrcEffortValid_B1=crrcMvb->getBool(0x4D8,14,5);

    CTTR3_RefAxisSpeedValid_B1=crrcMvb->getBool(0x4D8,15,1);
    CTTR3_Brake_B1=crrcMvb->getBool(0x4D8,15,2);
    CTTR3_Traction_B1=crrcMvb->getBool(0x4D8,15,3);
    CTTR3_SpeedValid_B1=crrcMvb->getBool(0x4D8,15,5);
    CTTR3_FastBrake_B1=crrcMvb->getBool(0x4D8,15,6);

    CTTR3_CCULifeSignal2_I16=crrcMvb->getSignedInt(0x4D9,0);
    CTTR3_LoadAdjustParameter_I16=crrcMvb->getSignedInt(0x4D9,2);
    CTTR3_SystemChoise_I16=crrcMvb->getSignedInt(0x4D9,12);

    CTTR3_LoadAdjustParaValid_B1=crrcMvb->getBool(0x4D9,28,1);
    CTTR3_Backward_B1=crrcMvb->getBool(0x4D9,28,7);

    CTTR3_Forward_B1=crrcMvb->getBool(0x4D9,29,0);
    CTTR3_EDCutOff_B1=crrcMvb->getBool(0x4D9,29,1);
    CTTR3_3PhaseActived_B1=crrcMvb->getBool(0x4D9,29,7);

    CTTR3_LineVoltageOn_B1=crrcMvb->getBool(0x4D9,31,6);
    CTTR3_HighVoltageEnable_B1=crrcMvb->getBool(0x4D9,31,7);

    CTTR3_CCULifeSignal3_I16=crrcMvb->getSignedInt(0x4DA,0);
    CTTR3_RefDiameter_I16=crrcMvb->getSignedInt(0x4DA,6);
    CTTR3_RefAxisNumber_I16=crrcMvb->getSignedInt(0x4DA,8);
    CTTR3_EnvironmentTemp_I16=crrcMvb->getSignedInt(0x4DA,14);
    CTTR3_SpeedLimit_I16=crrcMvb->getSignedInt(0x4DA,16);

    CTTR3_CCUD2OK_B1=crrcMvb->getBool(0x4DA,26,1);
    CTTR3_SpeedLimitValid_B1=crrcMvb->getBool(0x4DA,26,2);
    CTTR3_WashingMode_B1=crrcMvb->getBool(0x4DA,26,3);
    CTTR3_VersionEnable_B1=crrcMvb->getBool(0x4DA,26,5);
    CTTR3_CounterClear_B1=crrcMvb->getBool(0x4DA,26,7);

    CTTR3_RefDiameterValid_B1=crrcMvb->getBool(0x4DA,27,0);
    CTTR3_CCUD1OK_B1=crrcMvb->getBool(0x4DA,27,1);
    CTTR3_FltReset_B1=crrcMvb->getBool(0x4DA,27,6);

    CTTR3_EBCutOff_B1=crrcMvb->getBool(0x4DA,28,6);

    /*****************************************************CCU-DCU4***********************************************/
    CTTR4_CCULifeSignal1_I16=crrcMvb->getSignedInt(0x488,0);
    CTTR4_TractionEffortPercent_I16=crrcMvb->getSignedInt(0x488,4);
    CTTR4_TrainSpeed_I16=crrcMvb->getSignedInt(0x488,6);
    CTTR4_RefAxisSpeed_I16=crrcMvb->getSignedInt(0x488,8);

    CTTR4_EACooperition_B1=crrcMvb->getBool(0x488,14,3);
    CTTR4_TrcEffortValid_B1=crrcMvb->getBool(0x488,14,5);

    CTTR4_RefAxisSpeedValid_B1=crrcMvb->getBool(0x488,15,1);
    CTTR4_Brake_B1=crrcMvb->getBool(0x488,15,2);
    CTTR4_Traction_B1=crrcMvb->getBool(0x488,15,3);
    CTTR4_SpeedValid_B1=crrcMvb->getBool(0x488,15,5);
    CTTR4_FastBrake_B1=crrcMvb->getBool(0x488,15,6);

    CTTR4_CCULifeSignal2_I16=crrcMvb->getSignedInt(0x489,0);
    CTTR4_LoadAdjustParameter_I16=crrcMvb->getSignedInt(0x489,2);
    CTTR4_SystemChoise_I16=crrcMvb->getSignedInt(0x489,12);

    CTTR4_LoadAdjustParaValid_B1=crrcMvb->getBool(0x489,28,1);
    CTTR4_Backward_B1=crrcMvb->getBool(0x489,28,7);

    CTTR4_Forward_B1=crrcMvb->getBool(0x489,29,0);
    CTTR4_EDCutOff_B1=crrcMvb->getBool(0x489,29,1);
    CTTR4_3PhaseActived_B1=crrcMvb->getBool(0x489,29,7);

    CTTR4_LineVoltageOn_B1=crrcMvb->getBool(0x489,31,6);
    CTTR4_HighVoltageEnable_B1=crrcMvb->getBool(0x489,31,7);

    CTTR4_CCULifeSignal3_I16=crrcMvb->getSignedInt(0x48A,0);
    CTTR4_RefDiameter_I16=crrcMvb->getSignedInt(0x48A,6);
    CTTR4_RefAxisNumber_I16=crrcMvb->getSignedInt(0x48A,8);
    CTTR4_EnvironmentTemp_I16=crrcMvb->getSignedInt(0x48A,14);
    CTTR4_SpeedLimit_I16=crrcMvb->getSignedInt(0x48A,16);

    CTTR4_CCUD2OK_B1=crrcMvb->getBool(0x48A,26,1);
    CTTR4_SpeedLimitValid_B1=crrcMvb->getBool(0x48A,26,2);
    CTTR4_WashingMode_B1=crrcMvb->getBool(0x48A,26,3);
    CTTR4_VersionEnable_B1=crrcMvb->getBool(0x48A,26,5);
    CTTR4_CounterClear_B1=crrcMvb->getBool(0x48A,26,7);

    CTTR4_RefDiameterValid_B1=crrcMvb->getBool(0x48A,27,0);
    CTTR4_CCUD1OK_B1=crrcMvb->getBool(0x48A,27,1);
    CTTR4_FltReset_B1=crrcMvb->getBool(0x48A,27,6);

    CTTR4_EBCutOff_B1=crrcMvb->getBool(0x48A,28,6);

    /*******************************************************CCU-D1→CCU************************************************/
    CD1CT_DCUMLifeSignal_I16=crrcMvb->getSignedInt(0x818,0);
    CD1CT_SoftWareVersion1_I16=crrcMvb->getSignedInt(0x818,2);
    CD1CT_SoftWareVersion2_I16=crrcMvb->getSignedInt(0x818,4);
    CD1CT_SoftWareVersion3_I16=crrcMvb->getSignedInt(0x818,6);
    CD1CT_SoftWareVersion4_I16=crrcMvb->getSignedInt(0x818,8);


    CD1CT_CCUDLowVoltage_B1=crrcMvb->getBool(0x818,15,6);
    CD1CT_ODBSOK_B1=crrcMvb->getBool(0x818,15,7);

    /**********************************************************CCU-D2-CCU**********************************************/
    CD2CT_DCUMLifeSignal_I16=crrcMvb->getSignedInt(0x828,0);
    CD2CT_SoftWareVersion1_I16=crrcMvb->getSignedInt(0x828,2);
    CD2CT_SoftWareVersion2_I16=crrcMvb->getSignedInt(0x828,4);
    CD2CT_SoftWareVersion3_I16=crrcMvb->getSignedInt(0x828,6);
    CD2CT_SoftWareVersion4_I16=crrcMvb->getSignedInt(0x828,8);


    CD2CT_CCUDLowVoltage_B1=crrcMvb->getBool(0x828,15,6);
    CD2CT_ODBSOK_B1=crrcMvb->getBool(0x828,15,7);

    /*********************************************************CCU→CCU-D************************************************/
    CTCD_CCULifeSignal_I16=crrcMvb->getSignedInt(0x810,0);
    CTCD_TrainNumber_I16=crrcMvb->getSignedInt(0x810,2);

    /*********************************************************BCU1→CCU**************************************************/
    BR1CT_MassTc12Bog1_I16=crrcMvb->getSignedInt(0x610,2);
    BR1CT_MassTc12Bog2_I16=crrcMvb->getSignedInt(0x610,4);
    BR1CT_MassMp12Bog1_I16=crrcMvb->getSignedInt(0x610,6);
    BR1CT_MassMp12Bog2_I16=crrcMvb->getSignedInt(0x610,8);
    BR1CT_MassM12Bog1_I16=crrcMvb->getSignedInt(0x610,10);
    BR1CT_MassM12Bog2_I16=crrcMvb->getSignedInt(0x610,12);

    BR1CT_ASPTc12Bog1_I16=crrcMvb->getSignedInt(0x610,16);
    BR1CT_ASPTc12Bog2_I16=crrcMvb->getSignedInt(0x610,18);
    BR1CT_ASPMp12Bog1_I16=crrcMvb->getSignedInt(0x610,20);
    BR1CT_ASPMp12Bog2_I16=crrcMvb->getSignedInt(0x610,22);
    BR1CT_ASPM12Bog1_I16=crrcMvb->getSignedInt(0x610,24);
    BR1CT_ASPM12Bog2_I16=crrcMvb->getSignedInt(0x610,26);

    BR1CT_MassValidTc12Bog1_B1=crrcMvb->getBool(0x610,30,0);
    BR1CT_MassValidTc12Bog2_B1=crrcMvb->getBool(0x610,30,1);
    BR1CT_MassValidMp12Bog1_B1=crrcMvb->getBool(0x610,30,2);
    BR1CT_MassValidMp12Bog2_B1=crrcMvb->getBool(0x610,30,3);
    BR1CT_MassValidM12Bog1_B1=crrcMvb->getBool(0x610,30,4);
    BR1CT_MassValidM12Bog2_B1=crrcMvb->getBool(0x610,30,5);

    BR1CT_ASPValidTc12Bog1_B1=crrcMvb->getBool(0x610,31,0);
    BR1CT_ASPValidTc12Bog2_B1=crrcMvb->getBool(0x610,31,1);
    BR1CT_ASPValidMp12Bog1_B1=crrcMvb->getBool(0x610,31,2);
    BR1CT_ASPValidMp12Bog2_B1=crrcMvb->getBool(0x610,31,3);
    BR1CT_ASPValidM12Bog1_B1=crrcMvb->getBool(0x610,31,4);
    BR1CT_ASPValidM12Bog2_B1=crrcMvb->getBool(0x610,31,5);

    BR1CT_SpeedTc12Ax1_I16=crrcMvb->getSignedInt(0x611,0);
    BR1CT_SpeedTc12Ax2_I16=crrcMvb->getSignedInt(0x611,2);
    BR1CT_SpeedTc12Ax3_I16=crrcMvb->getSignedInt(0x611,4);
    BR1CT_SpeedTC12Ax4_I16=crrcMvb->getSignedInt(0x611,6);
    BR1CT_SpeedMp12Ax1_I16=crrcMvb->getSignedInt(0x611,8);
    BR1CT_SpeedMp12Ax2_I16=crrcMvb->getSignedInt(0x611,10);
    BR1CT_SpeedMp12Ax3_I16=crrcMvb->getSignedInt(0x611,12);
    BR1CT_SpeedMp12Ax4_I16=crrcMvb->getSignedInt(0x611,14);
    BR1CT_SpeedM12Ax1_I16=crrcMvb->getSignedInt(0x611,16);
    BR1CT_SpeedM12Ax2_I16=crrcMvb->getSignedInt(0x611,18);
    BR1CT_SpeedM12Ax3_I16=crrcMvb->getSignedInt(0x611,20);
    BR1CT_SpeedM12Ax4_I16=crrcMvb->getSignedInt(0x611,22);
    BR1CT_MRP_TC_I16=crrcMvb->getSignedInt(0x611,24);
    BR1CT_MRP_MP_I16=crrcMvb->getSignedInt(0x611,26);
    BR1CT_MRP_M_I16=crrcMvb->getSignedInt(0x611,28);

    BR1CT_SpeedValTc12Ax1_B1=crrcMvb->getBool(0x611,30,0);
    BR1CT_SpeedValTc12Ax2_B1=crrcMvb->getBool(0x611,30,1);
    BR1CT_SpeedValTc12Ax3_B1=crrcMvb->getBool(0x611,30,2);
    BR1CT_SpeedValTc12Ax4_B1=crrcMvb->getBool(0x611,30,3);
    BR1CT_SpeedValMp12Ax1_B1=crrcMvb->getBool(0x611,30,4);
    BR1CT_SpeedValMp12Ax2_B1=crrcMvb->getBool(0x611,30,5);
    BR1CT_SpeedValMp12Ax3_B1=crrcMvb->getBool(0x611,30,6);
    BR1CT_SpeedValMp12Ax4_B1=crrcMvb->getBool(0x611,30,7);

    BR1CT_SpeedValM12Ax1_B1=crrcMvb->getBool(0x611,31,0);
    BR1CT_SpeedValM12Ax2_B1=crrcMvb->getBool(0x611,31,1);
    BR1CT_SpeedValM12Ax3_B1=crrcMvb->getBool(0x611,31,2);
    BR1CT_SpeedValM12Ax4_B1=crrcMvb->getBool(0x611,31,3);
    BR1CT_MRPValTC_B1=crrcMvb->getBool(0x611,31,4);
    BR1CT_MRPValMP_B1=crrcMvb->getBool(0x611,31,5);
    BR1CT_MRPValM_B1=crrcMvb->getBool(0x611,31,6);

    BR1CT_LifeSgn_I16=crrcMvb->getSignedInt(0x612,0);
    BR1CT_EPForceTc12bog1_I16=crrcMvb->getSignedInt(0x612,2);
    BR1CT_EPForceTc12bog2_I16=crrcMvb->getSignedInt(0x612,4);
    BR1CT_EPForceMp12bog1_I16=crrcMvb->getSignedInt(0x612,6);
    BR1CT_EPForceMp12bog2_I16=crrcMvb->getSignedInt(0x612,8);
    BR1CT_EPForceM12bog1_I16=crrcMvb->getSignedInt(0x612,10);
    BR1CT_EPForceM12bog2_I16=crrcMvb->getSignedInt(0x612,12);

    BR1CT_GWSWVerBH_U8=crrcMvb->getUnsignedChar(0x612,14);
    BR1CT_GWSWVerBL_U8=crrcMvb->getUnsignedChar(0x612,14);///////////////////////shu ju liu cuo wu

    BR1CT_DiagOKTc12_Bogie1_B1=crrcMvb->getBool(0x612,15,0);
    BR1CT_DiagOKTc12_Bogie2_B1=crrcMvb->getBool(0x612,15,1);
    BR1CT_DiagOKMp12_Bogie1_B1=crrcMvb->getBool(0x612,15,2);
    BR1CT_DiagOKMp12_Bogie2_B1=crrcMvb->getBool(0x612,15,3);
    BR1CT_DiagOKM12_Bogie1_B1=crrcMvb->getBool(0x612,15,4);
    BR1CT_DiagOKM12_Bogie2_B1=crrcMvb->getBool(0x612,15,5);
    BR1CT_CanApplSBTc12Bog1_B1=crrcMvb->getBool(0x612,15,6);
    BR1CT_CanApplSBTc12Bog2_B1=crrcMvb->getBool(0x612,15,7);

    BR1CT_CanApplSBMp12Bog1_B1=crrcMvb->getBool(0x612,16,0);
    BR1CT_CanApplSBMp12Bog2_B1=crrcMvb->getBool(0x612,16,1);
    BR1CT_CanApplSBM12Bog1_B1=crrcMvb->getBool(0x612,16,2);
    BR1CT_CanApplSBM12Bog2_B1=crrcMvb->getBool(0x612,16,3);
    BR1CT_BrakeAppliedTC12Bog1_B1=crrcMvb->getBool(0x612,16,4);
    BR1CT_BrakeAppliedTC12Bog2_B1=crrcMvb->getBool(0x612,16,5);
    BR1CT_BrakeAppliedMp12Bog1_B1=crrcMvb->getBool(0x612,16,6);
    BR1CT_BrakeAppliedMp12Bog2_B1=crrcMvb->getBool(0x612,16,7);

    BR1CT_BrakeAppliedM12Bog1_B1=crrcMvb->getBool(0x612,17,0);
    BR1CT_BrakeAppliedM12Bog2_B1=crrcMvb->getBool(0x612,17,1);
    BR1CT_BrakeReleasedTC12Bog1_B1=crrcMvb->getBool(0x612,17,2);
    BR1CT_BrakeReleasedTC12Bog2_B1=crrcMvb->getBool(0x612,17,3);
    BR1CT_BrakeReleasedMp12Bog1_B1=crrcMvb->getBool(0x612,17,4);
    BR1CT_BrakeReleasedMp12Bog2_B1=crrcMvb->getBool(0x612,17,5);
    BR1CT_BrakeReleasedM12Bog1_B1=crrcMvb->getBool(0x612,17,6);
    BR1CT_BrakeReleasedM12Bog2_B1=crrcMvb->getBool(0x612,17,7);

    BR1CT_IsolTc12Bog1_B1=crrcMvb->getBool(0x612,18,0);
    BR1CT_IsolTc12Bog2_B1=crrcMvb->getBool(0x612,18,1);
    BR1CT_IsolMp12Bog1_B1=crrcMvb->getBool(0x612,18,2);
    BR1CT_IsolMp12Bog2_B1=crrcMvb->getBool(0x612,18,3);
    BR1CT_IsolM12Bog1_B1=crrcMvb->getBool(0x612,18,4);
    BR1CT_IsolM12Bog2_B1=crrcMvb->getBool(0x612,18,5);
    BR1CT_WSPTc12Bog1_B1=crrcMvb->getBool(0x612,18,6);
    BR1CT_WSPTc12Bog2_B1=crrcMvb->getBool(0x612,18,7);

    BR1CT_WSPMP12Bog1_B1=crrcMvb->getBool(0x612,19,0);
    BR1CT_WSPMP12Bog2_B1=crrcMvb->getBool(0x612,19,1);
    BR1CT_WSPM12Bog1_B1=crrcMvb->getBool(0x612,19,2);
    BR1CT_WSPM12Bog2_B1=crrcMvb->getBool(0x612,19,3);
    BR1CT_EBActiTc12Bog1_B1=crrcMvb->getBool(0x612,19,4);
    BR1CT_EBActiTc12Bog2_B1=crrcMvb->getBool(0x612,19,5);
    BR1CT_EBActiMp12Bog1_B1=crrcMvb->getBool(0x612,19,6);
    BR1CT_EBActiMp12Bog2_B1=crrcMvb->getBool(0x612,19,7);

    BR1CT_EBActiM12Bog1_B1=crrcMvb->getBool(0x612,20,0);
    BR1CT_EBActiM12Bog2_B1=crrcMvb->getBool(0x612,20,1);
    BR1CT_EBAvailTc12Bog1_B1=crrcMvb->getBool(0x612,20,2);
    BR1CT_EBAvailTc12Bog2_B1=crrcMvb->getBool(0x612,20,3);
    BR1CT_EBAvailMp12Bog1_B1=crrcMvb->getBool(0x612,20,4);
    BR1CT_EBAvailMp12Bog2_B1=crrcMvb->getBool(0x612,20,5);
    BR1CT_EBAvailM12Bog1_B1=crrcMvb->getBool(0x612,20,6);
    BR1CT_EBAvailM12Bog2_B1=crrcMvb->getBool(0x612,20,7);

    BR1CT_PBReleasedTc12_B1=crrcMvb->getBool(0x612,21,0);
    BR1CT_PBReleasedMp12_B1=crrcMvb->getBool(0x612,21,1);
    BR1CT_PBReleasedM12_B1=crrcMvb->getBool(0x612,21,2);
    BR1CT_MGW_B1=crrcMvb->getBool(0x612,21,3);
    BR1CT_DISEBMp12_B1=crrcMvb->getBool(0x612,21,4);
    BR1CT_DISEBM12_B1=crrcMvb->getBool(0x612,21,5);
    BR1CT_CAN1_B1=crrcMvb->getBool(0x612,21,6);
    BR1CT_AllASPReady_B1=crrcMvb->getBool(0x612,21,7);

    BR1CT_SelfTestConT_B1=crrcMvb->getBool(0x612,22,0);
    BR1CT_RuningSelfTest_B1=crrcMvb->getBool(0x612,22,1);
    BR1CT_SelfTestOK_B1=crrcMvb->getBool(0x612,22,2);
    BR1CT_SelfTestFailed_B1=crrcMvb->getBool(0x612,22,3);
    BR1CT_LastSelfTestAborted_B1=crrcMvb->getBool(0x612,22,4);
    BR1CT_DiameterInput_ready_B1=crrcMvb->getBool(0x612,22,5);
    BR1CT_DiameterInput_status_B1=crrcMvb->getBool(0x612,22,6);
    BR1CT_EBActiInCAN_B1=crrcMvb->getBool(0x612,22,7);

    BR1CT_BrakeActInCAN_B1=crrcMvb->getBool(0x612,23,0);
    BR1CT_DriveActInCAN_B1=crrcMvb->getBool(0x612,23,1);
    BR1CT_FastBrakeActInCAN_B1=crrcMvb->getBool(0x612,23,2);
    BR1CT_EDM_B1=crrcMvb->getBool(0x612,23,3);
    BR1CT_ZeroSpeed_B1=crrcMvb->getBool(0x612,23,4);
    BR1CT_HBBrakeApply_B1=crrcMvb->getBool(0x612,23,5);
    BR1CT_30kphExceed_B1=crrcMvb->getBool(0x612,23,6);
    BR1CT_80kphExceed_B1=crrcMvb->getBool(0x612,23,7);

    BR1CT_MVBOK_B1=crrcMvb->getBool(0x612,24,0);

    BR1CT_BSRTc12Bog1_I16=crrcMvb->getSignedInt(0x613,0);
    BR1CT_BSRTc12Bog2_I16=crrcMvb->getSignedInt(0x613,2);
    BR1CT_BSRMp12Bog1_I16=crrcMvb->getSignedInt(0x613,4);
    BR1CT_BSRMp12Bog2_I16=crrcMvb->getSignedInt(0x613,6);
    BR1CT_BSRM12Bog1_I16=crrcMvb->getSignedInt(0x613,8);
    BR1CT_BSRM12Bog2_I16=crrcMvb->getSignedInt(0x613,10);
    BR1CT_BCPTc12Bog1_I16=crrcMvb->getSignedInt(0x613,12);
    BR1CT_BCPTc12Bog2_I16=crrcMvb->getSignedInt(0x613,14);
    BR1CT_BCPMp12Bog1_I16=crrcMvb->getSignedInt(0x613,16);
    BR1CT_BCPMp12Bog2_I16=crrcMvb->getSignedInt(0x613,18);
    BR1CT_BCPM12Bog1_I16=crrcMvb->getSignedInt(0x613,20);
    BR1CT_BCPM12Bog2_I16=crrcMvb->getSignedInt(0x613,22);
    BR1CT_PBPressureTc_I16=crrcMvb->getSignedInt(0x613,24);
    BR1CT_PBPressureMP_I16=crrcMvb->getSignedInt(0x613,26);
    BR1CT_PBPressureM_I16=crrcMvb->getSignedInt(0x613,28);

    BR1CT_BSRBog1Valid_Tc12_B1=crrcMvb->getBool(0x613,30,0);
    BR1CT_BSRBog2Valid_Tc12_B1=crrcMvb->getBool(0x613,30,1);
    BR1CT_BSRBog1Valid_Mp12_B1=crrcMvb->getBool(0x613,30,2);
    BR1CT_BSRBog2Valid_Mp12_B1=crrcMvb->getBool(0x613,30,3);
    BR1CT_BSRBog1Valid_M12_B1=crrcMvb->getBool(0x613,30,4);
    BR1CT_BSRBog2Valid_M12_B1=crrcMvb->getBool(0x613,30,5);
    BR1CT_BCPBog1Valid_Tc12_B1=crrcMvb->getBool(0x613,30,6);
    BR1CT_BCPBog2Valid_Tc12_B1=crrcMvb->getBool(0x613,30,7);

    BR1CT_BCPBog1Valid_Mp12_B1=crrcMvb->getBool(0x613,31,0);
    BR1CT_BCPBog2Valid_Mp12_B1=crrcMvb->getBool(0x613,31,1);
    BR1CT_BCPBog1Valid_M12_B1=crrcMvb->getBool(0x613,31,2);
    BR1CT_BCPBog2Valid_M12_B1=crrcMvb->getBool(0x613,31,3);
    BR1CT_PBPressValid_Tc12_B1=crrcMvb->getBool(0x613,31,4);
    BR1CT_PBPressValid_Mp12_B1=crrcMvb->getBool(0x613,31,5);
    BR1CT_PBPressValid_M12_B1=crrcMvb->getBool(0x613,31,6);

//    BR1CT_SpedSenrFauTc12Ax1_B1=crrcMvb->getBool(0x614,0,0);
//    BR1CT_SpedSenrFauTc12Ax2_B1=crrcMvb->getBool(0x614,0,1);
//    BR1CT_SpedSenrFauTc12Ax3_B1=crrcMvb->getBool(0x614,0,2);
//    BR1CT_SpedSenrFauTc12Ax4_B1=crrcMvb->getBool(0x614,0,3);
//    BR1CT_SpedSenrFauMp12Ax1_B1=crrcMvb->getBool(0x614,0,4);
//    BR1CT_SpedSenrFauMp12Ax2_B1=crrcMvb->getBool(0x614,0,5);
//    BR1CT_SpedSenrFauMp12Ax3_B1=crrcMvb->getBool(0x614,0,6);
//    BR1CT_SpedSenrFauMp12Ax4_B1=crrcMvb->getBool(0x614,0,7);

//    BR1CT_SpedSenrFauM12Ax1_B1=crrcMvb->getBool(0x614,1,0);
//    BR1CT_SpedSenrFauM12Ax2_B1=crrcMvb->getBool(0x614,1,1);
//    BR1CT_SpedSenrFauM12Ax3_B1=crrcMvb->getBool(0x614,1,2);
//    BR1CT_SpedSenrFauM12Ax4_B1=crrcMvb->getBool(0x614,1,3);

//    BR1CT_BSRLowTc12Bog1_B1=crrcMvb->getBool(0x614,2,0);
//    BR1CT_BSRLowTc12Bog2_B1=crrcMvb->getBool(0x614,2,1);
//    BR1CT_BSRLowMp12Bog1_B1=crrcMvb->getBool(0x614,2,2);
//    BR1CT_BSRLowMp12Bog2_B1=crrcMvb->getBool(0x614,2,3);
//    BR1CT_BSRLowM12Bog1_B1=crrcMvb->getBool(0x614,2,4);
//    BR1CT_BSRLowM12Bog2_B1=crrcMvb->getBool(0x614,2,5);

//    BR1CT_ASPOORTc12Bog1_B1=crrcMvb->getBool(0x614,3,0);
//    BR1CT_ASPOORTc12Bog2_B1=crrcMvb->getBool(0x614,3,1);
//    BR1CT_ASPOORMp12Bog1_B1=crrcMvb->getBool(0x614,3,2);
//    BR1CT_ASPOORMp12Bog2_B1=crrcMvb->getBool(0x614,3,3);
//    BR1CT_ASPOORM12Bog1_B1=crrcMvb->getBool(0x614,3,4);
//    BR1CT_ASPOORM12Bog2_B1=crrcMvb->getBool(0x614,3,5);

//    BR1CT_BrNotRelTc12Bog1_B1=crrcMvb->getBool(0x614,4,0);
//    BR1CT_BrNotRelTc12Bog2_B1=crrcMvb->getBool(0x614,4,1);
//    BR1CT_BrNotRelMp12Bog1_B1=crrcMvb->getBool(0x614,4,2);
//    BR1CT_BrNotRelMp12Bog2_B1=crrcMvb->getBool(0x614,4,3);
//    BR1CT_BrNotRelM12Bog1_B1=crrcMvb->getBool(0x614,4,4);
//    BR1CT_BrNotRelM12Bog2_B1=crrcMvb->getBool(0x614,4,5);

//    BR1CT_BCPLowTc12_B1=crrcMvb->getBool(0x614,5,0);
//    BR1CT_BCPLowMp12_B1=crrcMvb->getBool(0x614,5,1);
//    BR1CT_BCPLowM12_B1=crrcMvb->getBool(0x614,5,2);
//    BR1CT_SelfTest24h_B1=crrcMvb->getBool(0x614,5,3);
//    BR1CT_SelfTest26h_B1=crrcMvb->getBool(0x614,5,4);
//    BR1CT_MajorEvent_B1=crrcMvb->getBool(0x614,5,5);
//    BR1CT_MediumEvent_B1=crrcMvb->getBool(0x614,5,6);
//    BR1CT_MinorEvent_B1=crrcMvb->getBool(0x614,5,7);

//    BR1CT_Can1NotOK_B1=crrcMvb->getBool(0x614,6,0);
//    BR1CT_Can2NotOK_B1=crrcMvb->getBool(0x614,6,1);
//    BR1CT_AtLeastOnePBNotReleasedInCAN_B1=crrcMvb->getBool(0x614,6,2);
//    BR1CT_CommandInconsistentInCAN_B1=crrcMvb->getBool(0x614,6,3);

//    BR1CT_SeriousFaultTCBog1_B1=crrcMvb->getBool(0x614,7,0);
//    BR1CT_SeriousFaultTCBog2_B1=crrcMvb->getBool(0x614,7,1);
//    BR1CT_SeriousFaultMpBog1_B1=crrcMvb->getBool(0x614,7,2);
//    BR1CT_SeriousFaultMpBog2_B1=crrcMvb->getBool(0x614,7,3);
//    BR1CT_SeriousFaultMBog1_B1=crrcMvb->getBool(0x614,7,4);
//    BR1CT_SeriousFaultMBog2_B1=crrcMvb->getBool(0x614,7,5);

//    BR1CT_SlightFaultTCBog1_B1=crrcMvb->getBool(0x614,8,0);
//    BR1CT_SlightFaultTCBog2_B1=crrcMvb->getBool(0x614,8,1);
//    BR1CT_SlightFaultMpBog1_B1=crrcMvb->getBool(0x614,8,2);
//    BR1CT_SlightFaultMpBog2_B1=crrcMvb->getBool(0x614,8,3);
//    BR1CT_SlightFaultMBog1_B1=crrcMvb->getBool(0x614,8,4);
//    BR1CT_SlightFaultMBog2_B1=crrcMvb->getBool(0x614,8,5);

//    BR1CT_CodingFaultTCBog1_B1=crrcMvb->getBool(0x614,9,0);
//    BR1CT_CodingFaultTCBog2_B1=crrcMvb->getBool(0x614,9,1);
//    BR1CT_CodingFaultMpBog1_B1=crrcMvb->getBool(0x614,9,2);
//    BR1CT_CodingFaultMpBog2_B1=crrcMvb->getBool(0x614,9,3);
//    BR1CT_CodingFaultMBog1_B1=crrcMvb->getBool(0x614,9,4);
//    BR1CT_CodingFaultMBog2_B1=crrcMvb->getBool(0x614,9,5);

//    BR1CT_WSPTripTc11_B1=crrcMvb->getBool(0x614,10,0);
//    BR1CT_WSPTripTc12_B1=crrcMvb->getBool(0x614,10,1);
//    BR1CT_WSPTripTc13_B1=crrcMvb->getBool(0x614,10,2);
//    BR1CT_WSPTripTc14_B1=crrcMvb->getBool(0x614,10,3);
//    BR1CT_WSPTripMp11_B1=crrcMvb->getBool(0x614,10,4);
//    BR1CT_WSPTripMp12_B1=crrcMvb->getBool(0x614,10,5);
//    BR1CT_WSPTripMp13_B1=crrcMvb->getBool(0x614,10,6);
//    BR1CT_WSPTripMp14_B1=crrcMvb->getBool(0x614,10,7);

//    BR1CT_WSPTripM11_B1=crrcMvb->getBool(0x614,11,0);
//    BR1CT_WSPTripM12_B1=crrcMvb->getBool(0x614,11,1);
//    BR1CT_WSPTripM13_B1=crrcMvb->getBool(0x614,11,2);
//    BR1CT_WSPTripM14_B1=crrcMvb->getBool(0x614,11,3);



    /*********************************************************BCU2→CCU**************************************************/
    BR2CT_MassTc12Bog1_I16=crrcMvb->getSignedInt(0x620,2);
    BR2CT_MassTc12Bog2_I16=crrcMvb->getSignedInt(0x620,4);
    BR2CT_MassMp12Bog1_I16=crrcMvb->getSignedInt(0x620,6);
    BR2CT_MassMp12Bog2_I16=crrcMvb->getSignedInt(0x620,8);
    BR2CT_MassM12Bog1_I16=crrcMvb->getSignedInt(0x620,10);
    BR2CT_MassM12Bog2_I16=crrcMvb->getSignedInt(0x620,12);

    BR2CT_ASPTc12Bog1_I16=crrcMvb->getSignedInt(0x620,16);
    BR2CT_ASPTc12Bog2_I16=crrcMvb->getSignedInt(0x620,18);
    BR2CT_ASPMp12Bog1_I16=crrcMvb->getSignedInt(0x620,20);
    BR2CT_ASPMp12Bog2_I16=crrcMvb->getSignedInt(0x620,22);
    BR2CT_ASPM12Bog1_I16=crrcMvb->getSignedInt(0x620,24);
    BR2CT_ASPM12Bog2_I16=crrcMvb->getSignedInt(0x620,26);

    BR2CT_MassValidTc12Bog1_B1=crrcMvb->getBool(0x620,30,0);
    BR2CT_MassValidTc12Bog2_B1=crrcMvb->getBool(0x620,30,1);
    BR2CT_MassValidMp12Bog1_B1=crrcMvb->getBool(0x620,30,2);
    BR2CT_MassValidMp12Bog2_B1=crrcMvb->getBool(0x620,30,3);
    BR2CT_MassValidM12Bog1_B1=crrcMvb->getBool(0x620,30,4);
    BR2CT_MassValidM12Bog2_B1=crrcMvb->getBool(0x620,30,5);

    BR2CT_ASPValidTc12Bog1_B1=crrcMvb->getBool(0x620,31,0);
    BR2CT_ASPValidTc12Bog2_B1=crrcMvb->getBool(0x620,31,1);
    BR2CT_ASPValidMp12Bog1_B1=crrcMvb->getBool(0x620,31,2);
    BR2CT_ASPValidMp12Bog2_B1=crrcMvb->getBool(0x620,31,3);
    BR2CT_ASPValidM12Bog1_B1=crrcMvb->getBool(0x620,31,4);
    BR2CT_ASPValidM12Bog2_B1=crrcMvb->getBool(0x620,31,5);

    BR2CT_SpeedTc12Ax1_I16=crrcMvb->getSignedInt(0x621,0);
    BR2CT_SpeedTc12Ax2_I16=crrcMvb->getSignedInt(0x621,2);
    BR2CT_SpeedTc12Ax3_I16=crrcMvb->getSignedInt(0x621,4);
    BR2CT_SpeedTC12Ax4_I16=crrcMvb->getSignedInt(0x621,6);
    BR2CT_SpeedMp12Ax1_I16=crrcMvb->getSignedInt(0x621,8);
    BR2CT_SpeedMp12Ax2_I16=crrcMvb->getSignedInt(0x621,10);
    BR2CT_SpeedMp12Ax3_I16=crrcMvb->getSignedInt(0x621,12);
    BR2CT_SpeedMp12Ax4_I16=crrcMvb->getSignedInt(0x621,14);
    BR2CT_SpeedM12Ax1_I16=crrcMvb->getSignedInt(0x621,16);
    BR2CT_SpeedM12Ax2_I16=crrcMvb->getSignedInt(0x621,18);
    BR2CT_SpeedM12Ax3_I16=crrcMvb->getSignedInt(0x621,20);
    BR2CT_SpeedM12Ax4_I16=crrcMvb->getSignedInt(0x621,22);
    BR2CT_MRP_TC_I16=crrcMvb->getSignedInt(0x621,24);
    BR2CT_MRP_MP_I16=crrcMvb->getSignedInt(0x621,26);
    BR2CT_MRP_M_I16=crrcMvb->getSignedInt(0x621,28);

    BR2CT_SpeedValTc12Ax1_B1=crrcMvb->getBool(0x621,30,0);
    BR2CT_SpeedValTc12Ax2_B1=crrcMvb->getBool(0x621,30,1);
    BR2CT_SpeedValTc12Ax3_B1=crrcMvb->getBool(0x621,30,2);
    BR2CT_SpeedValTc12Ax4_B1=crrcMvb->getBool(0x621,30,3);
    BR2CT_SpeedValMp12Ax1_B1=crrcMvb->getBool(0x621,30,4);
    BR2CT_SpeedValMp12Ax2_B1=crrcMvb->getBool(0x621,30,5);
    BR2CT_SpeedValMp12Ax3_B1=crrcMvb->getBool(0x621,30,6);
    BR2CT_SpeedValMp12Ax4_B1=crrcMvb->getBool(0x621,30,7);

    BR2CT_SpeedValM12Ax1_B1=crrcMvb->getBool(0x621,31,0);
    BR2CT_SpeedValM12Ax2_B1=crrcMvb->getBool(0x621,31,1);
    BR2CT_SpeedValM12Ax3_B1=crrcMvb->getBool(0x621,31,2);
    BR2CT_SpeedValM12Ax4_B1=crrcMvb->getBool(0x621,31,3);
    BR2CT_MRPValTC_B1=crrcMvb->getBool(0x621,31,4);
    BR2CT_MRPValMP_B1=crrcMvb->getBool(0x621,31,5);
    BR2CT_MRPValM_B1=crrcMvb->getBool(0x621,31,6);

    BR2CT_LifeSgn_I16=crrcMvb->getSignedInt(0x622,0);
    BR2CT_EPForceTc12bog1_I16=crrcMvb->getSignedInt(0x622,2);
    BR2CT_EPForceTc12bog2_I16=crrcMvb->getSignedInt(0x622,4);
    BR2CT_EPForceMp12bog1_I16=crrcMvb->getSignedInt(0x622,6);
    BR2CT_EPForceMp12bog2_I16=crrcMvb->getSignedInt(0x622,8);
    BR2CT_EPForceM12bog1_I16=crrcMvb->getSignedInt(0x622,10);
    BR2CT_EPForceM12bog2_I16=crrcMvb->getSignedInt(0x622,12);

    BR2CT_GWSWVerBH_U8=crrcMvb->getUnsignedChar(0x622,14);
    BR2CT_GWSWVerBL_U8=crrcMvb->getUnsignedChar(0x622,14);///////////////////////shu ju liu cuo wu

    BR2CT_DiagOKTc12_Bogie1_B1=crrcMvb->getBool(0x622,15,0);
    BR2CT_DiagOKTc12_Bogie2_B1=crrcMvb->getBool(0x622,15,1);
    BR2CT_DiagOKMp12_Bogie1_B1=crrcMvb->getBool(0x622,15,2);
    BR2CT_DiagOKMp12_Bogie2_B1=crrcMvb->getBool(0x622,15,3);
    BR2CT_DiagOKM12_Bogie1_B1=crrcMvb->getBool(0x622,15,4);
    BR2CT_DiagOKM12_Bogie2_B1=crrcMvb->getBool(0x622,15,5);
    BR2CT_CanApplSBTc12Bog1_B1=crrcMvb->getBool(0x622,15,6);
    BR2CT_CanApplSBTc12Bog2_B1=crrcMvb->getBool(0x622,15,7);

    BR2CT_CanApplSBMp12Bog1_B1=crrcMvb->getBool(0x622,16,0);
    BR2CT_CanApplSBMp12Bog2_B1=crrcMvb->getBool(0x622,16,1);
    BR2CT_CanApplSBM12Bog1_B1=crrcMvb->getBool(0x622,16,2);
    BR2CT_CanApplSBM12Bog2_B1=crrcMvb->getBool(0x622,16,3);
    BR2CT_BrakeAppliedTC12Bog1_B1=crrcMvb->getBool(0x622,16,4);
    BR2CT_BrakeAppliedTC12Bog2_B1=crrcMvb->getBool(0x622,16,5);
    BR2CT_BrakeAppliedMp12Bog1_B1=crrcMvb->getBool(0x622,16,6);
    BR2CT_BrakeAppliedMp12Bog2_B1=crrcMvb->getBool(0x622,16,7);

    BR2CT_BrakeAppliedM12Bog1_B1=crrcMvb->getBool(0x622,17,0);
    BR2CT_BrakeAppliedM12Bog2_B1=crrcMvb->getBool(0x622,17,1);
    BR2CT_BrakeReleasedTC12Bog1_B1=crrcMvb->getBool(0x622,17,2);
    BR2CT_BrakeReleasedTC12Bog2_B1=crrcMvb->getBool(0x622,17,3);
    BR2CT_BrakeReleasedMp12Bog1_B1=crrcMvb->getBool(0x622,17,4);
    BR2CT_BrakeReleasedMp12Bog2_B1=crrcMvb->getBool(0x622,17,5);
    BR2CT_BrakeReleasedM12Bog1_B1=crrcMvb->getBool(0x622,17,6);
    BR2CT_BrakeReleasedM12Bog2_B1=crrcMvb->getBool(0x622,17,7);

    BR2CT_IsolTc12Bog1_B1=crrcMvb->getBool(0x622,18,0);
    BR2CT_IsolTc12Bog2_B1=crrcMvb->getBool(0x622,18,1);
    BR2CT_IsolMp12Bog1_B1=crrcMvb->getBool(0x622,18,2);
    BR2CT_IsolMp12Bog2_B1=crrcMvb->getBool(0x622,18,3);
    BR2CT_IsolM12Bog1_B1=crrcMvb->getBool(0x622,18,4);
    BR2CT_IsolM12Bog2_B1=crrcMvb->getBool(0x622,18,5);
    BR2CT_WSPTc12Bog1_B1=crrcMvb->getBool(0x622,18,6);
    BR2CT_WSPTc12Bog2_B1=crrcMvb->getBool(0x622,18,7);

    BR2CT_WSPMP12Bog1_B1=crrcMvb->getBool(0x622,19,0);
    BR2CT_WSPMP12Bog2_B1=crrcMvb->getBool(0x622,19,1);
    BR2CT_WSPM12Bog1_B1=crrcMvb->getBool(0x622,19,2);
    BR2CT_WSPM12Bog2_B1=crrcMvb->getBool(0x622,19,3);
    BR2CT_EBActiTc12Bog1_B1=crrcMvb->getBool(0x622,19,4);
    BR2CT_EBActiTc12Bog2_B1=crrcMvb->getBool(0x622,19,5);
    BR2CT_EBActiMp12Bog1_B1=crrcMvb->getBool(0x622,19,6);
    BR2CT_EBActiMp12Bog2_B1=crrcMvb->getBool(0x622,19,7);

    BR2CT_EBActiM12Bog1_B1=crrcMvb->getBool(0x622,20,0);
    BR2CT_EBActiM12Bog2_B1=crrcMvb->getBool(0x622,20,1);
    BR2CT_EBAvailTc12Bog1_B1=crrcMvb->getBool(0x622,20,2);
    BR2CT_EBAvailTc12Bog2_B1=crrcMvb->getBool(0x622,20,3);
    BR2CT_EBAvailMp12Bog1_B1=crrcMvb->getBool(0x622,20,4);
    BR2CT_EBAvailMp12Bog2_B1=crrcMvb->getBool(0x622,20,5);
    BR2CT_EBAvailM12Bog1_B1=crrcMvb->getBool(0x622,20,6);
    BR2CT_EBAvailM12Bog2_B1=crrcMvb->getBool(0x622,20,7);

    BR2CT_PBReleasedTc12_B1=crrcMvb->getBool(0x622,21,0);
    BR2CT_PBReleasedMp12_B1=crrcMvb->getBool(0x622,21,1);
    BR2CT_PBReleasedM12_B1=crrcMvb->getBool(0x622,21,2);
    BR2CT_MGW_B1=crrcMvb->getBool(0x622,21,3);
    BR2CT_DISEBMp12_B1=crrcMvb->getBool(0x622,21,4);
    BR2CT_DISEBM12_B1=crrcMvb->getBool(0x622,21,5);
    BR2CT_CAN1_B1=crrcMvb->getBool(0x622,21,6);
    BR2CT_AllASPReady_B1=crrcMvb->getBool(0x622,21,7);

    BR2CT_SelfTestConT_B1=crrcMvb->getBool(0x622,22,0);
    BR2CT_RuningSelfTest_B1=crrcMvb->getBool(0x622,22,1);
    BR2CT_SelfTestOK_B1=crrcMvb->getBool(0x622,22,2);
    BR2CT_SelfTestFailed_B1=crrcMvb->getBool(0x622,22,3);
    BR2CT_LastSelfTestAborted_B1=crrcMvb->getBool(0x622,22,4);
    BR2CT_DiameterInput_ready_B1=crrcMvb->getBool(0x622,22,5);
    BR2CT_DiameterInput_status_B1=crrcMvb->getBool(0x622,22,6);
    BR2CT_EBActiInCAN_B1=crrcMvb->getBool(0x622,22,7);

    BR2CT_BrakeActInCAN_B1=crrcMvb->getBool(0x622,23,0);
    BR2CT_DriveActInCAN_B1=crrcMvb->getBool(0x622,23,1);
    BR2CT_FastBrakeActInCAN_B1=crrcMvb->getBool(0x622,23,2);
    BR2CT_EDM_B1=crrcMvb->getBool(0x622,23,3);
    BR2CT_ZeroSpeed_B1=crrcMvb->getBool(0x622,23,4);
    BR2CT_HBBrakeApply_B1=crrcMvb->getBool(0x622,23,5);
    BR2CT_30kphExceed_B1=crrcMvb->getBool(0x622,23,6);
    BR2CT_80kphExceed_B1=crrcMvb->getBool(0x622,23,7);

    BR2CT_MVBOK_B1=crrcMvb->getBool(0x622,24,0);

    BR2CT_BSRTc12Bog1_I16=crrcMvb->getSignedInt(0x623,0);
    BR2CT_BSRTc12Bog2_I16=crrcMvb->getSignedInt(0x623,2);
    BR2CT_BSRMp12Bog1_I16=crrcMvb->getSignedInt(0x623,4);
    BR2CT_BSRMp12Bog2_I16=crrcMvb->getSignedInt(0x623,6);
    BR2CT_BSRM12Bog1_I16=crrcMvb->getSignedInt(0x623,8);
    BR2CT_BSRM12Bog2_I16=crrcMvb->getSignedInt(0x623,10);
    BR2CT_BCPTc12Bog1_I16=crrcMvb->getSignedInt(0x623,12);
    BR2CT_BCPTc12Bog2_I16=crrcMvb->getSignedInt(0x623,14);
    BR2CT_BCPMp12Bog1_I16=crrcMvb->getSignedInt(0x623,16);
    BR2CT_BCPMp12Bog2_I16=crrcMvb->getSignedInt(0x623,18);
    BR2CT_BCPM12Bog1_I16=crrcMvb->getSignedInt(0x623,20);
    BR2CT_BCPM12Bog2_I16=crrcMvb->getSignedInt(0x623,22);
    BR2CT_PBPressureTc_I16=crrcMvb->getSignedInt(0x623,24);
    BR2CT_PBPressureMP_I16=crrcMvb->getSignedInt(0x623,26);
    BR2CT_PBPressureM_I16=crrcMvb->getSignedInt(0x623,28);

    BR2CT_BSRBog1Valid_Tc12_B1=crrcMvb->getBool(0x623,30,0);
    BR2CT_BSRBog2Valid_Tc12_B1=crrcMvb->getBool(0x623,30,1);
    BR2CT_BSRBog1Valid_Mp12_B1=crrcMvb->getBool(0x623,30,2);
    BR2CT_BSRBog2Valid_Mp12_B1=crrcMvb->getBool(0x623,30,3);
    BR2CT_BSRBog1Valid_M12_B1=crrcMvb->getBool(0x623,30,4);
    BR2CT_BSRBog2Valid_M12_B1=crrcMvb->getBool(0x623,30,5);
    BR2CT_BCPBog1Valid_Tc12_B1=crrcMvb->getBool(0x623,30,6);
    BR2CT_BCPBog2Valid_Tc12_B1=crrcMvb->getBool(0x623,30,7);

    BR2CT_BCPBog1Valid_Mp12_B1=crrcMvb->getBool(0x623,31,0);
    BR2CT_BCPBog2Valid_Mp12_B1=crrcMvb->getBool(0x623,31,1);
    BR2CT_BCPBog1Valid_M12_B1=crrcMvb->getBool(0x623,31,2);
    BR2CT_BCPBog2Valid_M12_B1=crrcMvb->getBool(0x623,31,3);
    BR2CT_PBPressValid_Tc12_B1=crrcMvb->getBool(0x623,31,4);
    BR2CT_PBPressValid_Mp12_B1=crrcMvb->getBool(0x623,31,5);
    BR2CT_PBPressValid_M12_B1=crrcMvb->getBool(0x623,31,6);

//    BR2CT_SpedSenrFauTc12Ax1_B1=crrcMvb->getBool(0x624,0,0);
//    BR2CT_SpedSenrFauTc12Ax2_B1=crrcMvb->getBool(0x624,0,1);
//    BR2CT_SpedSenrFauTc12Ax3_B1=crrcMvb->getBool(0x624,0,2);
//    BR2CT_SpedSenrFauTc12Ax4_B1=crrcMvb->getBool(0x624,0,3);
//    BR2CT_SpedSenrFauMp12Ax1_B1=crrcMvb->getBool(0x624,0,4);
//    BR2CT_SpedSenrFauMp12Ax2_B1=crrcMvb->getBool(0x624,0,5);
//    BR2CT_SpedSenrFauMp12Ax3_B1=crrcMvb->getBool(0x624,0,6);
//    BR2CT_SpedSenrFauMp12Ax4_B1=crrcMvb->getBool(0x624,0,7);

//    BR2CT_SpedSenrFauM12Ax1_B1=crrcMvb->getBool(0x624,1,0);
//    BR2CT_SpedSenrFauM12Ax2_B1=crrcMvb->getBool(0x624,1,1);
//    BR2CT_SpedSenrFauM12Ax3_B1=crrcMvb->getBool(0x624,1,2);
//    BR2CT_SpedSenrFauM12Ax4_B1=crrcMvb->getBool(0x624,1,3);

//    BR2CT_BSRLowTc12Bog1_B1=crrcMvb->getBool(0x624,2,0);
//    BR2CT_BSRLowTc12Bog2_B1=crrcMvb->getBool(0x624,2,1);
//    BR2CT_BSRLowMp12Bog1_B1=crrcMvb->getBool(0x624,2,2);
//    BR2CT_BSRLowMp12Bog2_B1=crrcMvb->getBool(0x624,2,3);
//    BR2CT_BSRLowM12Bog1_B1=crrcMvb->getBool(0x624,2,4);
//    BR2CT_BSRLowM12Bog2_B1=crrcMvb->getBool(0x624,2,5);

//    BR2CT_ASPOORTc12Bog1_B1=crrcMvb->getBool(0x624,3,0);
//    BR2CT_ASPOORTc12Bog2_B1=crrcMvb->getBool(0x624,3,1);
//    BR2CT_ASPOORMp12Bog1_B1=crrcMvb->getBool(0x624,3,2);
//    BR2CT_ASPOORMp12Bog2_B1=crrcMvb->getBool(0x624,3,3);
//    BR2CT_ASPOORM12Bog1_B1=crrcMvb->getBool(0x624,3,4);
//    BR2CT_ASPOORM12Bog2_B1=crrcMvb->getBool(0x624,3,5);

//    BR2CT_BrNotRelTc12Bog1_B1=crrcMvb->getBool(0x624,4,0);
//    BR2CT_BrNotRelTc12Bog2_B1=crrcMvb->getBool(0x624,4,1);
//    BR2CT_BrNotRelMp12Bog1_B1=crrcMvb->getBool(0x624,4,2);
//    BR2CT_BrNotRelMp12Bog2_B1=crrcMvb->getBool(0x624,4,3);
//    BR2CT_BrNotRelM12Bog1_B1=crrcMvb->getBool(0x624,4,4);
//    BR2CT_BrNotRelM12Bog2_B1=crrcMvb->getBool(0x624,4,5);

//    BR2CT_BCPLowTc12_B1=crrcMvb->getBool(0x624,5,0);
//    BR2CT_BCPLowMp12_B1=crrcMvb->getBool(0x624,5,1);
//    BR2CT_BCPLowM12_B1=crrcMvb->getBool(0x624,5,2);
//    BR2CT_SelfTest24h_B1=crrcMvb->getBool(0x624,5,3);
//    BR2CT_SelfTest26h_B1=crrcMvb->getBool(0x624,5,4);
//    BR2CT_MajorEvent_B1=crrcMvb->getBool(0x624,5,5);
//    BR2CT_MediumEvent_B1=crrcMvb->getBool(0x624,5,6);
//    BR2CT_MinorEvent_B1=crrcMvb->getBool(0x624,5,7);

//    BR2CT_Can1NotOK_B1=crrcMvb->getBool(0x624,6,0);
//    BR2CT_Can2NotOK_B1=crrcMvb->getBool(0x624,6,1);
//    BR2CT_AtLeastOnePBNotReleasedInCAN_B1=crrcMvb->getBool(0x624,6,2);
//    BR2CT_CommandInconsistentInCAN_B1=crrcMvb->getBool(0x624,6,3);

//    BR2CT_SeriousFaultTCBog1_B1=crrcMvb->getBool(0x624,7,0);
//    BR2CT_SeriousFaultTCBog2_B1=crrcMvb->getBool(0x624,7,1);
//    BR2CT_SeriousFaultMpBog1_B1=crrcMvb->getBool(0x624,7,2);
//    BR2CT_SeriousFaultMpBog2_B1=crrcMvb->getBool(0x624,7,3);
//    BR2CT_SeriousFaultMBog1_B1=crrcMvb->getBool(0x624,7,4);
//    BR2CT_SeriousFaultMBog2_B1=crrcMvb->getBool(0x624,7,5);

//    BR2CT_SlightFaultTCBog1_B1=crrcMvb->getBool(0x624,8,0);
//    BR2CT_SlightFaultTCBog2_B1=crrcMvb->getBool(0x624,8,1);
//    BR2CT_SlightFaultMpBog1_B1=crrcMvb->getBool(0x624,8,2);
//    BR2CT_SlightFaultMpBog2_B1=crrcMvb->getBool(0x624,8,3);
//    BR2CT_SlightFaultMBog1_B1=crrcMvb->getBool(0x624,8,4);
//    BR2CT_SlightFaultMBog2_B1=crrcMvb->getBool(0x624,8,5);

//    BR2CT_CodingFaultTCBog1_B1=crrcMvb->getBool(0x624,9,0);
//    BR2CT_CodingFaultTCBog2_B1=crrcMvb->getBool(0x624,9,1);
//    BR2CT_CodingFaultMpBog1_B1=crrcMvb->getBool(0x624,9,2);
//    BR2CT_CodingFaultMpBog2_B1=crrcMvb->getBool(0x624,9,3);
//    BR2CT_CodingFaultMBog1_B1=crrcMvb->getBool(0x624,9,4);
//    BR2CT_CodingFaultMBog2_B1=crrcMvb->getBool(0x624,9,5);

//    BR2CT_WSPTripTc11_B1=crrcMvb->getBool(0x624,10,0);
//    BR2CT_WSPTripTc12_B1=crrcMvb->getBool(0x624,10,1);
//    BR2CT_WSPTripTc13_B1=crrcMvb->getBool(0x624,10,2);
//    BR2CT_WSPTripTc14_B1=crrcMvb->getBool(0x624,10,3);
//    BR2CT_WSPTripMp11_B1=crrcMvb->getBool(0x624,10,4);
//    BR2CT_WSPTripMp12_B1=crrcMvb->getBool(0x624,10,5);
//    BR2CT_WSPTripMp13_B1=crrcMvb->getBool(0x624,10,6);
//    BR2CT_WSPTripMp14_B1=crrcMvb->getBool(0x624,10,7);

//    BR2CT_WSPTripM11_B1=crrcMvb->getBool(0x624,11,0);
//    BR2CT_WSPTripM12_B1=crrcMvb->getBool(0x624,11,1);
//    BR2CT_WSPTripM13_B1=crrcMvb->getBool(0x624,11,2);
//    BR2CT_WSPTripM14_B1=crrcMvb->getBool(0x624,11,3);

    /*********************************************************BCU3→CCU**************************************************/
    BR3CT_MassTc12Bog1_I16=crrcMvb->getSignedInt(0x630,2);
    BR3CT_MassTc12Bog2_I16=crrcMvb->getSignedInt(0x630,4);
    BR3CT_MassMp12Bog1_I16=crrcMvb->getSignedInt(0x630,6);
    BR3CT_MassMp12Bog2_I16=crrcMvb->getSignedInt(0x630,8);
    BR3CT_MassM12Bog1_I16=crrcMvb->getSignedInt(0x630,10);
    BR3CT_MassM12Bog2_I16=crrcMvb->getSignedInt(0x630,12);

    BR3CT_ASPTc12Bog1_I16=crrcMvb->getSignedInt(0x630,16);
    BR3CT_ASPTc12Bog2_I16=crrcMvb->getSignedInt(0x630,18);
    BR3CT_ASPMp12Bog1_I16=crrcMvb->getSignedInt(0x630,20);
    BR3CT_ASPMp12Bog2_I16=crrcMvb->getSignedInt(0x630,22);
    BR3CT_ASPM12Bog1_I16=crrcMvb->getSignedInt(0x630,24);
    BR3CT_ASPM12Bog2_I16=crrcMvb->getSignedInt(0x630,26);

    BR3CT_MassValidTc12Bog1_B1=crrcMvb->getBool(0x630,30,0);
    BR3CT_MassValidTc12Bog2_B1=crrcMvb->getBool(0x630,30,1);
    BR3CT_MassValidMp12Bog1_B1=crrcMvb->getBool(0x630,30,2);
    BR3CT_MassValidMp12Bog2_B1=crrcMvb->getBool(0x630,30,3);
    BR3CT_MassValidM12Bog1_B1=crrcMvb->getBool(0x630,30,4);
    BR3CT_MassValidM12Bog2_B1=crrcMvb->getBool(0x630,30,5);

    BR3CT_ASPValidTc12Bog1_B1=crrcMvb->getBool(0x630,31,0);
    BR3CT_ASPValidTc12Bog2_B1=crrcMvb->getBool(0x630,31,1);
    BR3CT_ASPValidMp12Bog1_B1=crrcMvb->getBool(0x630,31,2);
    BR3CT_ASPValidMp12Bog2_B1=crrcMvb->getBool(0x630,31,3);
    BR3CT_ASPValidM12Bog1_B1=crrcMvb->getBool(0x630,31,4);
    BR3CT_ASPValidM12Bog2_B1=crrcMvb->getBool(0x630,31,5);

    BR3CT_SpeedTc12Ax1_I16=crrcMvb->getSignedInt(0x631,0);
    BR3CT_SpeedTc12Ax2_I16=crrcMvb->getSignedInt(0x631,2);
    BR3CT_SpeedTc12Ax3_I16=crrcMvb->getSignedInt(0x631,4);
    BR3CT_SpeedTC12Ax4_I16=crrcMvb->getSignedInt(0x631,6);
    BR3CT_SpeedMp12Ax1_I16=crrcMvb->getSignedInt(0x631,8);
    BR3CT_SpeedMp12Ax2_I16=crrcMvb->getSignedInt(0x631,10);
    BR3CT_SpeedMp12Ax3_I16=crrcMvb->getSignedInt(0x631,12);
    BR3CT_SpeedMp12Ax4_I16=crrcMvb->getSignedInt(0x631,14);
    BR3CT_SpeedM12Ax1_I16=crrcMvb->getSignedInt(0x631,16);
    BR3CT_SpeedM12Ax2_I16=crrcMvb->getSignedInt(0x631,18);
    BR3CT_SpeedM12Ax3_I16=crrcMvb->getSignedInt(0x631,20);
    BR3CT_SpeedM12Ax4_I16=crrcMvb->getSignedInt(0x631,22);
    BR3CT_MRP_TC_I16=crrcMvb->getSignedInt(0x631,24);
    BR3CT_MRP_MP_I16=crrcMvb->getSignedInt(0x631,26);
    BR3CT_MRP_M_I16=crrcMvb->getSignedInt(0x631,28);

    BR3CT_SpeedValTc12Ax1_B1=crrcMvb->getBool(0x631,30,0);
    BR3CT_SpeedValTc12Ax2_B1=crrcMvb->getBool(0x631,30,1);
    BR3CT_SpeedValTc12Ax3_B1=crrcMvb->getBool(0x631,30,2);
    BR3CT_SpeedValTc12Ax4_B1=crrcMvb->getBool(0x631,30,3);
    BR3CT_SpeedValMp12Ax1_B1=crrcMvb->getBool(0x631,30,4);
    BR3CT_SpeedValMp12Ax2_B1=crrcMvb->getBool(0x631,30,5);
    BR3CT_SpeedValMp12Ax3_B1=crrcMvb->getBool(0x631,30,6);
    BR3CT_SpeedValMp12Ax4_B1=crrcMvb->getBool(0x631,30,7);

    BR3CT_SpeedValM12Ax1_B1=crrcMvb->getBool(0x631,31,0);
    BR3CT_SpeedValM12Ax2_B1=crrcMvb->getBool(0x631,31,1);
    BR3CT_SpeedValM12Ax3_B1=crrcMvb->getBool(0x631,31,2);
    BR3CT_SpeedValM12Ax4_B1=crrcMvb->getBool(0x631,31,3);
    BR3CT_MRPValTC_B1=crrcMvb->getBool(0x631,31,4);
    BR3CT_MRPValMP_B1=crrcMvb->getBool(0x631,31,5);
    BR3CT_MRPValM_B1=crrcMvb->getBool(0x631,31,6);

    BR3CT_LifeSgn_I16=crrcMvb->getSignedInt(0x632,0);
    BR3CT_EPForceTc12bog1_I16=crrcMvb->getSignedInt(0x632,2);
    BR3CT_EPForceTc12bog2_I16=crrcMvb->getSignedInt(0x632,4);
    BR3CT_EPForceMp12bog1_I16=crrcMvb->getSignedInt(0x632,6);
    BR3CT_EPForceMp12bog2_I16=crrcMvb->getSignedInt(0x632,8);
    BR3CT_EPForceM12bog1_I16=crrcMvb->getSignedInt(0x632,10);
    BR3CT_EPForceM12bog2_I16=crrcMvb->getSignedInt(0x632,12);

    BR3CT_GWSWVerBH_U8=crrcMvb->getUnsignedChar(0x632,14);
    BR3CT_GWSWVerBL_U8=crrcMvb->getUnsignedChar(0x632,14);///////////////////////shu ju liu cuo wu

    BR3CT_DiagOKTc12_Bogie1_B1=crrcMvb->getBool(0x632,15,0);
    BR3CT_DiagOKTc12_Bogie2_B1=crrcMvb->getBool(0x632,15,1);
    BR3CT_DiagOKMp12_Bogie1_B1=crrcMvb->getBool(0x632,15,2);
    BR3CT_DiagOKMp12_Bogie2_B1=crrcMvb->getBool(0x632,15,3);
    BR3CT_DiagOKM12_Bogie1_B1=crrcMvb->getBool(0x632,15,4);
    BR3CT_DiagOKM12_Bogie2_B1=crrcMvb->getBool(0x632,15,5);
    BR3CT_CanApplSBTc12Bog1_B1=crrcMvb->getBool(0x632,15,6);
    BR3CT_CanApplSBTc12Bog2_B1=crrcMvb->getBool(0x632,15,7);

    BR3CT_CanApplSBMp12Bog1_B1=crrcMvb->getBool(0x632,16,0);
    BR3CT_CanApplSBMp12Bog2_B1=crrcMvb->getBool(0x632,16,1);
    BR3CT_CanApplSBM12Bog1_B1=crrcMvb->getBool(0x632,16,2);
    BR3CT_CanApplSBM12Bog2_B1=crrcMvb->getBool(0x632,16,3);
    BR3CT_BrakeAppliedTC12Bog1_B1=crrcMvb->getBool(0x632,16,4);
    BR3CT_BrakeAppliedTC12Bog2_B1=crrcMvb->getBool(0x632,16,5);
    BR3CT_BrakeAppliedMp12Bog1_B1=crrcMvb->getBool(0x632,16,6);
    BR3CT_BrakeAppliedMp12Bog2_B1=crrcMvb->getBool(0x632,16,7);

    BR3CT_BrakeAppliedM12Bog1_B1=crrcMvb->getBool(0x632,17,0);
    BR3CT_BrakeAppliedM12Bog2_B1=crrcMvb->getBool(0x632,17,1);
    BR3CT_BrakeReleasedTC12Bog1_B1=crrcMvb->getBool(0x632,17,2);
    BR3CT_BrakeReleasedTC12Bog2_B1=crrcMvb->getBool(0x632,17,3);
    BR3CT_BrakeReleasedMp12Bog1_B1=crrcMvb->getBool(0x632,17,4);
    BR3CT_BrakeReleasedMp12Bog2_B1=crrcMvb->getBool(0x632,17,5);
    BR3CT_BrakeReleasedM12Bog1_B1=crrcMvb->getBool(0x632,17,6);
    BR3CT_BrakeReleasedM12Bog2_B1=crrcMvb->getBool(0x632,17,7);

    BR3CT_IsolTc12Bog1_B1=crrcMvb->getBool(0x632,18,0);
    BR3CT_IsolTc12Bog2_B1=crrcMvb->getBool(0x632,18,1);
    BR3CT_IsolMp12Bog1_B1=crrcMvb->getBool(0x632,18,2);
    BR3CT_IsolMp12Bog2_B1=crrcMvb->getBool(0x632,18,3);
    BR3CT_IsolM12Bog1_B1=crrcMvb->getBool(0x632,18,4);
    BR3CT_IsolM12Bog2_B1=crrcMvb->getBool(0x632,18,5);
    BR3CT_WSPTc12Bog1_B1=crrcMvb->getBool(0x632,18,6);
    BR3CT_WSPTc12Bog2_B1=crrcMvb->getBool(0x632,18,7);

    BR3CT_WSPMP12Bog1_B1=crrcMvb->getBool(0x632,19,0);
    BR3CT_WSPMP12Bog2_B1=crrcMvb->getBool(0x632,19,1);
    BR3CT_WSPM12Bog1_B1=crrcMvb->getBool(0x632,19,2);
    BR3CT_WSPM12Bog2_B1=crrcMvb->getBool(0x632,19,3);
    BR3CT_EBActiTc12Bog1_B1=crrcMvb->getBool(0x632,19,4);
    BR3CT_EBActiTc12Bog2_B1=crrcMvb->getBool(0x632,19,5);
    BR3CT_EBActiMp12Bog1_B1=crrcMvb->getBool(0x632,19,6);
    BR3CT_EBActiMp12Bog2_B1=crrcMvb->getBool(0x632,19,7);

    BR3CT_EBActiM12Bog1_B1=crrcMvb->getBool(0x632,20,0);
    BR3CT_EBActiM12Bog2_B1=crrcMvb->getBool(0x632,20,1);
    BR3CT_EBAvailTc12Bog1_B1=crrcMvb->getBool(0x632,20,2);
    BR3CT_EBAvailTc12Bog2_B1=crrcMvb->getBool(0x632,20,3);
    BR3CT_EBAvailMp12Bog1_B1=crrcMvb->getBool(0x632,20,4);
    BR3CT_EBAvailMp12Bog2_B1=crrcMvb->getBool(0x632,20,5);
    BR3CT_EBAvailM12Bog1_B1=crrcMvb->getBool(0x632,20,6);
    BR3CT_EBAvailM12Bog2_B1=crrcMvb->getBool(0x632,20,7);

    BR3CT_PBReleasedTc12_B1=crrcMvb->getBool(0x632,21,0);
    BR3CT_PBReleasedMp12_B1=crrcMvb->getBool(0x632,21,1);
    BR3CT_PBReleasedM12_B1=crrcMvb->getBool(0x632,21,2);
    BR3CT_MGW_B1=crrcMvb->getBool(0x632,21,3);
    BR3CT_DISEBMp12_B1=crrcMvb->getBool(0x632,21,4);
    BR3CT_DISEBM12_B1=crrcMvb->getBool(0x632,21,5);
    BR3CT_CAN1_B1=crrcMvb->getBool(0x632,21,6);
    BR3CT_AllASPReady_B1=crrcMvb->getBool(0x632,21,7);

    BR3CT_SelfTestConT_B1=crrcMvb->getBool(0x632,22,0);
    BR3CT_RuningSelfTest_B1=crrcMvb->getBool(0x632,22,1);
    BR3CT_SelfTestOK_B1=crrcMvb->getBool(0x632,22,2);
    BR3CT_SelfTestFailed_B1=crrcMvb->getBool(0x632,22,3);
    BR3CT_LastSelfTestAborted_B1=crrcMvb->getBool(0x632,22,4);
    BR3CT_DiameterInput_ready_B1=crrcMvb->getBool(0x632,22,5);
    BR3CT_DiameterInput_status_B1=crrcMvb->getBool(0x632,22,6);
    BR3CT_EBActiInCAN_B1=crrcMvb->getBool(0x632,22,7);

    BR3CT_BrakeActInCAN_B1=crrcMvb->getBool(0x632,23,0);
    BR3CT_DriveActInCAN_B1=crrcMvb->getBool(0x632,23,1);
    BR3CT_FastBrakeActInCAN_B1=crrcMvb->getBool(0x632,23,2);
    BR3CT_EDM_B1=crrcMvb->getBool(0x632,23,3);
    BR3CT_ZeroSpeed_B1=crrcMvb->getBool(0x632,23,4);
    BR3CT_HBBrakeApply_B1=crrcMvb->getBool(0x632,23,5);
    BR3CT_30kphExceed_B1=crrcMvb->getBool(0x632,23,6);
    BR3CT_80kphExceed_B1=crrcMvb->getBool(0x632,23,7);

    BR3CT_MVBOK_B1=crrcMvb->getBool(0x632,24,0);

    BR3CT_BSRTc12Bog1_I16=crrcMvb->getSignedInt(0x633,0);
    BR3CT_BSRTc12Bog2_I16=crrcMvb->getSignedInt(0x633,2);
    BR3CT_BSRMp12Bog1_I16=crrcMvb->getSignedInt(0x633,4);
    BR3CT_BSRMp12Bog2_I16=crrcMvb->getSignedInt(0x633,6);
    BR3CT_BSRM12Bog1_I16=crrcMvb->getSignedInt(0x633,8);
    BR3CT_BSRM12Bog2_I16=crrcMvb->getSignedInt(0x633,10);
    BR3CT_BCPTc12Bog1_I16=crrcMvb->getSignedInt(0x633,12);
    BR3CT_BCPTc12Bog2_I16=crrcMvb->getSignedInt(0x633,14);
    BR3CT_BCPMp12Bog1_I16=crrcMvb->getSignedInt(0x633,16);
    BR3CT_BCPMp12Bog2_I16=crrcMvb->getSignedInt(0x633,18);
    BR3CT_BCPM12Bog1_I16=crrcMvb->getSignedInt(0x633,20);
    BR3CT_BCPM12Bog2_I16=crrcMvb->getSignedInt(0x633,22);
    BR3CT_PBPressureTc_I16=crrcMvb->getSignedInt(0x633,24);
    BR3CT_PBPressureMP_I16=crrcMvb->getSignedInt(0x633,26);
    BR3CT_PBPressureM_I16=crrcMvb->getSignedInt(0x633,28);

    BR3CT_BSRBog1Valid_Tc12_B1=crrcMvb->getBool(0x633,30,0);
    BR3CT_BSRBog2Valid_Tc12_B1=crrcMvb->getBool(0x633,30,1);
    BR3CT_BSRBog1Valid_Mp12_B1=crrcMvb->getBool(0x633,30,2);
    BR3CT_BSRBog2Valid_Mp12_B1=crrcMvb->getBool(0x633,30,3);
    BR3CT_BSRBog1Valid_M12_B1=crrcMvb->getBool(0x633,30,4);
    BR3CT_BSRBog2Valid_M12_B1=crrcMvb->getBool(0x633,30,5);
    BR3CT_BCPBog1Valid_Tc12_B1=crrcMvb->getBool(0x633,30,6);
    BR3CT_BCPBog2Valid_Tc12_B1=crrcMvb->getBool(0x633,30,7);

    BR3CT_BCPBog1Valid_Mp12_B1=crrcMvb->getBool(0x633,31,0);
    BR3CT_BCPBog2Valid_Mp12_B1=crrcMvb->getBool(0x633,31,1);
    BR3CT_BCPBog1Valid_M12_B1=crrcMvb->getBool(0x633,31,2);
    BR3CT_BCPBog2Valid_M12_B1=crrcMvb->getBool(0x633,31,3);
    BR3CT_PBPressValid_Tc12_B1=crrcMvb->getBool(0x633,31,4);
    BR3CT_PBPressValid_Mp12_B1=crrcMvb->getBool(0x633,31,5);
    BR3CT_PBPressValid_M12_B1=crrcMvb->getBool(0x633,31,6);

//    BR3CT_SpedSenrFauTc12Ax1_B1=crrcMvb->getBool(0x634,0,0);
//    BR3CT_SpedSenrFauTc12Ax2_B1=crrcMvb->getBool(0x634,0,1);
//    BR3CT_SpedSenrFauTc12Ax3_B1=crrcMvb->getBool(0x634,0,2);
//    BR3CT_SpedSenrFauTc12Ax4_B1=crrcMvb->getBool(0x634,0,3);
//    BR3CT_SpedSenrFauMp12Ax1_B1=crrcMvb->getBool(0x634,0,4);
//    BR3CT_SpedSenrFauMp12Ax2_B1=crrcMvb->getBool(0x634,0,5);
//    BR3CT_SpedSenrFauMp12Ax3_B1=crrcMvb->getBool(0x634,0,6);
//    BR3CT_SpedSenrFauMp12Ax4_B1=crrcMvb->getBool(0x634,0,7);

//    BR3CT_SpedSenrFauM12Ax1_B1=crrcMvb->getBool(0x634,1,0);
//    BR3CT_SpedSenrFauM12Ax2_B1=crrcMvb->getBool(0x634,1,1);
//    BR3CT_SpedSenrFauM12Ax3_B1=crrcMvb->getBool(0x634,1,2);
//    BR3CT_SpedSenrFauM12Ax4_B1=crrcMvb->getBool(0x634,1,3);

//    BR3CT_BSRLowTc12Bog1_B1=crrcMvb->getBool(0x634,2,0);
//    BR3CT_BSRLowTc12Bog2_B1=crrcMvb->getBool(0x634,2,1);
//    BR3CT_BSRLowMp12Bog1_B1=crrcMvb->getBool(0x634,2,2);
//    BR3CT_BSRLowMp12Bog2_B1=crrcMvb->getBool(0x634,2,3);
//    BR3CT_BSRLowM12Bog1_B1=crrcMvb->getBool(0x634,2,4);
//    BR3CT_BSRLowM12Bog2_B1=crrcMvb->getBool(0x634,2,5);

//    BR3CT_ASPOORTc12Bog1_B1=crrcMvb->getBool(0x634,3,0);
//    BR3CT_ASPOORTc12Bog2_B1=crrcMvb->getBool(0x634,3,1);
//    BR3CT_ASPOORMp12Bog1_B1=crrcMvb->getBool(0x634,3,2);
//    BR3CT_ASPOORMp12Bog2_B1=crrcMvb->getBool(0x634,3,3);
//    BR3CT_ASPOORM12Bog1_B1=crrcMvb->getBool(0x634,3,4);
//    BR3CT_ASPOORM12Bog2_B1=crrcMvb->getBool(0x634,3,5);

//    BR3CT_BrNotRelTc12Bog1_B1=crrcMvb->getBool(0x634,4,0);
//    BR3CT_BrNotRelTc12Bog2_B1=crrcMvb->getBool(0x634,4,1);
//    BR3CT_BrNotRelMp12Bog1_B1=crrcMvb->getBool(0x634,4,2);
//    BR3CT_BrNotRelMp12Bog2_B1=crrcMvb->getBool(0x634,4,3);
//    BR3CT_BrNotRelM12Bog1_B1=crrcMvb->getBool(0x634,4,4);
//    BR3CT_BrNotRelM12Bog2_B1=crrcMvb->getBool(0x634,4,5);

//    BR3CT_BCPLowTc12_B1=crrcMvb->getBool(0x634,5,0);
//    BR3CT_BCPLowMp12_B1=crrcMvb->getBool(0x634,5,1);
//    BR3CT_BCPLowM12_B1=crrcMvb->getBool(0x634,5,2);
//    BR3CT_SelfTest24h_B1=crrcMvb->getBool(0x634,5,3);
//    BR3CT_SelfTest26h_B1=crrcMvb->getBool(0x634,5,4);
//    BR3CT_MajorEvent_B1=crrcMvb->getBool(0x634,5,5);
//    BR3CT_MediumEvent_B1=crrcMvb->getBool(0x634,5,6);
//    BR3CT_MinorEvent_B1=crrcMvb->getBool(0x634,5,7);

//    BR3CT_Can1NotOK_B1=crrcMvb->getBool(0x634,6,0);
//    BR3CT_Can2NotOK_B1=crrcMvb->getBool(0x634,6,1);
//    BR3CT_AtLeastOnePBNotReleasedInCAN_B1=crrcMvb->getBool(0x634,6,2);
//    BR3CT_CommandInconsistentInCAN_B1=crrcMvb->getBool(0x634,6,3);

//    BR3CT_SeriousFaultTCBog1_B1=crrcMvb->getBool(0x634,7,0);
//    BR3CT_SeriousFaultTCBog2_B1=crrcMvb->getBool(0x634,7,1);
//    BR3CT_SeriousFaultMpBog1_B1=crrcMvb->getBool(0x634,7,2);
//    BR3CT_SeriousFaultMpBog2_B1=crrcMvb->getBool(0x634,7,3);
//    BR3CT_SeriousFaultMBog1_B1=crrcMvb->getBool(0x634,7,4);
//    BR3CT_SeriousFaultMBog2_B1=crrcMvb->getBool(0x634,7,5);

//    BR3CT_SlightFaultTCBog1_B1=crrcMvb->getBool(0x634,8,0);
//    BR3CT_SlightFaultTCBog2_B1=crrcMvb->getBool(0x634,8,1);
//    BR3CT_SlightFaultMpBog1_B1=crrcMvb->getBool(0x634,8,2);
//    BR3CT_SlightFaultMpBog2_B1=crrcMvb->getBool(0x634,8,3);
//    BR3CT_SlightFaultMBog1_B1=crrcMvb->getBool(0x634,8,4);
//    BR3CT_SlightFaultMBog2_B1=crrcMvb->getBool(0x634,8,5);

//    BR3CT_CodingFaultTCBog1_B1=crrcMvb->getBool(0x634,9,0);
//    BR3CT_CodingFaultTCBog2_B1=crrcMvb->getBool(0x634,9,1);
//    BR3CT_CodingFaultMpBog1_B1=crrcMvb->getBool(0x634,9,2);
//    BR3CT_CodingFaultMpBog2_B1=crrcMvb->getBool(0x634,9,3);
//    BR3CT_CodingFaultMBog1_B1=crrcMvb->getBool(0x634,9,4);
//    BR3CT_CodingFaultMBog2_B1=crrcMvb->getBool(0x634,9,5);

//    BR3CT_WSPTripTc11_B1=crrcMvb->getBool(0x634,10,0);
//    BR3CT_WSPTripTc12_B1=crrcMvb->getBool(0x634,10,1);
//    BR3CT_WSPTripTc13_B1=crrcMvb->getBool(0x634,10,2);
//    BR3CT_WSPTripTc14_B1=crrcMvb->getBool(0x634,10,3);
//    BR3CT_WSPTripMp11_B1=crrcMvb->getBool(0x634,10,4);
//    BR3CT_WSPTripMp12_B1=crrcMvb->getBool(0x634,10,5);
//    BR3CT_WSPTripMp13_B1=crrcMvb->getBool(0x634,10,6);
//    BR3CT_WSPTripMp14_B1=crrcMvb->getBool(0x634,10,7);

//    BR3CT_WSPTripM11_B1=crrcMvb->getBool(0x634,11,0);
//    BR3CT_WSPTripM12_B1=crrcMvb->getBool(0x634,11,1);
//    BR3CT_WSPTripM13_B1=crrcMvb->getBool(0x634,11,2);
//    BR3CT_WSPTripM14_B1=crrcMvb->getBool(0x634,11,3);


    /*********************************************************BCU4→CCU**************************************************/
    BR4CT_MassTc12Bog1_I16=crrcMvb->getSignedInt(0x640,2);
    BR4CT_MassTc12Bog2_I16=crrcMvb->getSignedInt(0x640,4);
    BR4CT_MassMp12Bog1_I16=crrcMvb->getSignedInt(0x640,6);
    BR4CT_MassMp12Bog2_I16=crrcMvb->getSignedInt(0x640,8);
    BR4CT_MassM12Bog1_I16=crrcMvb->getSignedInt(0x640,10);
    BR4CT_MassM12Bog2_I16=crrcMvb->getSignedInt(0x640,12);

    BR4CT_ASPTc12Bog1_I16=crrcMvb->getSignedInt(0x640,16);
    BR4CT_ASPTc12Bog2_I16=crrcMvb->getSignedInt(0x640,18);
    BR4CT_ASPMp12Bog1_I16=crrcMvb->getSignedInt(0x640,20);
    BR4CT_ASPMp12Bog2_I16=crrcMvb->getSignedInt(0x640,22);
    BR4CT_ASPM12Bog1_I16=crrcMvb->getSignedInt(0x640,24);
    BR4CT_ASPM12Bog2_I16=crrcMvb->getSignedInt(0x640,26);

    BR4CT_MassValidTc12Bog1_B1=crrcMvb->getBool(0x640,30,0);
    BR4CT_MassValidTc12Bog2_B1=crrcMvb->getBool(0x640,30,1);
    BR4CT_MassValidMp12Bog1_B1=crrcMvb->getBool(0x640,30,2);
    BR4CT_MassValidMp12Bog2_B1=crrcMvb->getBool(0x640,30,3);
    BR4CT_MassValidM12Bog1_B1=crrcMvb->getBool(0x640,30,4);
    BR4CT_MassValidM12Bog2_B1=crrcMvb->getBool(0x640,30,5);

    BR4CT_ASPValidTc12Bog1_B1=crrcMvb->getBool(0x640,31,0);
    BR4CT_ASPValidTc12Bog2_B1=crrcMvb->getBool(0x640,31,1);
    BR4CT_ASPValidMp12Bog1_B1=crrcMvb->getBool(0x640,31,2);
    BR4CT_ASPValidMp12Bog2_B1=crrcMvb->getBool(0x640,31,3);
    BR4CT_ASPValidM12Bog1_B1=crrcMvb->getBool(0x640,31,4);
    BR4CT_ASPValidM12Bog2_B1=crrcMvb->getBool(0x640,31,5);

    BR4CT_SpeedTc12Ax1_I16=crrcMvb->getSignedInt(0x641,0);
    BR4CT_SpeedTc12Ax2_I16=crrcMvb->getSignedInt(0x641,2);
    BR4CT_SpeedTc12Ax3_I16=crrcMvb->getSignedInt(0x641,4);
    BR4CT_SpeedTC12Ax4_I16=crrcMvb->getSignedInt(0x641,6);
    BR4CT_SpeedMp12Ax1_I16=crrcMvb->getSignedInt(0x641,8);
    BR4CT_SpeedMp12Ax2_I16=crrcMvb->getSignedInt(0x641,10);
    BR4CT_SpeedMp12Ax3_I16=crrcMvb->getSignedInt(0x641,12);
    BR4CT_SpeedMp12Ax4_I16=crrcMvb->getSignedInt(0x641,14);
    BR4CT_SpeedM12Ax1_I16=crrcMvb->getSignedInt(0x641,16);
    BR4CT_SpeedM12Ax2_I16=crrcMvb->getSignedInt(0x641,18);
    BR4CT_SpeedM12Ax3_I16=crrcMvb->getSignedInt(0x641,20);
    BR4CT_SpeedM12Ax4_I16=crrcMvb->getSignedInt(0x641,22);
    BR4CT_MRP_TC_I16=crrcMvb->getSignedInt(0x641,24);
    BR4CT_MRP_MP_I16=crrcMvb->getSignedInt(0x641,26);
    BR4CT_MRP_M_I16=crrcMvb->getSignedInt(0x641,28);

    BR4CT_SpeedValTc12Ax1_B1=crrcMvb->getBool(0x641,30,0);
    BR4CT_SpeedValTc12Ax2_B1=crrcMvb->getBool(0x641,30,1);
    BR4CT_SpeedValTc12Ax3_B1=crrcMvb->getBool(0x641,30,2);
    BR4CT_SpeedValTc12Ax4_B1=crrcMvb->getBool(0x641,30,3);
    BR4CT_SpeedValMp12Ax1_B1=crrcMvb->getBool(0x641,30,4);
    BR4CT_SpeedValMp12Ax2_B1=crrcMvb->getBool(0x641,30,5);
    BR4CT_SpeedValMp12Ax3_B1=crrcMvb->getBool(0x641,30,6);
    BR4CT_SpeedValMp12Ax4_B1=crrcMvb->getBool(0x641,30,7);

    BR4CT_SpeedValM12Ax1_B1=crrcMvb->getBool(0x641,31,0);
    BR4CT_SpeedValM12Ax2_B1=crrcMvb->getBool(0x641,31,1);
    BR4CT_SpeedValM12Ax3_B1=crrcMvb->getBool(0x641,31,2);
    BR4CT_SpeedValM12Ax4_B1=crrcMvb->getBool(0x641,31,3);
    BR4CT_MRPValTC_B1=crrcMvb->getBool(0x641,31,4);
    BR4CT_MRPValMP_B1=crrcMvb->getBool(0x641,31,5);
    BR4CT_MRPValM_B1=crrcMvb->getBool(0x641,31,6);

    BR4CT_LifeSgn_I16=crrcMvb->getSignedInt(0x642,0);
    BR4CT_EPForceTc12bog1_I16=crrcMvb->getSignedInt(0x642,2);
    BR4CT_EPForceTc12bog2_I16=crrcMvb->getSignedInt(0x642,4);
    BR4CT_EPForceMp12bog1_I16=crrcMvb->getSignedInt(0x642,6);
    BR4CT_EPForceMp12bog2_I16=crrcMvb->getSignedInt(0x642,8);
    BR4CT_EPForceM12bog1_I16=crrcMvb->getSignedInt(0x642,10);
    BR4CT_EPForceM12bog2_I16=crrcMvb->getSignedInt(0x642,12);

    BR4CT_GWSWVerBH_U8=crrcMvb->getUnsignedChar(0x642,14);
    BR4CT_GWSWVerBL_U8=crrcMvb->getUnsignedChar(0x642,14);///////////////////////shu ju liu cuo wu

    BR4CT_DiagOKTc12_Bogie1_B1=crrcMvb->getBool(0x642,15,0);
    BR4CT_DiagOKTc12_Bogie2_B1=crrcMvb->getBool(0x642,15,1);
    BR4CT_DiagOKMp12_Bogie1_B1=crrcMvb->getBool(0x642,15,2);
    BR4CT_DiagOKMp12_Bogie2_B1=crrcMvb->getBool(0x642,15,3);
    BR4CT_DiagOKM12_Bogie1_B1=crrcMvb->getBool(0x642,15,4);
    BR4CT_DiagOKM12_Bogie2_B1=crrcMvb->getBool(0x642,15,5);
    BR4CT_CanApplSBTc12Bog1_B1=crrcMvb->getBool(0x642,15,6);
    BR4CT_CanApplSBTc12Bog2_B1=crrcMvb->getBool(0x642,15,7);

    BR4CT_CanApplSBMp12Bog1_B1=crrcMvb->getBool(0x642,16,0);
    BR4CT_CanApplSBMp12Bog2_B1=crrcMvb->getBool(0x642,16,1);
    BR4CT_CanApplSBM12Bog1_B1=crrcMvb->getBool(0x642,16,2);
    BR4CT_CanApplSBM12Bog2_B1=crrcMvb->getBool(0x642,16,3);
    BR4CT_BrakeAppliedTC12Bog1_B1=crrcMvb->getBool(0x642,16,4);
    BR4CT_BrakeAppliedTC12Bog2_B1=crrcMvb->getBool(0x642,16,5);
    BR4CT_BrakeAppliedMp12Bog1_B1=crrcMvb->getBool(0x642,16,6);
    BR4CT_BrakeAppliedMp12Bog2_B1=crrcMvb->getBool(0x642,16,7);

    BR4CT_BrakeAppliedM12Bog1_B1=crrcMvb->getBool(0x642,17,0);
    BR4CT_BrakeAppliedM12Bog2_B1=crrcMvb->getBool(0x642,17,1);
    BR4CT_BrakeReleasedTC12Bog1_B1=crrcMvb->getBool(0x642,17,2);
    BR4CT_BrakeReleasedTC12Bog2_B1=crrcMvb->getBool(0x642,17,3);
    BR4CT_BrakeReleasedMp12Bog1_B1=crrcMvb->getBool(0x642,17,4);
    BR4CT_BrakeReleasedMp12Bog2_B1=crrcMvb->getBool(0x642,17,5);
    BR4CT_BrakeReleasedM12Bog1_B1=crrcMvb->getBool(0x642,17,6);
    BR4CT_BrakeReleasedM12Bog2_B1=crrcMvb->getBool(0x642,17,7);

    BR4CT_IsolTc12Bog1_B1=crrcMvb->getBool(0x642,18,0);
    BR4CT_IsolTc12Bog2_B1=crrcMvb->getBool(0x642,18,1);
    BR4CT_IsolMp12Bog1_B1=crrcMvb->getBool(0x642,18,2);
    BR4CT_IsolMp12Bog2_B1=crrcMvb->getBool(0x642,18,3);
    BR4CT_IsolM12Bog1_B1=crrcMvb->getBool(0x642,18,4);
    BR4CT_IsolM12Bog2_B1=crrcMvb->getBool(0x642,18,5);
    BR4CT_WSPTc12Bog1_B1=crrcMvb->getBool(0x642,18,6);
    BR4CT_WSPTc12Bog2_B1=crrcMvb->getBool(0x642,18,7);

    BR4CT_WSPMP12Bog1_B1=crrcMvb->getBool(0x642,19,0);
    BR4CT_WSPMP12Bog2_B1=crrcMvb->getBool(0x642,19,1);
    BR4CT_WSPM12Bog1_B1=crrcMvb->getBool(0x642,19,2);
    BR4CT_WSPM12Bog2_B1=crrcMvb->getBool(0x642,19,3);
    BR4CT_EBActiTc12Bog1_B1=crrcMvb->getBool(0x642,19,4);
    BR4CT_EBActiTc12Bog2_B1=crrcMvb->getBool(0x642,19,5);
    BR4CT_EBActiMp12Bog1_B1=crrcMvb->getBool(0x642,19,6);
    BR4CT_EBActiMp12Bog2_B1=crrcMvb->getBool(0x642,19,7);

    BR4CT_EBActiM12Bog1_B1=crrcMvb->getBool(0x642,20,0);
    BR4CT_EBActiM12Bog2_B1=crrcMvb->getBool(0x642,20,1);
    BR4CT_EBAvailTc12Bog1_B1=crrcMvb->getBool(0x642,20,2);
    BR4CT_EBAvailTc12Bog2_B1=crrcMvb->getBool(0x642,20,3);
    BR4CT_EBAvailMp12Bog1_B1=crrcMvb->getBool(0x642,20,4);
    BR4CT_EBAvailMp12Bog2_B1=crrcMvb->getBool(0x642,20,5);
    BR4CT_EBAvailM12Bog1_B1=crrcMvb->getBool(0x642,20,6);
    BR4CT_EBAvailM12Bog2_B1=crrcMvb->getBool(0x642,20,7);

    BR4CT_PBReleasedTc12_B1=crrcMvb->getBool(0x642,21,0);
    BR4CT_PBReleasedMp12_B1=crrcMvb->getBool(0x642,21,1);
    BR4CT_PBReleasedM12_B1=crrcMvb->getBool(0x642,21,2);
    BR4CT_MGW_B1=crrcMvb->getBool(0x642,21,3);
    BR4CT_DISEBMp12_B1=crrcMvb->getBool(0x642,21,4);
    BR4CT_DISEBM12_B1=crrcMvb->getBool(0x642,21,5);
    BR4CT_CAN1_B1=crrcMvb->getBool(0x642,21,6);
    BR4CT_AllASPReady_B1=crrcMvb->getBool(0x642,21,7);

    BR4CT_SelfTestConT_B1=crrcMvb->getBool(0x642,22,0);
    BR4CT_RuningSelfTest_B1=crrcMvb->getBool(0x642,22,1);
    BR4CT_SelfTestOK_B1=crrcMvb->getBool(0x642,22,2);
    BR4CT_SelfTestFailed_B1=crrcMvb->getBool(0x642,22,3);
    BR4CT_LastSelfTestAborted_B1=crrcMvb->getBool(0x642,22,4);
    BR4CT_DiameterInput_ready_B1=crrcMvb->getBool(0x642,22,5);
    BR4CT_DiameterInput_status_B1=crrcMvb->getBool(0x642,22,6);
    BR4CT_EBActiInCAN_B1=crrcMvb->getBool(0x642,22,7);

    BR4CT_BrakeActInCAN_B1=crrcMvb->getBool(0x642,23,0);
    BR4CT_DriveActInCAN_B1=crrcMvb->getBool(0x642,23,1);
    BR4CT_FastBrakeActInCAN_B1=crrcMvb->getBool(0x642,23,2);
    BR4CT_EDM_B1=crrcMvb->getBool(0x642,23,3);
    BR4CT_ZeroSpeed_B1=crrcMvb->getBool(0x642,23,4);
    BR4CT_HBBrakeApply_B1=crrcMvb->getBool(0x642,23,5);
    BR4CT_30kphExceed_B1=crrcMvb->getBool(0x642,23,6);
    BR4CT_80kphExceed_B1=crrcMvb->getBool(0x642,23,7);

    BR4CT_MVBOK_B1=crrcMvb->getBool(0x642,24,0);

    BR4CT_BSRTc12Bog1_I16=crrcMvb->getSignedInt(0x643,0);
    BR4CT_BSRTc12Bog2_I16=crrcMvb->getSignedInt(0x643,2);
    BR4CT_BSRMp12Bog1_I16=crrcMvb->getSignedInt(0x643,4);
    BR4CT_BSRMp12Bog2_I16=crrcMvb->getSignedInt(0x643,6);
    BR4CT_BSRM12Bog1_I16=crrcMvb->getSignedInt(0x643,8);
    BR4CT_BSRM12Bog2_I16=crrcMvb->getSignedInt(0x643,10);
    BR4CT_BCPTc12Bog1_I16=crrcMvb->getSignedInt(0x643,12);
    BR4CT_BCPTc12Bog2_I16=crrcMvb->getSignedInt(0x643,14);
    BR4CT_BCPMp12Bog1_I16=crrcMvb->getSignedInt(0x643,16);
    BR4CT_BCPMp12Bog2_I16=crrcMvb->getSignedInt(0x643,18);
    BR4CT_BCPM12Bog1_I16=crrcMvb->getSignedInt(0x643,20);
    BR4CT_BCPM12Bog2_I16=crrcMvb->getSignedInt(0x643,22);
    BR4CT_PBPressureTc_I16=crrcMvb->getSignedInt(0x643,24);
    BR4CT_PBPressureMP_I16=crrcMvb->getSignedInt(0x643,26);
    BR4CT_PBPressureM_I16=crrcMvb->getSignedInt(0x643,28);

    BR4CT_BSRBog1Valid_Tc12_B1=crrcMvb->getBool(0x643,30,0);
    BR4CT_BSRBog2Valid_Tc12_B1=crrcMvb->getBool(0x643,30,1);
    BR4CT_BSRBog1Valid_Mp12_B1=crrcMvb->getBool(0x643,30,2);
    BR4CT_BSRBog2Valid_Mp12_B1=crrcMvb->getBool(0x643,30,3);
    BR4CT_BSRBog1Valid_M12_B1=crrcMvb->getBool(0x643,30,4);
    BR4CT_BSRBog2Valid_M12_B1=crrcMvb->getBool(0x643,30,5);
    BR4CT_BCPBog1Valid_Tc12_B1=crrcMvb->getBool(0x643,30,6);
    BR4CT_BCPBog2Valid_Tc12_B1=crrcMvb->getBool(0x643,30,7);

    BR4CT_BCPBog1Valid_Mp12_B1=crrcMvb->getBool(0x643,31,0);
    BR4CT_BCPBog2Valid_Mp12_B1=crrcMvb->getBool(0x643,31,1);
    BR4CT_BCPBog1Valid_M12_B1=crrcMvb->getBool(0x643,31,2);
    BR4CT_BCPBog2Valid_M12_B1=crrcMvb->getBool(0x643,31,3);
    BR4CT_PBPressValid_Tc12_B1=crrcMvb->getBool(0x643,31,4);
    BR4CT_PBPressValid_Mp12_B1=crrcMvb->getBool(0x643,31,5);
    BR4CT_PBPressValid_M12_B1=crrcMvb->getBool(0x643,31,6);

//    BR4CT_SpedSenrFauTc12Ax1_B1=crrcMvb->getBool(0x644,0,0);
//    BR4CT_SpedSenrFauTc12Ax2_B1=crrcMvb->getBool(0x644,0,1);
//    BR4CT_SpedSenrFauTc12Ax3_B1=crrcMvb->getBool(0x644,0,2);
//    BR4CT_SpedSenrFauTc12Ax4_B1=crrcMvb->getBool(0x644,0,3);
//    BR4CT_SpedSenrFauMp12Ax1_B1=crrcMvb->getBool(0x644,0,4);
//    BR4CT_SpedSenrFauMp12Ax2_B1=crrcMvb->getBool(0x644,0,5);
//    BR4CT_SpedSenrFauMp12Ax3_B1=crrcMvb->getBool(0x644,0,6);
//    BR4CT_SpedSenrFauMp12Ax4_B1=crrcMvb->getBool(0x644,0,7);

//    BR4CT_SpedSenrFauM12Ax1_B1=crrcMvb->getBool(0x644,1,0);
//    BR4CT_SpedSenrFauM12Ax2_B1=crrcMvb->getBool(0x644,1,1);
//    BR4CT_SpedSenrFauM12Ax3_B1=crrcMvb->getBool(0x644,1,2);
//    BR4CT_SpedSenrFauM12Ax4_B1=crrcMvb->getBool(0x644,1,3);

//    BR4CT_BSRLowTc12Bog1_B1=crrcMvb->getBool(0x644,2,0);
//    BR4CT_BSRLowTc12Bog2_B1=crrcMvb->getBool(0x644,2,1);
//    BR4CT_BSRLowMp12Bog1_B1=crrcMvb->getBool(0x644,2,2);
//    BR4CT_BSRLowMp12Bog2_B1=crrcMvb->getBool(0x644,2,3);
//    BR4CT_BSRLowM12Bog1_B1=crrcMvb->getBool(0x644,2,4);
//    BR4CT_BSRLowM12Bog2_B1=crrcMvb->getBool(0x644,2,5);

//    BR4CT_ASPOORTc12Bog1_B1=crrcMvb->getBool(0x644,3,0);
//    BR4CT_ASPOORTc12Bog2_B1=crrcMvb->getBool(0x644,3,1);
//    BR4CT_ASPOORMp12Bog1_B1=crrcMvb->getBool(0x644,3,2);
//    BR4CT_ASPOORMp12Bog2_B1=crrcMvb->getBool(0x644,3,3);
//    BR4CT_ASPOORM12Bog1_B1=crrcMvb->getBool(0x644,3,4);
//    BR4CT_ASPOORM12Bog2_B1=crrcMvb->getBool(0x644,3,5);

//    BR4CT_BrNotRelTc12Bog1_B1=crrcMvb->getBool(0x644,4,0);
//    BR4CT_BrNotRelTc12Bog2_B1=crrcMvb->getBool(0x644,4,1);
//    BR4CT_BrNotRelMp12Bog1_B1=crrcMvb->getBool(0x644,4,2);
//    BR4CT_BrNotRelMp12Bog2_B1=crrcMvb->getBool(0x644,4,3);
//    BR4CT_BrNotRelM12Bog1_B1=crrcMvb->getBool(0x644,4,4);
//    BR4CT_BrNotRelM12Bog2_B1=crrcMvb->getBool(0x644,4,5);

//    BR4CT_BCPLowTc12_B1=crrcMvb->getBool(0x644,5,0);
//    BR4CT_BCPLowMp12_B1=crrcMvb->getBool(0x644,5,1);
//    BR4CT_BCPLowM12_B1=crrcMvb->getBool(0x644,5,2);
//    BR4CT_SelfTest24h_B1=crrcMvb->getBool(0x644,5,3);
//    BR4CT_SelfTest26h_B1=crrcMvb->getBool(0x644,5,4);
//    BR4CT_MajorEvent_B1=crrcMvb->getBool(0x644,5,5);
//    BR4CT_MediumEvent_B1=crrcMvb->getBool(0x644,5,6);
//    BR4CT_MinorEvent_B1=crrcMvb->getBool(0x644,5,7);

//    BR4CT_Can1NotOK_B1=crrcMvb->getBool(0x644,6,0);
//    BR4CT_Can2NotOK_B1=crrcMvb->getBool(0x644,6,1);
//    BR4CT_AtLeastOnePBNotReleasedInCAN_B1=crrcMvb->getBool(0x644,6,2);
//    BR4CT_CommandInconsistentInCAN_B1=crrcMvb->getBool(0x644,6,3);

//    BR4CT_SeriousFaultTCBog1_B1=crrcMvb->getBool(0x644,7,0);
//    BR4CT_SeriousFaultTCBog2_B1=crrcMvb->getBool(0x644,7,1);
//    BR4CT_SeriousFaultMpBog1_B1=crrcMvb->getBool(0x644,7,2);
//    BR4CT_SeriousFaultMpBog2_B1=crrcMvb->getBool(0x644,7,3);
//    BR4CT_SeriousFaultMBog1_B1=crrcMvb->getBool(0x644,7,4);
//    BR4CT_SeriousFaultMBog2_B1=crrcMvb->getBool(0x644,7,5);

//    BR4CT_SlightFaultTCBog1_B1=crrcMvb->getBool(0x644,8,0);
//    BR4CT_SlightFaultTCBog2_B1=crrcMvb->getBool(0x644,8,1);
//    BR4CT_SlightFaultMpBog1_B1=crrcMvb->getBool(0x644,8,2);
//    BR4CT_SlightFaultMpBog2_B1=crrcMvb->getBool(0x644,8,3);
//    BR4CT_SlightFaultMBog1_B1=crrcMvb->getBool(0x644,8,4);
//    BR4CT_SlightFaultMBog2_B1=crrcMvb->getBool(0x644,8,5);

//    BR4CT_CodingFaultTCBog1_B1=crrcMvb->getBool(0x644,9,0);
//    BR4CT_CodingFaultTCBog2_B1=crrcMvb->getBool(0x644,9,1);
//    BR4CT_CodingFaultMpBog1_B1=crrcMvb->getBool(0x644,9,2);
//    BR4CT_CodingFaultMpBog2_B1=crrcMvb->getBool(0x644,9,3);
//    BR4CT_CodingFaultMBog1_B1=crrcMvb->getBool(0x644,9,4);
//    BR4CT_CodingFaultMBog2_B1=crrcMvb->getBool(0x644,9,5);

//    BR4CT_WSPTripTc11_B1=crrcMvb->getBool(0x644,10,0);
//    BR4CT_WSPTripTc12_B1=crrcMvb->getBool(0x644,10,1);
//    BR4CT_WSPTripTc13_B1=crrcMvb->getBool(0x644,10,2);
//    BR4CT_WSPTripTc14_B1=crrcMvb->getBool(0x644,10,3);
//    BR4CT_WSPTripMp11_B1=crrcMvb->getBool(0x644,10,4);
//    BR4CT_WSPTripMp12_B1=crrcMvb->getBool(0x644,10,5);
//    BR4CT_WSPTripMp13_B1=crrcMvb->getBool(0x644,10,6);
//    BR4CT_WSPTripMp14_B1=crrcMvb->getBool(0x644,10,7);

//    BR4CT_WSPTripM11_B1=crrcMvb->getBool(0x644,11,0);
//    BR4CT_WSPTripM12_B1=crrcMvb->getBool(0x644,11,1);
//    BR4CT_WSPTripM13_B1=crrcMvb->getBool(0x644,11,2);
//    BR4CT_WSPTripM14_B1=crrcMvb->getBool(0x644,11,3);


    /********************************************************CCU→BCU**********************************************/
    CTBR_Grade_I16=crrcMvb->getSignedInt(0x608,0);

    CTBR_StartSelfTest_B1=crrcMvb->getBool(0x608,2,0);
    CTBR_Brake_B1=crrcMvb->getBool(0x608,2,1);
    CTBR_Drive_B1=crrcMvb->getBool(0x608,2,2);
    CTBR_BrakeDemandValid_B1=crrcMvb->getBool(0x608,2,3);
    CTBR_ATOMod_B1=crrcMvb->getBool(0x608,2,4);
    CTBR_HBRel_B1=crrcMvb->getBool(0x608,2,5);
    CTBR_WheelDiameterInput_B1=crrcMvb->getBool(0x608,2,6);
    CTBR_EBFaded_B1=crrcMvb->getBool(0x608,2,7);

    CTBR_WheelSizeTC1_I16=crrcMvb->getSignedInt(0x608,12);
    CTBR_WheelSizeTC2_I16=crrcMvb->getSignedInt(0x608,14);


    /********************************************************SIV1→CCU**********************************************/
    AX1CT_DCUALifeSignal1_I16=crrcMvb->getSignedInt(0x501,0);
    AX1CT_DCVoltage_I16=crrcMvb->getSignedInt(0x501,2);
    AX1CT_AuxInvPower_I16=crrcMvb->getSignedInt(0x501,6);
    AX1CT_AuxInvStatus_I16=crrcMvb->getSignedInt(0x501,8);
    AX1CT_AuxInvLoadVoltage_I16=crrcMvb->getSignedInt(0x501,10);
    AX1CT_SystemFeedback_I16=crrcMvb->getSignedInt(0x501,12);
    AX1CT_BatteryTemp_I16=crrcMvb->getSignedInt(0x501,14);
    AX1CT_AuxInvLoadCurrent_I16=crrcMvb->getSignedInt(0x501,16);
    AX1CT_BCGEnergy_I16=crrcMvb->getSignedInt(0x501,20);
    AX1CT_DCCurrent_I16=crrcMvb->getSignedInt(0x501,22);

    AX1CT_ACMSamePhaseActived_B1=crrcMvb->getBool(0x501,28,3);
    AX1CT_BatteryStartLowVoltage_B1=crrcMvb->getBool(0x501,28,4);
    AX1CT_AuxInvCutFeedback_B1=crrcMvb->getBool(0x501,28,5);
    AX1CT_LineVoltageOk_B1=crrcMvb->getBool(0x501,28,6);

    AX1CT_AuxInvLoadBreakerClose_B1=crrcMvb->getBool(0x501,29,2);
    AX1CT_AuxInvVoltageValid_B1=crrcMvb->getBool(0x501,29,3);
    AX1CT_ACMLineActived_B1=crrcMvb->getBool(0x501,29,4);
    AX1CT_DCVoltageValid_B1=crrcMvb->getBool(0x501,29,7);

    AX1CT_BCMFlt_B1=crrcMvb->getBool(0x501,30,0);
    AX1CT_BCMCharging_B1=crrcMvb->getBool(0x501,30,1);

    AX1CT_BatteryTempValid_B1=crrcMvb->getBool(0x501,31,1);
    AX1CT_BCGFlt_B1=crrcMvb->getBool(0x501,31,3);
    AX1CT_PotentialInnerSC_B1=crrcMvb->getBool(0x501,31,4);
    AX1CT_PotentialOuterSC_B1=crrcMvb->getBool(0x501,31,5);
    AX1CT_DBreakerCloseFeedback_B1=crrcMvb->getBool(0x501,31,6);
    AX1CT_CBreakerCloseFeedback_B1=crrcMvb->getBool(0x501,31,7);

    AX1CT_DCUALifeSignal2_I16=crrcMvb->getSignedInt(0x502,0);
    AX1CT_BCGRadiatorTemp_I16=crrcMvb->getSignedInt(0x502,2);
    AX1CT_AuxInvRadiatorTemp_I16=crrcMvb->getSignedInt(0x502,4);
    AX1CT_AuxInvInnerAirTemp_I16=crrcMvb->getSignedInt(0x502,6);
    AX1CT_BatteryLineVoltage_I16=crrcMvb->getSignedInt(0x502,8);
    AX1CT_BatteryLineCurrent_I16=crrcMvb->getSignedInt(0x502,10);
    AX1CT_BatteryChargingCurrent_I16=crrcMvb->getSignedInt(0x502,12);
    AX1CT_AuxInvEnergy_I16=crrcMvb->getSignedInt(0x502,16);
    AX1CT_AuxInvWorkingTime_I16=crrcMvb->getSignedInt(0x502,18);
    AX1CT_SWVersion1_I16=crrcMvb->getSignedInt(0x502,20);
    AX1CT_SWVersion2_I16=crrcMvb->getSignedInt(0x502,22);
    AX1CT_SWVersion3_I16=crrcMvb->getSignedInt(0x502,24);
    AX1CT_SWVersion4_I16=crrcMvb->getSignedInt(0x502,26);

    AX1CT_PowerShieldClose_B1=crrcMvb->getBool(0x502,28,2);
    AX1CT_IESQ2_B1=crrcMvb->getBool(0x502,28,3);
    AX1CT_IESQ1_B1=crrcMvb->getBool(0x502,28,4);
    AX1CT_WorkShopPowerMode_B1=crrcMvb->getBool(0x502,28,5);
    AX1CT_PHFrontCoverClose_B1=crrcMvb->getBool(0x502,28,6);
    AX1CT_OVPRTempHigh_B1=crrcMvb->getBool(0x502,28,7);

    AX1CT_AuxInvOverPower_B1=crrcMvb->getBool(0x502,29,0);
    AX1CT_AuxInvInnerTempValid_B1=crrcMvb->getBool(0x502,29,1);
    AX1CT_OutsideFanFullSpeed_B1=crrcMvb->getBool(0x502,29,3);
    AX1CT_OutsideFanHalfSpeed_B1=crrcMvb->getBool(0x502,29,4);
    AX1CT_AuxInvRadiatorTempValid_B1=crrcMvb->getBool(0x502,29,6);
    AX1CT_BCGRadiatorTempValid_B1=crrcMvb->getBool(0x502,29,7);


    /********************************************************SIV2→CCU**********************************************/
    AX2CT_DCUALifeSignal1_I16=crrcMvb->getSignedInt(0x511,0);
    AX2CT_DCVoltage_I16=crrcMvb->getSignedInt(0x511,2);
    AX2CT_AuxInvPower_I16=crrcMvb->getSignedInt(0x511,6);
    AX2CT_AuxInvStatus_I16=crrcMvb->getSignedInt(0x511,8);
    AX2CT_AuxInvLoadVoltage_I16=crrcMvb->getSignedInt(0x511,10);
    AX2CT_SystemFeedback_I16=crrcMvb->getSignedInt(0x511,12);
    AX2CT_BatteryTemp_I16=crrcMvb->getSignedInt(0x511,14);
    AX2CT_AuxInvLoadCurrent_I16=crrcMvb->getSignedInt(0x511,16);
    AX2CT_BCGEnergy_I16=crrcMvb->getSignedInt(0x511,20);
    AX2CT_DCCurrent_I16=crrcMvb->getSignedInt(0x511,22);

    AX2CT_ACMSamePhaseActived_B1=crrcMvb->getBool(0x511,28,3);
    AX2CT_BatteryStartLowVoltage_B1=crrcMvb->getBool(0x511,28,4);
    AX2CT_AuxInvCutFeedback_B1=crrcMvb->getBool(0x511,28,5);
    AX2CT_LineVoltageOk_B1=crrcMvb->getBool(0x511,28,6);

    AX2CT_AuxInvLoadBreakerClose_B1=crrcMvb->getBool(0x511,29,2);
    AX2CT_AuxInvVoltageValid_B1=crrcMvb->getBool(0x511,29,3);
    AX2CT_ACMLineActived_B1=crrcMvb->getBool(0x511,29,4);
    AX2CT_DCVoltageValid_B1=crrcMvb->getBool(0x511,29,7);

    AX2CT_BCMFlt_B1=crrcMvb->getBool(0x511,30,0);
    AX2CT_BCMCharging_B1=crrcMvb->getBool(0x511,30,1);

    AX2CT_BatteryTempValid_B1=crrcMvb->getBool(0x511,31,1);
    AX2CT_BCGFlt_B1=crrcMvb->getBool(0x511,31,3);
    AX2CT_PotentialInnerSC_B1=crrcMvb->getBool(0x511,31,4);
    AX2CT_PotentialOuterSC_B1=crrcMvb->getBool(0x511,31,5);
    AX2CT_DBreakerCloseFeedback_B1=crrcMvb->getBool(0x511,31,6);
    AX2CT_CBreakerCloseFeedback_B1=crrcMvb->getBool(0x511,31,7);

    AX2CT_DCUALifeSignal2_I16=crrcMvb->getSignedInt(0x512,0);
    AX2CT_BCGRadiatorTemp_I16=crrcMvb->getSignedInt(0x512,2);
    AX2CT_AuxInvRadiatorTemp_I16=crrcMvb->getSignedInt(0x512,4);
    AX2CT_AuxInvInnerAirTemp_I16=crrcMvb->getSignedInt(0x512,6);
    AX2CT_BatteryLineVoltage_I16=crrcMvb->getSignedInt(0x512,8);
    AX2CT_BatteryLineCurrent_I16=crrcMvb->getSignedInt(0x512,10);
    AX2CT_BatteryChargingCurrent_I16=crrcMvb->getSignedInt(0x512,12);
    AX2CT_AuxInvEnergy_I16=crrcMvb->getSignedInt(0x512,16);
    AX2CT_AuxInvWorkingTime_I16=crrcMvb->getSignedInt(0x512,18);
    AX2CT_SWVersion1_I16=crrcMvb->getSignedInt(0x512,20);
    AX2CT_SWVersion2_I16=crrcMvb->getSignedInt(0x512,22);
    AX2CT_SWVersion3_I16=crrcMvb->getSignedInt(0x512,24);
    AX2CT_SWVersion4_I16=crrcMvb->getSignedInt(0x512,26);

    AX2CT_PowerShieldClose_B1=crrcMvb->getBool(0x512,28,2);
    AX2CT_IESQ2_B1=crrcMvb->getBool(0x512,28,3);
    AX2CT_IESQ1_B1=crrcMvb->getBool(0x512,28,4);
    AX2CT_WorkShopPowerMode_B1=crrcMvb->getBool(0x512,28,5);
    AX2CT_PHFrontCoverClose_B1=crrcMvb->getBool(0x512,28,6);
    AX2CT_OVPRTempHigh_B1=crrcMvb->getBool(0x512,28,7);

    AX2CT_AuxInvOverPower_B1=crrcMvb->getBool(0x512,29,0);
    AX2CT_AuxInvInnerTempValid_B1=crrcMvb->getBool(0x512,29,1);
    AX2CT_OutsideFanFullSpeed_B1=crrcMvb->getBool(0x512,29,3);
    AX2CT_OutsideFanHalfSpeed_B1=crrcMvb->getBool(0x512,29,4);
    AX2CT_AuxInvRadiatorTempValid_B1=crrcMvb->getBool(0x512,29,6);
    AX2CT_BCGRadiatorTempValid_B1=crrcMvb->getBool(0x512,29,7);

    /********************************************************SIV3→CCU**********************************************/
    AX3CT_DCUALifeSignal1_I16=crrcMvb->getSignedInt(0x531,0);
    AX3CT_DCVoltage_I16=crrcMvb->getSignedInt(0x531,2);
    AX3CT_AuxInvPower_I16=crrcMvb->getSignedInt(0x531,6);
    AX3CT_AuxInvStatus_I16=crrcMvb->getSignedInt(0x531,8);
    AX3CT_AuxInvLoadVoltage_I16=crrcMvb->getSignedInt(0x531,10);
    AX3CT_SystemFeedback_I16=crrcMvb->getSignedInt(0x531,12);
    AX3CT_BatteryTemp_I16=crrcMvb->getSignedInt(0x531,14);
    AX3CT_AuxInvLoadCurrent_I16=crrcMvb->getSignedInt(0x531,16);
    AX3CT_BCGEnergy_I16=crrcMvb->getSignedInt(0x531,20);
    AX3CT_DCCurrent_I16=crrcMvb->getSignedInt(0x531,22);

    AX3CT_ACMSamePhaseActived_B1=crrcMvb->getBool(0x531,28,3);
    AX3CT_BatteryStartLowVoltage_B1=crrcMvb->getBool(0x531,28,4);
    AX3CT_AuxInvCutFeedback_B1=crrcMvb->getBool(0x531,28,5);
    AX3CT_LineVoltageOk_B1=crrcMvb->getBool(0x531,28,6);

    AX3CT_AuxInvLoadBreakerClose_B1=crrcMvb->getBool(0x531,29,2);
    AX3CT_AuxInvVoltageValid_B1=crrcMvb->getBool(0x531,29,3);
    AX3CT_ACMLineActived_B1=crrcMvb->getBool(0x531,29,4);
    AX3CT_DCVoltageValid_B1=crrcMvb->getBool(0x531,29,7);

    AX3CT_BCMFlt_B1=crrcMvb->getBool(0x531,30,0);
    AX3CT_BCMCharging_B1=crrcMvb->getBool(0x531,30,1);

    AX3CT_BatteryTempValid_B1=crrcMvb->getBool(0x531,31,1);
    AX3CT_BCGFlt_B1=crrcMvb->getBool(0x531,31,3);
    AX3CT_PotentialInnerSC_B1=crrcMvb->getBool(0x531,31,4);
    AX3CT_PotentialOuterSC_B1=crrcMvb->getBool(0x531,31,5);
    AX3CT_DBreakerCloseFeedback_B1=crrcMvb->getBool(0x531,31,6);
    AX3CT_CBreakerCloseFeedback_B1=crrcMvb->getBool(0x531,31,7);

    AX3CT_DCUALifeSignal2_I16=crrcMvb->getSignedInt(0x532,0);
    AX3CT_BCGRadiatorTemp_I16=crrcMvb->getSignedInt(0x532,2);
    AX3CT_AuxInvRadiatorTemp_I16=crrcMvb->getSignedInt(0x532,4);
    AX3CT_AuxInvInnerAirTemp_I16=crrcMvb->getSignedInt(0x532,6);
    AX3CT_BatteryLineVoltage_I16=crrcMvb->getSignedInt(0x532,8);
    AX3CT_BatteryLineCurrent_I16=crrcMvb->getSignedInt(0x532,10);
    AX3CT_BatteryChargingCurrent_I16=crrcMvb->getSignedInt(0x532,12);
    AX3CT_AuxInvEnergy_I16=crrcMvb->getSignedInt(0x532,16);
    AX3CT_AuxInvWorkingTime_I16=crrcMvb->getSignedInt(0x532,18);
    AX3CT_SWVersion1_I16=crrcMvb->getSignedInt(0x532,20);
    AX3CT_SWVersion2_I16=crrcMvb->getSignedInt(0x532,22);
    AX3CT_SWVersion3_I16=crrcMvb->getSignedInt(0x532,24);
    AX3CT_SWVersion4_I16=crrcMvb->getSignedInt(0x532,26);

    AX3CT_PowerShieldClose_B1=crrcMvb->getBool(0x532,28,2);
    AX3CT_IESQ2_B1=crrcMvb->getBool(0x532,28,3);
    AX3CT_IESQ1_B1=crrcMvb->getBool(0x532,28,4);
    AX3CT_WorkShopPowerMode_B1=crrcMvb->getBool(0x532,28,5);
    AX3CT_PHFrontCoverClose_B1=crrcMvb->getBool(0x532,28,6);
    AX3CT_OVPRTempHigh_B1=crrcMvb->getBool(0x532,28,7);

    AX3CT_AuxInvOverPower_B1=crrcMvb->getBool(0x532,29,0);
    AX3CT_AuxInvInnerTempValid_B1=crrcMvb->getBool(0x532,29,1);
    AX3CT_OutsideFanFullSpeed_B1=crrcMvb->getBool(0x532,29,3);
    AX3CT_OutsideFanHalfSpeed_B1=crrcMvb->getBool(0x532,29,4);
    AX3CT_AuxInvRadiatorTempValid_B1=crrcMvb->getBool(0x532,29,6);
    AX3CT_BCGRadiatorTempValid_B1=crrcMvb->getBool(0x532,29,7);

    /********************************************************SIV4→CCU**********************************************/
    AX4CT_DCUALifeSignal1_I16=crrcMvb->getSignedInt(0x521,0);
    AX4CT_DCVoltage_I16=crrcMvb->getSignedInt(0x521,2);
    AX4CT_AuxInvPower_I16=crrcMvb->getSignedInt(0x521,6);
    AX4CT_AuxInvStatus_I16=crrcMvb->getSignedInt(0x521,8);
    AX4CT_AuxInvLoadVoltage_I16=crrcMvb->getSignedInt(0x521,10);
    AX4CT_SystemFeedback_I16=crrcMvb->getSignedInt(0x521,12);
    AX4CT_BatteryTemp_I16=crrcMvb->getSignedInt(0x521,14);
    AX4CT_AuxInvLoadCurrent_I16=crrcMvb->getSignedInt(0x521,16);
    AX4CT_BCGEnergy_I16=crrcMvb->getSignedInt(0x521,20);
    AX4CT_DCCurrent_I16=crrcMvb->getSignedInt(0x521,22);

    AX4CT_ACMSamePhaseActived_B1=crrcMvb->getBool(0x521,28,3);
    AX4CT_BatteryStartLowVoltage_B1=crrcMvb->getBool(0x521,28,4);
    AX4CT_AuxInvCutFeedback_B1=crrcMvb->getBool(0x521,28,5);
    AX4CT_LineVoltageOk_B1=crrcMvb->getBool(0x521,28,6);

    AX4CT_AuxInvLoadBreakerClose_B1=crrcMvb->getBool(0x521,29,2);
    AX4CT_AuxInvVoltageValid_B1=crrcMvb->getBool(0x521,29,3);
    AX4CT_ACMLineActived_B1=crrcMvb->getBool(0x521,29,4);
    AX4CT_DCVoltageValid_B1=crrcMvb->getBool(0x521,29,7);

    AX4CT_BCMFlt_B1=crrcMvb->getBool(0x521,30,0);
    AX4CT_BCMCharging_B1=crrcMvb->getBool(0x521,30,1);

    AX4CT_BatteryTempValid_B1=crrcMvb->getBool(0x521,31,1);
    AX4CT_BCGFlt_B1=crrcMvb->getBool(0x521,31,3);
    AX4CT_PotentialInnerSC_B1=crrcMvb->getBool(0x521,31,4);
    AX4CT_PotentialOuterSC_B1=crrcMvb->getBool(0x521,31,5);
    AX4CT_DBreakerCloseFeedback_B1=crrcMvb->getBool(0x521,31,6);
    AX4CT_CBreakerCloseFeedback_B1=crrcMvb->getBool(0x521,31,7);

    AX4CT_DCUALifeSignal2_I16=crrcMvb->getSignedInt(0x522,0);
    AX4CT_BCGRadiatorTemp_I16=crrcMvb->getSignedInt(0x522,2);
    AX4CT_AuxInvRadiatorTemp_I16=crrcMvb->getSignedInt(0x522,4);
    AX4CT_AuxInvInnerAirTemp_I16=crrcMvb->getSignedInt(0x522,6);
    AX4CT_BatteryLineVoltage_I16=crrcMvb->getSignedInt(0x522,8);
    AX4CT_BatteryLineCurrent_I16=crrcMvb->getSignedInt(0x522,10);
    AX4CT_BatteryChargingCurrent_I16=crrcMvb->getSignedInt(0x522,12);
    AX4CT_AuxInvEnergy_I16=crrcMvb->getSignedInt(0x522,16);
    AX4CT_AuxInvWorkingTime_I16=crrcMvb->getSignedInt(0x522,18);
    AX4CT_SWVersion1_I16=crrcMvb->getSignedInt(0x522,20);
    AX4CT_SWVersion2_I16=crrcMvb->getSignedInt(0x522,22);
    AX4CT_SWVersion3_I16=crrcMvb->getSignedInt(0x522,24);
    AX4CT_SWVersion4_I16=crrcMvb->getSignedInt(0x522,26);

    AX4CT_PowerShieldClose_B1=crrcMvb->getBool(0x522,28,2);
    AX4CT_IESQ2_B1=crrcMvb->getBool(0x522,28,3);
    AX4CT_IESQ1_B1=crrcMvb->getBool(0x522,28,4);
    AX4CT_WorkShopPowerMode_B1=crrcMvb->getBool(0x522,28,5);
    AX4CT_PHFrontCoverClose_B1=crrcMvb->getBool(0x522,28,6);
    AX4CT_OVPRTempHigh_B1=crrcMvb->getBool(0x522,28,7);

    AX4CT_AuxInvOverPower_B1=crrcMvb->getBool(0x522,29,0);
    AX4CT_AuxInvInnerTempValid_B1=crrcMvb->getBool(0x522,29,1);
    AX4CT_OutsideFanFullSpeed_B1=crrcMvb->getBool(0x522,29,3);
    AX4CT_OutsideFanHalfSpeed_B1=crrcMvb->getBool(0x522,29,4);
    AX4CT_AuxInvRadiatorTempValid_B1=crrcMvb->getBool(0x522,29,6);
    AX4CT_BCGRadiatorTempValid_B1=crrcMvb->getBool(0x522,29,7);

    /****************************************************CCU→SIV1******************************************************/
    CTAX1_CCULifeSignal0_I16=crrcMvb->getSignedInt(0x508,0);
    CTAX1_CCULifeSignal1_I16=crrcMvb->getSignedInt(0x509,0);
    CTAX1_TrainSpeed_I16=crrcMvb->getSignedInt(0x509,6);
    CTAX1_ACMChoice_I16=crrcMvb->getSignedInt(0x509,8);

    CTAX1_ShortCurcuitCheck_B1=crrcMvb->getBool(0x509,12,5);
    CTAX1_LinVoltageOK_B1=crrcMvb->getBool(0x509,12,6);

    CTAX1_AuxInvIdleStartForbidden_B1=crrcMvb->getBool(0x509,12,2);
    CTAX1_AuxInvCutOff_B1=crrcMvb->getBool(0x509,12,3);
    CTAX1_AuxInvStartForbidden_B1=crrcMvb->getBool(0x509,12,6);
    CTAX1_ODBS2OK_B1=crrcMvb->getBool(0x509,15,7);

    CTAX1_CCULifeSignal2_I16=crrcMvb->getSignedInt(0x50A,0);
    CTAX1_EnvieronmetalTemp_I16=crrcMvb->getSignedInt(0x50A,12);

    CTAX1_ODBS1OK_B1=crrcMvb->getBool(0x50A,15,3);
    CTAX1_ClearDataCounter_B1=crrcMvb->getBool(0x50A,15,6);
    CTAX1_ResetAuxInv_B1=crrcMvb->getBool(0x50A,15,7);

    /****************************************************CCU→SIV2******************************************************/
    CTAX2_CCULifeSignal0_I16=crrcMvb->getSignedInt(0x518,0);
    CTAX2_CCULifeSignal1_I16=crrcMvb->getSignedInt(0x519,0);
    CTAX2_TrainSpeed_I16=crrcMvb->getSignedInt(0x519,6);
    CTAX2_ACMChoice_I16=crrcMvb->getSignedInt(0x519,8);

    CTAX2_ShortCurcuitCheck_B1=crrcMvb->getBool(0x519,12,5);
    CTAX2_LinVoltageOK_B1=crrcMvb->getBool(0x519,12,6);

    CTAX2_AuxInvIdleStartForbidden_B1=crrcMvb->getBool(0x519,12,2);
    CTAX2_AuxInvCutOff_B1=crrcMvb->getBool(0x519,12,3);
    CTAX2_AuxInvStartForbidden_B1=crrcMvb->getBool(0x519,12,6);
    CTAX2_ODBS2OK_B1=crrcMvb->getBool(0x519,15,7);

    CTAX2_CCULifeSignal2_I16=crrcMvb->getSignedInt(0x51A,0);
    CTAX2_EnvieronmetalTemp_I16=crrcMvb->getSignedInt(0x51A,12);

    CTAX2_ODBS1OK_B1=crrcMvb->getBool(0x51A,15,3);
    CTAX2_ClearDataCounter_B1=crrcMvb->getBool(0x51A,15,6);
    CTAX2_ResetAuxInv_B1=crrcMvb->getBool(0x51A,15,7);

    /****************************************************CCU→SIV3******************************************************/
    CTAX3_CCULifeSignal0_I16=crrcMvb->getSignedInt(0x538,0);
    CTAX3_CCULifeSignal1_I16=crrcMvb->getSignedInt(0x539,0);
    CTAX3_TrainSpeed_I16=crrcMvb->getSignedInt(0x539,6);
    CTAX3_ACMChoice_I16=crrcMvb->getSignedInt(0x539,8);

    CTAX3_ShortCurcuitCheck_B1=crrcMvb->getBool(0x539,12,5);
    CTAX3_LinVoltageOK_B1=crrcMvb->getBool(0x539,12,6);

    CTAX3_AuxInvIdleStartForbidden_B1=crrcMvb->getBool(0x539,12,2);
    CTAX3_AuxInvCutOff_B1=crrcMvb->getBool(0x539,12,3);
    CTAX3_AuxInvStartForbidden_B1=crrcMvb->getBool(0x539,12,6);
    CTAX3_ODBS2OK_B1=crrcMvb->getBool(0x539,15,7);

    CTAX3_CCULifeSignal2_I16=crrcMvb->getSignedInt(0x53A,0);
    CTAX3_EnvieronmetalTemp_I16=crrcMvb->getSignedInt(0x53A,12);

    CTAX3_ODBS1OK_B1=crrcMvb->getBool(0x53A,15,3);
    CTAX3_ClearDataCounter_B1=crrcMvb->getBool(0x53A,15,6);
    CTAX3_ResetAuxInv_B1=crrcMvb->getBool(0x53A,15,7);

    /****************************************************CCU→SIV4******************************************************/
    CTAX4_CCULifeSignal0_I16=crrcMvb->getSignedInt(0x528,0);
    CTAX4_CCULifeSignal1_I16=crrcMvb->getSignedInt(0x529,0);
    CTAX4_TrainSpeed_I16=crrcMvb->getSignedInt(0x529,6);
    CTAX4_ACMChoice_I16=crrcMvb->getSignedInt(0x529,8);

    CTAX4_ShortCurcuitCheck_B1=crrcMvb->getBool(0x529,12,5);
    CTAX4_LinVoltageOK_B1=crrcMvb->getBool(0x529,12,6);

    CTAX4_AuxInvIdleStartForbidden_B1=crrcMvb->getBool(0x529,12,2);
    CTAX4_AuxInvCutOff_B1=crrcMvb->getBool(0x529,12,3);
    CTAX4_AuxInvStartForbidden_B1=crrcMvb->getBool(0x529,12,6);
    CTAX4_ODBS2OK_B1=crrcMvb->getBool(0x529,15,7);

    CTAX4_CCULifeSignal2_I16=crrcMvb->getSignedInt(0x52A,0);
    CTAX4_EnvieronmetalTemp_I16=crrcMvb->getSignedInt(0x52A,12);

    CTAX4_ODBS1OK_B1=crrcMvb->getBool(0x52A,15,3);
    CTAX4_ClearDataCounter_B1=crrcMvb->getBool(0x52A,15,6);
    CTAX4_ResetAuxInv_B1=crrcMvb->getBool(0x52A,15,7);

    /****************************************************EDCU1→CCU*******************************************************/
    DR1CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x710,1,7);
    DR1CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x710,1,6);
    DR1CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x710,1,5);
    DR1CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x710,1,4);
    DR1CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x710,1,3);
    DR1CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x710,1,2);
    DR1CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x710,1,1);
    DR1CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x710,1,0);
    DR1CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x710,0,7);
    DR1CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x710,0,6);
    DR1CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x710,0,5);
    DR1CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x710,0,4);
    DR1CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x710,0,3);
    DR1CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x710,0,2);
    DR1CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x710,0,1);
    DR1CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x710,0,0);

    DR1CT_OprSt_U16=crrcMvb->getUnsignedInt(0x710,20);

    DR1CT_EDCU1Vld_B1=crrcMvb->getBool(0x710,23,7);
    DR1CT_EDCU2Vld_B1=crrcMvb->getBool(0x710,23,6);
    DR1CT_EDCU3Vld_B1=crrcMvb->getBool(0x710,23,5);
    DR1CT_EDCU4Vld_B1=crrcMvb->getBool(0x710,23,4);
    DR1CT_EDCU5Vld_B1=crrcMvb->getBool(0x710,23,3);
    DR1CT_EDCU6Vld_B1=crrcMvb->getBool(0x710,23,2);
    DR1CT_EDCU7Vld_B1=crrcMvb->getBool(0x710,23,1);
    DR1CT_EDCU8Vld_B1=crrcMvb->getBool(0x710,23,0);

    DR1CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x710,24);
    DR1CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x710,26);

    DR1CT_CanLineBreak_B1=crrcMvb->getBool(0x710,29,7);
    DR1CT_MVBLAT_B1=crrcMvb->getBool(0x710,29,6);
    DR1CT_MVBRLD_B1=crrcMvb->getBool(0x710,29,5);

//    DR1CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x711,1,7);
//    DR1CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x711,1,6);
//    DR1CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x711,1,5);
//    DR1CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x711,1,4);
//    DR1CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x711,1,3);
//    DR1CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x711,1,2);
//    DR1CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x711,1,1);
//    DR1CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x711,1,0);

//    DR1CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x711,0,6);
//    DR1CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x711,0,5);
//    DR1CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x711,0,4);
//    DR1CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x711,0,3);
//    DR1CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x711,0,2);
//    DR1CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x711,0,1);
//    DR1CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x711,0,0);

//    DR1CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x711,3,7);
//    DR1CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x711,3,6);
//    DR1CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x711,3,0);

//    DR1CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x712,0);
//    DR1CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x712,1);
//    DR1CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x712,2);
//    DR1CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x712,3);
//    DR1CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x712,4);
//    DR1CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x712,5);
//    DR1CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x712,6);
//    DR1CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x712,7);
//    DR1CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x712,8);
//    DR1CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x712,9);
//    DR1CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x712,10);
//    DR1CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x712,11);
//    DR1CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x712,12);
//    DR1CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x712,13);
//    DR1CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x712,14);
//    DR1CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x712,15);

    /****************************************************EDCU2→CCU*******************************************************/
    DR2CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x720,1,7);
    DR2CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x720,1,6);
    DR2CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x720,1,5);
    DR2CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x720,1,4);
    DR2CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x720,1,3);
    DR2CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x720,1,2);
    DR2CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x720,1,1);
    DR2CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x720,1,0);
    DR2CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x720,0,7);
    DR2CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x720,0,6);
    DR2CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x720,0,5);
    DR2CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x720,0,4);
    DR2CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x720,0,3);
    DR2CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x720,0,2);
    DR2CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x720,0,1);
    DR2CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x720,0,0);

    DR2CT_OprSt_U16=crrcMvb->getUnsignedInt(0x720,20);

    DR2CT_EDCU1Vld_B1=crrcMvb->getBool(0x720,23,7);
    DR2CT_EDCU2Vld_B1=crrcMvb->getBool(0x720,23,6);
    DR2CT_EDCU3Vld_B1=crrcMvb->getBool(0x720,23,5);
    DR2CT_EDCU4Vld_B1=crrcMvb->getBool(0x720,23,4);
    DR2CT_EDCU5Vld_B1=crrcMvb->getBool(0x720,23,3);
    DR2CT_EDCU6Vld_B1=crrcMvb->getBool(0x720,23,2);
    DR2CT_EDCU7Vld_B1=crrcMvb->getBool(0x720,23,1);
    DR2CT_EDCU8Vld_B1=crrcMvb->getBool(0x720,23,0);

    DR2CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x720,24);
    DR2CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x720,26);

    DR2CT_CanLineBreak_B1=crrcMvb->getBool(0x720,29,7);
    DR2CT_MVBLAT_B1=crrcMvb->getBool(0x720,29,6);
    DR2CT_MVBRLD_B1=crrcMvb->getBool(0x720,29,5);

//    DR2CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x721,1,7);
//    DR2CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x721,1,6);
//    DR2CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x721,1,5);
//    DR2CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x721,1,4);
//    DR2CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x721,1,3);
//    DR2CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x721,1,2);
//    DR2CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x721,1,1);
//    DR2CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x721,1,0);

//    DR2CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x721,0,6);
//    DR2CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x721,0,5);
//    DR2CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x721,0,4);
//    DR2CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x721,0,3);
//    DR2CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x721,0,2);
//    DR2CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x721,0,1);
//    DR2CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x721,0,0);

//    DR2CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x721,3,7);
//    DR2CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x721,3,6);
//    DR2CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x721,3,0);

//    DR2CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x722,0);
//    DR2CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x722,1);
//    DR2CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x722,2);
//    DR2CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x722,3);
//    DR2CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x722,4);
//    DR2CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x722,5);
//    DR2CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x722,6);
//    DR2CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x722,7);
//    DR2CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x722,8);
//    DR2CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x722,9);
//    DR2CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x722,10);
//    DR2CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x722,11);
//    DR2CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x722,12);
//    DR2CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x722,13);
//    DR2CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x722,14);
//    DR2CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x722,15);

    /****************************************************EDCU3→CCU*******************************************************/
    DR3CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x730,1,7);
    DR3CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x730,1,6);
    DR3CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x730,1,5);
    DR3CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x730,1,4);
    DR3CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x730,1,3);
    DR3CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x730,1,2);
    DR3CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x730,1,1);
    DR3CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x730,1,0);
    DR3CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x730,0,7);
    DR3CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x730,0,6);
    DR3CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x730,0,5);
    DR3CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x730,0,4);
    DR3CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x730,0,3);
    DR3CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x730,0,2);
    DR3CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x730,0,1);
    DR3CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x730,0,0);

    DR3CT_OprSt_U16=crrcMvb->getUnsignedInt(0x730,20);

    DR3CT_EDCU1Vld_B1=crrcMvb->getBool(0x730,23,7);
    DR3CT_EDCU2Vld_B1=crrcMvb->getBool(0x730,23,6);
    DR3CT_EDCU3Vld_B1=crrcMvb->getBool(0x730,23,5);
    DR3CT_EDCU4Vld_B1=crrcMvb->getBool(0x730,23,4);
    DR3CT_EDCU5Vld_B1=crrcMvb->getBool(0x730,23,3);
    DR3CT_EDCU6Vld_B1=crrcMvb->getBool(0x730,23,2);
    DR3CT_EDCU7Vld_B1=crrcMvb->getBool(0x730,23,1);
    DR3CT_EDCU8Vld_B1=crrcMvb->getBool(0x730,23,0);

    DR3CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x730,24);
    DR3CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x730,26);

    DR3CT_CanLineBreak_B1=crrcMvb->getBool(0x730,29,7);
    DR3CT_MVBLAT_B1=crrcMvb->getBool(0x730,29,6);
    DR3CT_MVBRLD_B1=crrcMvb->getBool(0x730,29,5);

//    DR3CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x731,1,7);
//    DR3CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x731,1,6);
//    DR3CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x731,1,5);
//    DR3CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x731,1,4);
//    DR3CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x731,1,3);
//    DR3CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x731,1,2);
//    DR3CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x731,1,1);
//    DR3CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x731,1,0);

//    DR3CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x731,0,6);
//    DR3CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x731,0,5);
//    DR3CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x731,0,4);
//    DR3CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x731,0,3);
//    DR3CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x731,0,2);
//    DR3CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x731,0,1);
//    DR3CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x731,0,0);

//    DR3CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x731,3,7);
//    DR3CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x731,3,6);
//    DR3CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x731,3,0);

//    DR3CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x732,0);
//    DR3CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x732,1);
//    DR3CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x732,2);
//    DR3CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x732,3);
//    DR3CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x732,4);
//    DR3CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x732,5);
//    DR3CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x732,6);
//    DR3CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x732,7);
//    DR3CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x732,8);
//    DR3CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x732,9);
//    DR3CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x732,10);
//    DR3CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x732,11);
//    DR3CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x732,12);
//    DR3CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x732,13);
//    DR3CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x732,14);
//    DR3CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x732,15);

    /****************************************************EDCU4→CCU*******************************************************/
    DR4CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x740,1,7);
    DR4CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x740,1,6);
    DR4CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x740,1,5);
    DR4CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x740,1,4);
    DR4CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x740,1,3);
    DR4CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x740,1,2);
    DR4CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x740,1,1);
    DR4CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x740,1,0);
    DR4CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x740,0,7);
    DR4CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x740,0,6);
    DR4CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x740,0,5);
    DR4CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x740,0,4);
    DR4CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x740,0,3);
    DR4CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x740,0,2);
    DR4CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x740,0,1);
    DR4CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x740,0,0);

    DR4CT_OprSt_U16=crrcMvb->getUnsignedInt(0x740,20);

    DR4CT_EDCU1Vld_B1=crrcMvb->getBool(0x740,23,7);
    DR4CT_EDCU2Vld_B1=crrcMvb->getBool(0x740,23,6);
    DR4CT_EDCU3Vld_B1=crrcMvb->getBool(0x740,23,5);
    DR4CT_EDCU4Vld_B1=crrcMvb->getBool(0x740,23,4);
    DR4CT_EDCU5Vld_B1=crrcMvb->getBool(0x740,23,3);
    DR4CT_EDCU6Vld_B1=crrcMvb->getBool(0x740,23,2);
    DR4CT_EDCU7Vld_B1=crrcMvb->getBool(0x740,23,1);
    DR4CT_EDCU8Vld_B1=crrcMvb->getBool(0x740,23,0);

    DR4CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x740,24);
    DR4CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x740,26);

    DR4CT_CanLineBreak_B1=crrcMvb->getBool(0x740,29,7);
    DR4CT_MVBLAT_B1=crrcMvb->getBool(0x740,29,6);
    DR4CT_MVBRLD_B1=crrcMvb->getBool(0x740,29,5);

//    DR4CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x741,1,7);
//    DR4CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x741,1,6);
//    DR4CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x741,1,5);
//    DR4CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x741,1,4);
//    DR4CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x741,1,3);
//    DR4CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x741,1,2);
//    DR4CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x741,1,1);
//    DR4CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x741,1,0);

//    DR4CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x741,0,6);
//    DR4CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x741,0,5);
//    DR4CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x741,0,4);
//    DR4CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x741,0,3);
//    DR4CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x741,0,2);
//    DR4CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x741,0,1);
//    DR4CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x741,0,0);

//    DR4CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x741,3,7);
//    DR4CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x741,3,6);
//    DR4CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x741,3,0);

//    DR4CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x742,0);
//    DR4CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x742,1);
//    DR4CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x742,2);
//    DR4CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x742,3);
//    DR4CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x742,4);
//    DR4CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x742,5);
//    DR4CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x742,6);
//    DR4CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x742,7);
//    DR4CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x742,8);
//    DR4CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x742,9);
//    DR4CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x742,10);
//    DR4CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x742,11);
//    DR4CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x742,12);
//    DR4CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x742,13);
//    DR4CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x742,14);
//    DR4CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x742,15);

    /****************************************************EDCU5→CCU*******************************************************/
    DR5CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x750,1,7);
    DR5CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x750,1,6);
    DR5CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x750,1,5);
    DR5CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x750,1,4);
    DR5CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x750,1,3);
    DR5CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x750,1,2);
    DR5CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x750,1,1);
    DR5CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x750,1,0);
    DR5CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x750,0,7);
    DR5CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x750,0,6);
    DR5CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x750,0,5);
    DR5CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x750,0,4);
    DR5CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x750,0,3);
    DR5CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x750,0,2);
    DR5CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x750,0,1);
    DR5CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x750,0,0);

    DR5CT_OprSt_U16=crrcMvb->getUnsignedInt(0x750,20);

    DR5CT_EDCU1Vld_B1=crrcMvb->getBool(0x750,23,7);
    DR5CT_EDCU2Vld_B1=crrcMvb->getBool(0x750,23,6);
    DR5CT_EDCU3Vld_B1=crrcMvb->getBool(0x750,23,5);
    DR5CT_EDCU4Vld_B1=crrcMvb->getBool(0x750,23,4);
    DR5CT_EDCU5Vld_B1=crrcMvb->getBool(0x750,23,3);
    DR5CT_EDCU6Vld_B1=crrcMvb->getBool(0x750,23,2);
    DR5CT_EDCU7Vld_B1=crrcMvb->getBool(0x750,23,1);
    DR5CT_EDCU8Vld_B1=crrcMvb->getBool(0x750,23,0);

    DR5CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x750,24);
    DR5CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x750,26);

    DR5CT_CanLineBreak_B1=crrcMvb->getBool(0x750,29,7);
    DR5CT_MVBLAT_B1=crrcMvb->getBool(0x750,29,6);
    DR5CT_MVBRLD_B1=crrcMvb->getBool(0x750,29,5);

//    DR5CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x751,1,7);
//    DR5CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x751,1,6);
//    DR5CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x751,1,5);
//    DR5CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x751,1,4);
//    DR5CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x751,1,3);
//    DR5CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x751,1,2);
//    DR5CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x751,1,1);
//    DR5CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x751,1,0);

//    DR5CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x751,0,6);
//    DR5CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x751,0,5);
//    DR5CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x751,0,4);
//    DR5CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x751,0,3);
//    DR5CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x751,0,2);
//    DR5CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x751,0,1);
//    DR5CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x751,0,0);

//    DR5CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x751,3,7);
//    DR5CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x751,3,6);
//    DR5CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x751,3,0);

//    DR5CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x752,0);
//    DR5CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x752,1);
//    DR5CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x752,2);
//    DR5CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x752,3);
//    DR5CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x752,4);
//    DR5CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x752,5);
//    DR5CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x752,6);
//    DR5CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x752,7);
//    DR5CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x752,8);
//    DR5CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x752,9);
//    DR5CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x752,10);
//    DR5CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x752,11);
//    DR5CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x752,12);
//    DR5CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x752,13);
//    DR5CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x752,14);
//    DR5CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x752,15);

    /****************************************************EDCU6→CCU*******************************************************/
    DR6CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x760,1,7);
    DR6CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x760,1,6);
    DR6CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x760,1,5);
    DR6CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x760,1,4);
    DR6CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x760,1,3);
    DR6CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x760,1,2);
    DR6CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x760,1,1);
    DR6CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x760,1,0);
    DR6CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x760,0,7);
    DR6CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x760,0,6);
    DR6CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x760,0,5);
    DR6CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x760,0,4);
    DR6CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x760,0,3);
    DR6CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x760,0,2);
    DR6CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x760,0,1);
    DR6CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x760,0,0);

    DR6CT_OprSt_U16=crrcMvb->getUnsignedInt(0x760,20);

    DR6CT_EDCU1Vld_B1=crrcMvb->getBool(0x760,23,7);
    DR6CT_EDCU2Vld_B1=crrcMvb->getBool(0x760,23,6);
    DR6CT_EDCU3Vld_B1=crrcMvb->getBool(0x760,23,5);
    DR6CT_EDCU4Vld_B1=crrcMvb->getBool(0x760,23,4);
    DR6CT_EDCU5Vld_B1=crrcMvb->getBool(0x760,23,3);
    DR6CT_EDCU6Vld_B1=crrcMvb->getBool(0x760,23,2);
    DR6CT_EDCU7Vld_B1=crrcMvb->getBool(0x760,23,1);
    DR6CT_EDCU8Vld_B1=crrcMvb->getBool(0x760,23,0);

    DR6CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x760,24);
    DR6CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x760,26);

    DR6CT_CanLineBreak_B1=crrcMvb->getBool(0x760,29,7);
    DR6CT_MVBLAT_B1=crrcMvb->getBool(0x760,29,6);
    DR6CT_MVBRLD_B1=crrcMvb->getBool(0x760,29,5);

//    DR6CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x761,1,7);
//    DR6CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x761,1,6);
//    DR6CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x761,1,5);
//    DR6CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x761,1,4);
//    DR6CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x761,1,3);
//    DR6CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x761,1,2);
//    DR6CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x761,1,1);
//    DR6CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x761,1,0);

//    DR6CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x761,0,6);
//    DR6CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x761,0,5);
//    DR6CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x761,0,4);
//    DR6CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x761,0,3);
//    DR6CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x761,0,2);
//    DR6CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x761,0,1);
//    DR6CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x761,0,0);

//    DR6CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x761,3,7);
//    DR6CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x761,3,6);
//    DR6CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x761,3,0);

//    DR6CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x762,0);
//    DR6CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x762,1);
//    DR6CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x762,2);
//    DR6CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x762,3);
//    DR6CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x762,4);
//    DR6CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x762,5);
//    DR6CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x762,6);
//    DR6CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x762,7);
//    DR6CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x762,8);
//    DR6CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x762,9);
//    DR6CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x762,10);
//    DR6CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x762,11);
//    DR6CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x762,12);
//    DR6CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x762,13);
//    DR6CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x762,14);
//    DR6CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x762,15);

    /****************************************************EDCU7→CCU*******************************************************/
    DR7CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x770,1,7);
    DR7CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x770,1,6);
    DR7CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x770,1,5);
    DR7CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x770,1,4);
    DR7CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x770,1,3);
    DR7CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x770,1,2);
    DR7CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x770,1,1);
    DR7CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x770,1,0);
    DR7CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x770,0,7);
    DR7CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x770,0,6);
    DR7CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x770,0,5);
    DR7CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x770,0,4);
    DR7CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x770,0,3);
    DR7CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x770,0,2);
    DR7CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x770,0,1);
    DR7CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x770,0,0);

    DR7CT_OprSt_U16=crrcMvb->getUnsignedInt(0x770,20);

    DR7CT_EDCU1Vld_B1=crrcMvb->getBool(0x770,23,7);
    DR7CT_EDCU2Vld_B1=crrcMvb->getBool(0x770,23,6);
    DR7CT_EDCU3Vld_B1=crrcMvb->getBool(0x770,23,5);
    DR7CT_EDCU4Vld_B1=crrcMvb->getBool(0x770,23,4);
    DR7CT_EDCU5Vld_B1=crrcMvb->getBool(0x770,23,3);
    DR7CT_EDCU6Vld_B1=crrcMvb->getBool(0x770,23,2);
    DR7CT_EDCU7Vld_B1=crrcMvb->getBool(0x770,23,1);
    DR7CT_EDCU8Vld_B1=crrcMvb->getBool(0x770,23,0);

    DR7CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x770,24);
    DR7CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x770,26);

    DR7CT_CanLineBreak_B1=crrcMvb->getBool(0x770,29,7);
    DR7CT_MVBLAT_B1=crrcMvb->getBool(0x770,29,6);
    DR7CT_MVBRLD_B1=crrcMvb->getBool(0x770,29,5);

//    DR7CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x771,1,7);
//    DR7CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x771,1,6);
//    DR7CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x771,1,5);
//    DR7CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x771,1,4);
//    DR7CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x771,1,3);
//    DR7CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x771,1,2);
//    DR7CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x771,1,1);
//    DR7CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x771,1,0);

//    DR7CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x771,0,6);
//    DR7CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x771,0,5);
//    DR7CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x771,0,4);
//    DR7CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x771,0,3);
//    DR7CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x771,0,2);
//    DR7CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x771,0,1);
//    DR7CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x771,0,0);

//    DR7CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x771,3,7);
//    DR7CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x771,3,6);
//    DR7CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x771,3,0);

//    DR7CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x772,0);
//    DR7CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x772,1);
//    DR7CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x772,2);
//    DR7CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x772,3);
//    DR7CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x772,4);
//    DR7CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x772,5);
//    DR7CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x772,6);
//    DR7CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x772,7);
//    DR7CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x772,8);
//    DR7CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x772,9);
//    DR7CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x772,10);
//    DR7CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x772,11);
//    DR7CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x772,12);
//    DR7CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x772,13);
//    DR7CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x772,14);
//    DR7CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x772,15);

    /****************************************************EDCU8→CCU*******************************************************/
    DR8CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x780,1,7);
    DR8CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x780,1,6);
    DR8CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x780,1,5);
    DR8CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x780,1,4);
    DR8CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x780,1,3);
    DR8CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x780,1,2);
    DR8CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x780,1,1);
    DR8CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x780,1,0);
    DR8CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x780,0,7);
    DR8CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x780,0,6);
    DR8CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x780,0,5);
    DR8CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x780,0,4);
    DR8CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x780,0,3);
    DR8CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x780,0,2);
    DR8CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x780,0,1);
    DR8CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x780,0,0);

    DR8CT_OprSt_U16=crrcMvb->getUnsignedInt(0x780,20);

    DR8CT_EDCU1Vld_B1=crrcMvb->getBool(0x780,23,7);
    DR8CT_EDCU2Vld_B1=crrcMvb->getBool(0x780,23,6);
    DR8CT_EDCU3Vld_B1=crrcMvb->getBool(0x780,23,5);
    DR8CT_EDCU4Vld_B1=crrcMvb->getBool(0x780,23,4);
    DR8CT_EDCU5Vld_B1=crrcMvb->getBool(0x780,23,3);
    DR8CT_EDCU6Vld_B1=crrcMvb->getBool(0x780,23,2);
    DR8CT_EDCU7Vld_B1=crrcMvb->getBool(0x780,23,1);
    DR8CT_EDCU8Vld_B1=crrcMvb->getBool(0x780,23,0);

    DR8CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x780,24);
    DR8CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x780,26);

    DR8CT_CanLineBreak_B1=crrcMvb->getBool(0x780,29,7);
    DR8CT_MVBLAT_B1=crrcMvb->getBool(0x780,29,6);
    DR8CT_MVBRLD_B1=crrcMvb->getBool(0x780,29,5);

//    DR8CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x781,1,7);
//    DR8CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x781,1,6);
//    DR8CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x781,1,5);
//    DR8CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x781,1,4);
//    DR8CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x781,1,3);
//    DR8CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x781,1,2);
//    DR8CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x781,1,1);
//    DR8CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x781,1,0);

//    DR8CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x781,0,6);
//    DR8CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x781,0,5);
//    DR8CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x781,0,4);
//    DR8CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x781,0,3);
//    DR8CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x781,0,2);
//    DR8CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x781,0,1);
//    DR8CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x781,0,0);

//    DR8CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x781,3,7);
//    DR8CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x781,3,6);
//    DR8CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x781,3,0);

//    DR8CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x782,0);
//    DR8CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x782,1);
//    DR8CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x782,2);
//    DR8CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x782,3);
//    DR8CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x782,4);
//    DR8CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x782,5);
//    DR8CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x782,6);
//    DR8CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x782,7);
//    DR8CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x782,8);
//    DR8CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x782,9);
//    DR8CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x782,10);
//    DR8CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x782,11);
//    DR8CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x782,12);
//    DR8CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x782,13);
//    DR8CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x782,14);
//    DR8CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x782,15);

    /****************************************************EDCU9→CCU*******************************************************/
    DR9CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x790,1,7);
    DR9CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x790,1,6);
    DR9CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x790,1,5);
    DR9CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x790,1,4);
    DR9CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x790,1,3);
    DR9CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x790,1,2);
    DR9CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x790,1,1);
    DR9CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x790,1,0);
    DR9CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x790,0,7);
    DR9CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x790,0,6);
    DR9CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x790,0,5);
    DR9CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x790,0,4);
    DR9CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x790,0,3);
    DR9CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x790,0,2);
    DR9CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x790,0,1);
    DR9CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x790,0,0);

    DR9CT_OprSt_U16=crrcMvb->getUnsignedInt(0x790,20);

    DR9CT_EDCU1Vld_B1=crrcMvb->getBool(0x790,23,7);
    DR9CT_EDCU2Vld_B1=crrcMvb->getBool(0x790,23,6);
    DR9CT_EDCU3Vld_B1=crrcMvb->getBool(0x790,23,5);
    DR9CT_EDCU4Vld_B1=crrcMvb->getBool(0x790,23,4);
    DR9CT_EDCU5Vld_B1=crrcMvb->getBool(0x790,23,3);
    DR9CT_EDCU6Vld_B1=crrcMvb->getBool(0x790,23,2);
    DR9CT_EDCU7Vld_B1=crrcMvb->getBool(0x790,23,1);
    DR9CT_EDCU8Vld_B1=crrcMvb->getBool(0x790,23,0);

    DR9CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x790,24);
    DR9CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x790,26);

    DR9CT_CanLineBreak_B1=crrcMvb->getBool(0x790,29,7);
    DR9CT_MVBLAT_B1=crrcMvb->getBool(0x790,29,6);
    DR9CT_MVBRLD_B1=crrcMvb->getBool(0x790,29,5);

//    DR9CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x791,1,7);
//    DR9CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x791,1,6);
//    DR9CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x791,1,5);
//    DR9CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x791,1,4);
//    DR9CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x791,1,3);
//    DR9CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x791,1,2);
//    DR9CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x791,1,1);
//    DR9CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x791,1,0);

//    DR9CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x791,0,6);
//    DR9CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x791,0,5);
//    DR9CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x791,0,4);
//    DR9CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x791,0,3);
//    DR9CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x791,0,2);
//    DR9CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x791,0,1);
//    DR9CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x791,0,0);

//    DR9CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x791,3,7);
//    DR9CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x791,3,6);
//    DR9CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x791,3,0);

//    DR9CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x792,0);
//    DR9CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x792,1);
//    DR9CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x792,2);
//    DR9CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x792,3);
//    DR9CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x792,4);
//    DR9CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x792,5);
//    DR9CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x792,6);
//    DR9CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x792,7);
//    DR9CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x792,8);
//    DR9CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x792,9);
//    DR9CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x792,10);
//    DR9CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x792,11);
//    DR9CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x792,12);
//    DR9CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x792,13);
//    DR9CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x792,14);
//    DR9CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x792,15);

    /****************************************************EDCU10→CCU*******************************************************/
    DR10CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x7A0,1,7);
    DR10CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x7A0,1,6);
    DR10CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x7A0,1,5);
    DR10CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x7A0,1,4);
    DR10CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x7A0,1,3);
    DR10CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x7A0,1,2);
    DR10CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x7A0,1,1);
    DR10CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x7A0,1,0);
    DR10CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x7A0,0,7);
    DR10CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x7A0,0,6);
    DR10CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x7A0,0,5);
    DR10CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x7A0,0,4);
    DR10CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x7A0,0,3);
    DR10CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x7A0,0,2);
    DR10CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x7A0,0,1);
    DR10CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x7A0,0,0);

    DR10CT_OprSt_U16=crrcMvb->getUnsignedInt(0x7A0,20);

    DR10CT_EDCU1Vld_B1=crrcMvb->getBool(0x7A0,23,7);
    DR10CT_EDCU2Vld_B1=crrcMvb->getBool(0x7A0,23,6);
    DR10CT_EDCU3Vld_B1=crrcMvb->getBool(0x7A0,23,5);
    DR10CT_EDCU4Vld_B1=crrcMvb->getBool(0x7A0,23,4);
    DR10CT_EDCU5Vld_B1=crrcMvb->getBool(0x7A0,23,3);
    DR10CT_EDCU6Vld_B1=crrcMvb->getBool(0x7A0,23,2);
    DR10CT_EDCU7Vld_B1=crrcMvb->getBool(0x7A0,23,1);
    DR10CT_EDCU8Vld_B1=crrcMvb->getBool(0x7A0,23,0);

    DR10CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x7A0,24);
    DR10CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x7A0,26);

    DR10CT_CanLineBreak_B1=crrcMvb->getBool(0x7A0,29,7);
    DR10CT_MVBLAT_B1=crrcMvb->getBool(0x7A0,29,6);
    DR10CT_MVBRLD_B1=crrcMvb->getBool(0x7A0,29,5);

//    DR10CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x7A1,1,7);
//    DR10CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x7A1,1,6);
//    DR10CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x7A1,1,5);
//    DR10CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x7A1,1,4);
//    DR10CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x7A1,1,3);
//    DR10CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x7A1,1,2);
//    DR10CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x7A1,1,1);
//    DR10CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x7A1,1,0);

//    DR10CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x7A1,0,6);
//    DR10CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x7A1,0,5);
//    DR10CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x7A1,0,4);
//    DR10CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x7A1,0,3);
//    DR10CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x7A1,0,2);
//    DR10CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x7A1,0,1);
//    DR10CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x7A1,0,0);

//    DR10CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x7A1,3,7);
//    DR10CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x7A1,3,6);
//    DR10CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x7A1,3,0);

//    DR10CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x7A2,0);
//    DR10CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x7A2,1);
//    DR10CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x7A2,2);
//    DR10CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x7A2,3);
//    DR10CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x7A2,4);
//    DR10CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x7A2,5);
//    DR10CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x7A2,6);
//    DR10CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x7A2,7);
//    DR10CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x7A2,8);
//    DR10CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x7A2,9);
//    DR10CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x7A2,10);
//    DR10CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x7A2,11);
//    DR10CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x7A2,12);
//    DR10CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x7A2,13);
//    DR10CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x7A2,14);
//    DR10CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x7A2,15);

    /****************************************************EDCU11→CCU*******************************************************/
    DR11CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x7B0,1,7);
    DR11CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x7B0,1,6);
    DR11CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x7B0,1,5);
    DR11CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x7B0,1,4);
    DR11CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x7B0,1,3);
    DR11CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x7B0,1,2);
    DR11CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x7B0,1,1);
    DR11CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x7B0,1,0);
    DR11CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x7B0,0,7);
    DR11CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x7B0,0,6);
    DR11CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x7B0,0,5);
    DR11CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x7B0,0,4);
    DR11CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x7B0,0,3);
    DR11CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x7B0,0,2);
    DR11CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x7B0,0,1);
    DR11CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x7B0,0,0);

    DR11CT_OprSt_U16=crrcMvb->getUnsignedInt(0x7B0,20);

    DR11CT_EDCU1Vld_B1=crrcMvb->getBool(0x7B0,23,7);
    DR11CT_EDCU2Vld_B1=crrcMvb->getBool(0x7B0,23,6);
    DR11CT_EDCU3Vld_B1=crrcMvb->getBool(0x7B0,23,5);
    DR11CT_EDCU4Vld_B1=crrcMvb->getBool(0x7B0,23,4);
    DR11CT_EDCU5Vld_B1=crrcMvb->getBool(0x7B0,23,3);
    DR11CT_EDCU6Vld_B1=crrcMvb->getBool(0x7B0,23,2);
    DR11CT_EDCU7Vld_B1=crrcMvb->getBool(0x7B0,23,1);
    DR11CT_EDCU8Vld_B1=crrcMvb->getBool(0x7B0,23,0);

    DR11CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x7B0,24);
    DR11CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x7B0,26);

    DR11CT_CanLineBreak_B1=crrcMvb->getBool(0x7B0,29,7);
    DR11CT_MVBLAT_B1=crrcMvb->getBool(0x7B0,29,6);
    DR11CT_MVBRLD_B1=crrcMvb->getBool(0x7B0,29,5);

//    DR11CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x7B1,1,7);
//    DR11CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x7B1,1,6);
//    DR11CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x7B1,1,5);
//    DR11CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x7B1,1,4);
//    DR11CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x7B1,1,3);
//    DR11CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x7B1,1,2);
//    DR11CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x7B1,1,1);
//    DR11CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x7B1,1,0);

//    DR11CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x7B1,0,6);
//    DR11CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x7B1,0,5);
//    DR11CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x7B1,0,4);
//    DR11CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x7B1,0,3);
//    DR11CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x7B1,0,2);
//    DR11CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x7B1,0,1);
//    DR11CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x7B1,0,0);

//    DR11CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x7B1,3,7);
//    DR11CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x7B1,3,6);
//    DR11CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x7B1,3,0);

//    DR11CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x7B2,0);
//    DR11CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x7B2,1);
//    DR11CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x7B2,2);
//    DR11CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x7B2,3);
//    DR11CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x7B2,4);
//    DR11CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x7B2,5);
//    DR11CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x7B2,6);
//    DR11CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x7B2,7);
//    DR11CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x7B2,8);
//    DR11CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x7B2,9);
//    DR11CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x7B2,10);
//    DR11CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x7B2,11);
//    DR11CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x7B2,12);
//    DR11CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x7B2,13);
//    DR11CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x7B2,14);
//    DR11CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x7B2,15);

    /****************************************************EDCU12→CCU*******************************************************/
    DR12CT_Dr$8$2$Enable_B1=crrcMvb->getBool(0x7C0,1,7);
    DR12CT_Dr$8$2$ZeroSpd_B1=crrcMvb->getBool(0x7C0,1,6);
    DR12CT_Dr$8$2$Opn_B1=crrcMvb->getBool(0x7C0,1,5);
    DR12CT_Dr$8$2$IsOpnCls_B1=crrcMvb->getBool(0x7C0,1,4);
    DR12CT_Dr$8$2$Cld_B1=crrcMvb->getBool(0x7C0,1,3);
    DR12CT_Dr$8$2$OpenObstr_B1=crrcMvb->getBool(0x7C0,1,2);
    DR12CT_Dr$8$2$SfLpPrt1_B1=crrcMvb->getBool(0x7C0,1,1);
    DR12CT_Dr$8$2$SfLpPrt2_B1=crrcMvb->getBool(0x7C0,1,0);
    DR12CT_Dr$8$2$CldLck_B1=crrcMvb->getBool(0x7C0,0,7);
    DR12CT_Dr$8$2$OpnAll_B1=crrcMvb->getBool(0x7C0,0,6);
    DR12CT_Dr$8$2$EmgUnlock_B1=crrcMvb->getBool(0x7C0,0,5);
    DR12CT_Dr$8$2$CutOut_B1=crrcMvb->getBool(0x7C0,0,4);
    DR12CT_Dr$8$2$ReOpnCld_B1=crrcMvb->getBool(0x7C0,0,3);
    DR12CT_Dr$8$2$CtrlSel_B1=crrcMvb->getBool(0x7C0,0,2);
    DR12CT_Dr$8$2$MajFlt_B1=crrcMvb->getBool(0x7C0,0,1);
    DR12CT_Dr$8$2$MinFlt_B1=crrcMvb->getBool(0x7C0,0,0);

    DR12CT_OprSt_U16=crrcMvb->getUnsignedInt(0x7C0,20);

    DR12CT_EDCU1Vld_B1=crrcMvb->getBool(0x7C0,23,7);
    DR12CT_EDCU2Vld_B1=crrcMvb->getBool(0x7C0,23,6);
    DR12CT_EDCU3Vld_B1=crrcMvb->getBool(0x7C0,23,5);
    DR12CT_EDCU4Vld_B1=crrcMvb->getBool(0x7C0,23,4);
    DR12CT_EDCU5Vld_B1=crrcMvb->getBool(0x7C0,23,3);
    DR12CT_EDCU6Vld_B1=crrcMvb->getBool(0x7C0,23,2);
    DR12CT_EDCU7Vld_B1=crrcMvb->getBool(0x7C0,23,1);
    DR12CT_EDCU8Vld_B1=crrcMvb->getBool(0x7C0,23,0);

    DR12CT_TokenRing_U16=crrcMvb->getUnsignedInt(0x7C0,24);
    DR12CT_LfSgn_U16=crrcMvb->getUnsignedInt(0x7C0,26);

    DR12CT_CanLineBreak_B1=crrcMvb->getBool(0x7C0,29,7);
    DR12CT_MVBLAT_B1=crrcMvb->getBool(0x7C0,29,6);
    DR12CT_MVBRLD_B1=crrcMvb->getBool(0x7C0,29,5);

//    DR12CT_Dr$8$4$MtrCirFlt_B1=crrcMvb->getBool(0x7C1,1,7);
//    DR12CT_Dr$8$4$SwLockFlt_B1=crrcMvb->getBool(0x7C1,1,6);
//    DR12CT_Dr$8$4$SwCldFlt_B1=crrcMvb->getBool(0x7C1,1,5);
//    DR12CT_Dr$8$4$UnLock_B1=crrcMvb->getBool(0x7C1,1,4);
//    DR12CT_Dr$8$4$PosFlt_B1=crrcMvb->getBool(0x7C1,1,3);
//    DR12CT_Dr$8$4$PrhbCld_B1=crrcMvb->getBool(0x7C1,1,2);
//    DR12CT_Dr$8$4$SafRlyFlt_B1=crrcMvb->getBool(0x7C1,1,1);
//    DR12CT_Dr$8$4$SafLoopFlt_B1=crrcMvb->getBool(0x7C1,1,0);

//    DR12CT_Dr$8$4$DtCldNum_B1=crrcMvb->getBool(0x7C1,0,6);
//    DR12CT_Dr$8$4$DtOpNum_B1=crrcMvb->getBool(0x7C1,0,5);
//    DR12CT_Dr$8$4$Out0Short_B1=crrcMvb->getBool(0x7C1,0,4);
//    DR12CT_Dr$8$4$Out1Short_B1=crrcMvb->getBool(0x7C1,0,3);
//    DR12CT_Dr$8$4$Out2Short_B1=crrcMvb->getBool(0x7C1,0,2);
//    DR12CT_Dr$8$4$Out3Short_B1=crrcMvb->getBool(0x7C1,0,1);
//    DR12CT_Dr$8$4$MemFlt_B1=crrcMvb->getBool(0x7C1,0,0);

//    DR12CT_Dr$8$4$BusComFlt_B1=crrcMvb->getBool(0x7C1,3,7);
//    DR12CT_Dr$8$4$AddressFlt_B1=crrcMvb->getBool(0x7C1,3,6);
//    DR12CT_Dr$8$4$PshBttnFlt_B1=crrcMvb->getBool(0x7C1,3,0);

//    DR12CT_Dr1SftVerX_U8=crrcMvb->getUnsignedChar(0x7C2,0);
//    DR12CT_Dr1SftVerY_U8=crrcMvb->getUnsignedChar(0x7C2,1);
//    DR12CT_Dr2SftVerX_U8=crrcMvb->getUnsignedChar(0x7C2,2);
//    DR12CT_Dr2SftVerY_U8=crrcMvb->getUnsignedChar(0x7C2,3);
//    DR12CT_Dr3SftVerX_U8=crrcMvb->getUnsignedChar(0x7C2,4);
//    DR12CT_Dr3SftVerY_U8=crrcMvb->getUnsignedChar(0x7C2,5);
//    DR12CT_Dr4SftVerX_U8=crrcMvb->getUnsignedChar(0x7C2,6);
//    DR12CT_Dr4SftVerY_U8=crrcMvb->getUnsignedChar(0x7C2,7);
//    DR12CT_Dr5SftVerX_U8=crrcMvb->getUnsignedChar(0x7C2,8);
//    DR12CT_Dr5SftVerY_U8=crrcMvb->getUnsignedChar(0x7C2,9);
//    DR12CT_Dr6SftVerX_U8=crrcMvb->getUnsignedChar(0x7C2,10);
//    DR12CT_Dr6SftVerY_U8=crrcMvb->getUnsignedChar(0x7C2,11);
//    DR12CT_Dr7SftVerX_U8=crrcMvb->getUnsignedChar(0x7C2,12);
//    DR12CT_Dr7SftVerY_U8=crrcMvb->getUnsignedChar(0x7C2,13);
//    DR12CT_Dr8SftVerX_U8=crrcMvb->getUnsignedChar(0x7C2,14);
//    DR12CT_Dr8SftVerY_U8=crrcMvb->getUnsignedChar(0x7C2,15);

    /******************************************************CCU→EDCU******************************************************/
    CTDR_OpenLeftDoor1_B1=crrcMvb->getBool(0x708,0,2);
    CTDR_OpenLeftDoor2_B1=crrcMvb->getBool(0x708,0,3);
    CTDR_OpenLeftDoor3_B1=crrcMvb->getBool(0x708,0,4);
    CTDR_OpenRightDoor1_B1=crrcMvb->getBool(0x708,0,5);
    CTDR_OpenRightDoor2_B1=crrcMvb->getBool(0x708,0,6);
    CTDR_OpenRightDoor3_B1=crrcMvb->getBool(0x708,0,7);

    CTDR_Tc2CabActive_B1=crrcMvb->getBool(0x708,1,1);
    CTDR_Tc1CabActive_B1=crrcMvb->getBool(0x708,1,2);
    CTDR_CloseRightDoor1_B1=crrcMvb->getBool(0x708,1,5);
    CTDR_CloseLeftDoor1_B1=crrcMvb->getBool(0x708,1,6);
    CTDR_ZeroSpeed1_B1=crrcMvb->getBool(0x708,1,7);

    CTDR_OpenRightDoor4_B1=crrcMvb->getBool(0x708,12,2);
    CTDR_OpenRightDoor5_B1=crrcMvb->getBool(0x708,12,3);
    CTDR_OpenRightDoor6_B1=crrcMvb->getBool(0x708,12,4);
    CTDR_OpenLeftDoor4_B1=crrcMvb->getBool(0x708,12,5);
    CTDR_OpenLeftDoor5_B1=crrcMvb->getBool(0x708,12,6);
    CTDR_OpenLeftDoor6_B1=crrcMvb->getBool(0x708,12,7);

    CTDR_CloseRightDoor2_B1=crrcMvb->getBool(0x708,13,5);
    CTDR_CloseLeftDoor2_B1=crrcMvb->getBool(0x708,13,6);
    CTDR_ZeroSpeed2_B1=crrcMvb->getBool(0x708,13,7);

    /**********************************************************HVAC1-CCU**************************************************/
    AC1CT_LifeSignal_U16=crrcMvb->getUnsignedInt(0x910,0);
    AC1CT_VentilatorOn_B1=crrcMvb->getBool(0x910,2,0);
    AC1CT_Condenser1On_B1=crrcMvb->getBool(0x910,2,1);
    AC1CT_Condenser2On_B1=crrcMvb->getBool(0x910,2,2);
    AC1CT_Compressor1On_B1=crrcMvb->getBool(0x910,2,3);
    AC1CT_Compressor2On_B1=crrcMvb->getBool(0x910,2,4);
    AC1CT_Heater1On_B1=crrcMvb->getBool(0x910,2,5);
    AC1CT_Heater2On_B1=crrcMvb->getBool(0x910,2,6);
    AC1CT_Heater3On_B1=crrcMvb->getBool(0x910,2,7);

    AC1CT_Heater4On_B1=crrcMvb->getBool(0x910,3,0);
    AC1CT_AutoHeat_B1=crrcMvb->getBool(0x910,3,1);
    AC1CT_AutoCool_B1=crrcMvb->getBool(0x910,3,2);
    AC1CT_Ventilation_B1=crrcMvb->getBool(0x910,3,3);
    AC1CT_EmVentilation_B1=crrcMvb->getBool(0x910,3,4);
    AC1CT_HVACStopped_B1=crrcMvb->getBool(0x910,3,5);
    AC1CT_PreCool_B1=crrcMvb->getBool(0x910,3,6);
    AC1CT_PreHeat_B1=crrcMvb->getBool(0x910,3,7);

    AC1CT_ReturnAirTemp_I16=crrcMvb->getSignedInt(0x910,4);
    AC1CT_RoomTemp1_I16=crrcMvb->getSignedInt(0x910,6);
    AC1CT_RoomTemp2_I16=crrcMvb->getSignedInt(0x910,8);
    AC1CT_FreshAir1Temp_I16=crrcMvb->getSignedInt(0x910,10);
    AC1CT_FreshAir2Temp_I16=crrcMvb->getSignedInt(0x910,12);
    AC1CT_OutRoomTemp_I16=crrcMvb->getSignedInt(0x910,14);
    AC1CT_TargetTemp_I16=crrcMvb->getSignedInt(0x910,16);

    AC1CT_SIV1StatusFB_B1=crrcMvb->getBool(0x910,18,0);
    AC1CT_SIV2StatusFB_B1=crrcMvb->getBool(0x910,18,1);
    AC1CT_SIV3StatusFB_B1=crrcMvb->getBool(0x910,18,2);
    AC1CT_SIV4StatusFB_B1=crrcMvb->getBool(0x910,18,3);
    AC1CT_FreshAirOpen13_B1=crrcMvb->getBool(0x910,18,4);
    AC1CT_FreshAirOpen23_B1=crrcMvb->getBool(0x910,18,5);
    AC1CT_FreshAirOpenFull_B1=crrcMvb->getBool(0x910,18,6);
    AC1CT_FreshAirClosed_B1=crrcMvb->getBool(0x910,18,7);

    AC1CT_ReturnAirOpen13_B1=crrcMvb->getBool(0x910,19,0);
    AC1CT_ReturnAirOpen23_B1=crrcMvb->getBool(0x910,19,1);
    AC1CT_ReturnAirOpenFull_B1=crrcMvb->getBool(0x910,19,2);
    AC1CT_ReturnAirClosed_B1=crrcMvb->getBool(0x910,19,3);
//    AC1CT_Ventilator1OLFlt_B1=crrcMvb->getBool(0x910,19,4);
//    AC1CT_Ventilator2OLFlt_B1=crrcMvb->getBool(0x910,19,5);
//    AC1CT_Condenser1OLFlt_B1=crrcMvb->getBool(0x910,19,6);
//    AC1CT_Condenser2OLFlt_B1=crrcMvb->getBool(0x910,19,7);

//    AC1CT_Compressor1Overload_B1=crrcMvb->getBool(0x910,20,0);
//    AC1CT_Compressor1HighVol_B1=crrcMvb->getBool(0x910,20,1);
//    AC1CT_Compressor1LowVol_B1=crrcMvb->getBool(0x910,20,2);
//    AC1CT_Compressor2Overload_B1=crrcMvb->getBool(0x910,20,3);
//    AC1CT_Compressor2HighVol_B1=crrcMvb->getBool(0x910,20,4);
//    AC1CT_Compressor2LowVol_B1=crrcMvb->getBool(0x910,20,5);
//    AC1CT_Heater1Flt_B1=crrcMvb->getBool(0x910,20,6);
//    AC1CT_Heater2Flt_B1=crrcMvb->getBool(0x910,20,7);

//    AC1CT_Heater3Flt_B1=crrcMvb->getBool(0x910,21,0);
//    AC1CT_Heater4Flt_B1=crrcMvb->getBool(0x910,21,1);
//    AC1CT_FreshAirSensor1Flt_B1=crrcMvb->getBool(0x910,21,2);
//    AC1CT_FreshAirSensor2Flt_B1=crrcMvb->getBool(0x910,21,3);
//    AC1CT_ReturnAirSensorFlt_B1=crrcMvb->getBool(0x910,21,4);
//    AC1CT_SendAirSensorFlt_B1=crrcMvb->getBool(0x910,21,5);
//    AC1CT_RoomSensorFlt_B1=crrcMvb->getBool(0x910,21,6);
//    AC1CT_FreshAir1Flt_B1=crrcMvb->getBool(0x910,21,7);

//    AC1CT_FreshAir2Flt_B1=crrcMvb->getBool(0x910,22,0);
//    AC1CT_FreshAir3Flt_B1=crrcMvb->getBool(0x910,22,1);
//    AC1CT_FreshAir4Flt_B1=crrcMvb->getBool(0x910,22,2);
//    AC1CT_ReturnAir1Flt_B1=crrcMvb->getBool(0x910,22,3);
//    AC1CT_ReturnAir2Flt_B1=crrcMvb->getBool(0x910,22,4);
//    AC1CT_ReturnAir3Flt_B1=crrcMvb->getBool(0x910,22,5);
//    AC1CT_ReturnAir4Flt_B1=crrcMvb->getBool(0x910,22,6);
//    AC1CT_Compressor1FCFlt_B1=crrcMvb->getBool(0x910,22,7);

//    AC1CT_Compressor2FCFlt_B1=crrcMvb->getBool(0x910,23,0);
//    AC1CT_Comp1FCComuFlt_B1=crrcMvb->getBool(0x910,23,1);
//    AC1CT_Comp2FCComuFlt_B1=crrcMvb->getBool(0x910,23,2);
//    AC1CT_EmVentilationFCFlt_B1=crrcMvb->getBool(0x910,23,4);
//    AC1CT_ThreePhaseFlt_B1=crrcMvb->getBool(0x910,23,5);
//    AC1CT_ControllerCommuFlt_B1=crrcMvb->getBool(0x910,23,6);
//    AC1CT_MinorFlt_B1=crrcMvb->getBool(0x910,23,7);

//    AC1CT_MediumFlt_B1=crrcMvb->getBool(0x910,24,0);
//    AC1CT_MajorFlt_B1=crrcMvb->getBool(0x910,24,1);

    AC1CT_SWVersionHighByteX_U8=crrcMvb->getUnsignedChar(0x910,25);
    AC1CT_SWVersionHighByteY_U8=crrcMvb->getUnsignedChar(0x910,26);

    AC1CT_MVBLAT_B1=crrcMvb->getBool(0x910,27,0);
    AC1CT_MVBRLD_B1=crrcMvb->getBool(0x910,27,1);

    /**********************************************************HVAC2-CCU**************************************************/
    AC2CT_LifeSignal_U16=crrcMvb->getUnsignedInt(0x920,0);
    AC2CT_VentilatorOn_B1=crrcMvb->getBool(0x920,2,0);
    AC2CT_Condenser1On_B1=crrcMvb->getBool(0x920,2,1);
    AC2CT_Condenser2On_B1=crrcMvb->getBool(0x920,2,2);
    AC2CT_Compressor1On_B1=crrcMvb->getBool(0x920,2,3);
    AC2CT_Compressor2On_B1=crrcMvb->getBool(0x920,2,4);
    AC2CT_Heater1On_B1=crrcMvb->getBool(0x920,2,5);
    AC2CT_Heater2On_B1=crrcMvb->getBool(0x920,2,6);
    AC2CT_Heater3On_B1=crrcMvb->getBool(0x920,2,7);

    AC2CT_Heater4On_B1=crrcMvb->getBool(0x920,3,0);
    AC2CT_AutoHeat_B1=crrcMvb->getBool(0x920,3,1);
    AC2CT_AutoCool_B1=crrcMvb->getBool(0x920,3,2);
    AC2CT_Ventilation_B1=crrcMvb->getBool(0x920,3,3);
    AC2CT_EmVentilation_B1=crrcMvb->getBool(0x920,3,4);
    AC2CT_HVACStopped_B1=crrcMvb->getBool(0x920,3,5);
    AC2CT_PreCool_B1=crrcMvb->getBool(0x920,3,6);
    AC2CT_PreHeat_B1=crrcMvb->getBool(0x920,3,7);

    AC2CT_ReturnAirTemp_I16=crrcMvb->getSignedInt(0x920,4);
    AC2CT_RoomTemp1_I16=crrcMvb->getSignedInt(0x920,6);
    AC2CT_RoomTemp2_I16=crrcMvb->getSignedInt(0x920,8);
    AC2CT_FreshAir1Temp_I16=crrcMvb->getSignedInt(0x920,10);
    AC2CT_FreshAir2Temp_I16=crrcMvb->getSignedInt(0x920,12);
    AC2CT_OutRoomTemp_I16=crrcMvb->getSignedInt(0x920,14);
    AC2CT_TargetTemp_I16=crrcMvb->getSignedInt(0x920,16);

    AC2CT_SIV1StatusFB_B1=crrcMvb->getBool(0x920,18,0);
    AC2CT_SIV2StatusFB_B1=crrcMvb->getBool(0x920,18,1);
    AC2CT_SIV3StatusFB_B1=crrcMvb->getBool(0x920,18,2);
    AC2CT_SIV4StatusFB_B1=crrcMvb->getBool(0x920,18,3);
    AC2CT_FreshAirOpen13_B1=crrcMvb->getBool(0x920,18,4);
    AC2CT_FreshAirOpen23_B1=crrcMvb->getBool(0x920,18,5);
    AC2CT_FreshAirOpenFull_B1=crrcMvb->getBool(0x920,18,6);
    AC2CT_FreshAirClosed_B1=crrcMvb->getBool(0x920,18,7);

    AC2CT_ReturnAirOpen13_B1=crrcMvb->getBool(0x920,19,0);
    AC2CT_ReturnAirOpen23_B1=crrcMvb->getBool(0x920,19,1);
    AC2CT_ReturnAirOpenFull_B1=crrcMvb->getBool(0x920,19,2);
    AC2CT_ReturnAirClosed_B1=crrcMvb->getBool(0x920,19,3);
//    AC2CT_Ventilator1OLFlt_B1=crrcMvb->getBool(0x920,19,4);
//    AC2CT_Ventilator2OLFlt_B1=crrcMvb->getBool(0x920,19,5);
//    AC2CT_Condenser1OLFlt_B1=crrcMvb->getBool(0x920,19,6);
//    AC2CT_Condenser2OLFlt_B1=crrcMvb->getBool(0x920,19,7);

//    AC2CT_Compressor1Overload_B1=crrcMvb->getBool(0x920,20,0);
//    AC2CT_Compressor1HighVol_B1=crrcMvb->getBool(0x920,20,1);
//    AC2CT_Compressor1LowVol_B1=crrcMvb->getBool(0x920,20,2);
//    AC2CT_Compressor2Overload_B1=crrcMvb->getBool(0x920,20,3);
//    AC2CT_Compressor2HighVol_B1=crrcMvb->getBool(0x920,20,4);
//    AC2CT_Compressor2LowVol_B1=crrcMvb->getBool(0x920,20,5);
//    AC2CT_Heater1Flt_B1=crrcMvb->getBool(0x920,20,6);
//    AC2CT_Heater2Flt_B1=crrcMvb->getBool(0x920,20,7);

//    AC2CT_Heater3Flt_B1=crrcMvb->getBool(0x920,21,0);
//    AC2CT_Heater4Flt_B1=crrcMvb->getBool(0x920,21,1);
//    AC2CT_FreshAirSensor1Flt_B1=crrcMvb->getBool(0x920,21,2);
//    AC2CT_FreshAirSensor2Flt_B1=crrcMvb->getBool(0x920,21,3);
//    AC2CT_ReturnAirSensorFlt_B1=crrcMvb->getBool(0x920,21,4);
//    AC2CT_SendAirSensorFlt_B1=crrcMvb->getBool(0x920,21,5);
//    AC2CT_RoomSensorFlt_B1=crrcMvb->getBool(0x920,21,6);
//    AC2CT_FreshAir1Flt_B1=crrcMvb->getBool(0x920,21,7);

//    AC2CT_FreshAir2Flt_B1=crrcMvb->getBool(0x920,22,0);
//    AC2CT_FreshAir3Flt_B1=crrcMvb->getBool(0x920,22,1);
//    AC2CT_FreshAir4Flt_B1=crrcMvb->getBool(0x920,22,2);
//    AC2CT_ReturnAir1Flt_B1=crrcMvb->getBool(0x920,22,3);
//    AC2CT_ReturnAir2Flt_B1=crrcMvb->getBool(0x920,22,4);
//    AC2CT_ReturnAir3Flt_B1=crrcMvb->getBool(0x920,22,5);
//    AC2CT_ReturnAir4Flt_B1=crrcMvb->getBool(0x920,22,6);
//    AC2CT_Compressor1FCFlt_B1=crrcMvb->getBool(0x920,22,7);

//    AC2CT_Compressor2FCFlt_B1=crrcMvb->getBool(0x920,23,0);
//    AC2CT_Comp1FCComuFlt_B1=crrcMvb->getBool(0x920,23,1);
//    AC2CT_Comp2FCComuFlt_B1=crrcMvb->getBool(0x920,23,2);
//    AC2CT_EmVentilationFCFlt_B1=crrcMvb->getBool(0x920,23,4);
//    AC2CT_ThreePhaseFlt_B1=crrcMvb->getBool(0x920,23,5);
//    AC2CT_ControllerCommuFlt_B1=crrcMvb->getBool(0x920,23,6);
//    AC2CT_MinorFlt_B1=crrcMvb->getBool(0x920,23,7);

//    AC2CT_MediumFlt_B1=crrcMvb->getBool(0x920,24,0);
//    AC2CT_MajorFlt_B1=crrcMvb->getBool(0x920,24,1);

    AC2CT_SWVersionHighByteX_U8=crrcMvb->getUnsignedChar(0x920,25);
    AC2CT_SWVersionHighByteY_U8=crrcMvb->getUnsignedChar(0x920,26);

    AC2CT_MVBLAT_B1=crrcMvb->getBool(0x920,27,0);
    AC2CT_MVBRLD_B1=crrcMvb->getBool(0x920,27,1);


    /**********************************************************HVAC3-CCU**************************************************/
    AC3CT_LifeSignal_U16=crrcMvb->getUnsignedInt(0x930,0);
    AC3CT_VentilatorOn_B1=crrcMvb->getBool(0x930,2,0);
    AC3CT_Condenser1On_B1=crrcMvb->getBool(0x930,2,1);
    AC3CT_Condenser2On_B1=crrcMvb->getBool(0x930,2,2);
    AC3CT_Compressor1On_B1=crrcMvb->getBool(0x930,2,3);
    AC3CT_Compressor2On_B1=crrcMvb->getBool(0x930,2,4);
    AC3CT_Heater1On_B1=crrcMvb->getBool(0x930,2,5);
    AC3CT_Heater2On_B1=crrcMvb->getBool(0x930,2,6);
    AC3CT_Heater3On_B1=crrcMvb->getBool(0x930,2,7);

    AC3CT_Heater4On_B1=crrcMvb->getBool(0x930,3,0);
    AC3CT_AutoHeat_B1=crrcMvb->getBool(0x930,3,1);
    AC3CT_AutoCool_B1=crrcMvb->getBool(0x930,3,2);
    AC3CT_Ventilation_B1=crrcMvb->getBool(0x930,3,3);
    AC3CT_EmVentilation_B1=crrcMvb->getBool(0x930,3,4);
    AC3CT_HVACStopped_B1=crrcMvb->getBool(0x930,3,5);
    AC3CT_PreCool_B1=crrcMvb->getBool(0x930,3,6);
    AC3CT_PreHeat_B1=crrcMvb->getBool(0x930,3,7);

    AC3CT_ReturnAirTemp_I16=crrcMvb->getSignedInt(0x930,4);
    AC3CT_RoomTemp1_I16=crrcMvb->getSignedInt(0x930,6);
    AC3CT_RoomTemp2_I16=crrcMvb->getSignedInt(0x930,8);
    AC3CT_FreshAir1Temp_I16=crrcMvb->getSignedInt(0x930,10);
    AC3CT_FreshAir2Temp_I16=crrcMvb->getSignedInt(0x930,12);
    AC3CT_OutRoomTemp_I16=crrcMvb->getSignedInt(0x930,14);
    AC3CT_TargetTemp_I16=crrcMvb->getSignedInt(0x930,16);

    AC3CT_SIV1StatusFB_B1=crrcMvb->getBool(0x930,18,0);
    AC3CT_SIV2StatusFB_B1=crrcMvb->getBool(0x930,18,1);
    AC3CT_SIV3StatusFB_B1=crrcMvb->getBool(0x930,18,2);
    AC3CT_SIV4StatusFB_B1=crrcMvb->getBool(0x930,18,3);
    AC3CT_FreshAirOpen13_B1=crrcMvb->getBool(0x930,18,4);
    AC3CT_FreshAirOpen23_B1=crrcMvb->getBool(0x930,18,5);
    AC3CT_FreshAirOpenFull_B1=crrcMvb->getBool(0x930,18,6);
    AC3CT_FreshAirClosed_B1=crrcMvb->getBool(0x930,18,7);

    AC3CT_ReturnAirOpen13_B1=crrcMvb->getBool(0x930,19,0);
    AC3CT_ReturnAirOpen23_B1=crrcMvb->getBool(0x930,19,1);
    AC3CT_ReturnAirOpenFull_B1=crrcMvb->getBool(0x930,19,2);
    AC3CT_ReturnAirClosed_B1=crrcMvb->getBool(0x930,19,3);
//    AC3CT_Ventilator1OLFlt_B1=crrcMvb->getBool(0x930,19,4);
//    AC3CT_Ventilator2OLFlt_B1=crrcMvb->getBool(0x930,19,5);
//    AC3CT_Condenser1OLFlt_B1=crrcMvb->getBool(0x930,19,6);
//    AC3CT_Condenser2OLFlt_B1=crrcMvb->getBool(0x930,19,7);

//    AC3CT_Compressor1Overload_B1=crrcMvb->getBool(0x930,20,0);
//    AC3CT_Compressor1HighVol_B1=crrcMvb->getBool(0x930,20,1);
//    AC3CT_Compressor1LowVol_B1=crrcMvb->getBool(0x930,20,2);
//    AC3CT_Compressor2Overload_B1=crrcMvb->getBool(0x930,20,3);
//    AC3CT_Compressor2HighVol_B1=crrcMvb->getBool(0x930,20,4);
//    AC3CT_Compressor2LowVol_B1=crrcMvb->getBool(0x930,20,5);
//    AC3CT_Heater1Flt_B1=crrcMvb->getBool(0x930,20,6);
//    AC3CT_Heater2Flt_B1=crrcMvb->getBool(0x930,20,7);

//    AC3CT_Heater3Flt_B1=crrcMvb->getBool(0x930,21,0);
//    AC3CT_Heater4Flt_B1=crrcMvb->getBool(0x930,21,1);
//    AC3CT_FreshAirSensor1Flt_B1=crrcMvb->getBool(0x930,21,2);
//    AC3CT_FreshAirSensor2Flt_B1=crrcMvb->getBool(0x930,21,3);
//    AC3CT_ReturnAirSensorFlt_B1=crrcMvb->getBool(0x930,21,4);
//    AC3CT_SendAirSensorFlt_B1=crrcMvb->getBool(0x930,21,5);
//    AC3CT_RoomSensorFlt_B1=crrcMvb->getBool(0x930,21,6);
//    AC3CT_FreshAir1Flt_B1=crrcMvb->getBool(0x930,21,7);

//    AC3CT_FreshAir2Flt_B1=crrcMvb->getBool(0x930,22,0);
//    AC3CT_FreshAir3Flt_B1=crrcMvb->getBool(0x930,22,1);
//    AC3CT_FreshAir4Flt_B1=crrcMvb->getBool(0x930,22,2);
//    AC3CT_ReturnAir1Flt_B1=crrcMvb->getBool(0x930,22,3);
//    AC3CT_ReturnAir2Flt_B1=crrcMvb->getBool(0x930,22,4);
//    AC3CT_ReturnAir3Flt_B1=crrcMvb->getBool(0x930,22,5);
//    AC3CT_ReturnAir4Flt_B1=crrcMvb->getBool(0x930,22,6);
//    AC3CT_Compressor1FCFlt_B1=crrcMvb->getBool(0x930,22,7);

//    AC3CT_Compressor2FCFlt_B1=crrcMvb->getBool(0x930,23,0);
//    AC3CT_Comp1FCComuFlt_B1=crrcMvb->getBool(0x930,23,1);
//    AC3CT_Comp2FCComuFlt_B1=crrcMvb->getBool(0x930,23,2);
//    AC3CT_EmVentilationFCFlt_B1=crrcMvb->getBool(0x930,23,4);
//    AC3CT_ThreePhaseFlt_B1=crrcMvb->getBool(0x930,23,5);
//    AC3CT_ControllerCommuFlt_B1=crrcMvb->getBool(0x930,23,6);
//    AC3CT_MinorFlt_B1=crrcMvb->getBool(0x930,23,7);

//    AC3CT_MediumFlt_B1=crrcMvb->getBool(0x930,24,0);
//    AC3CT_MajorFlt_B1=crrcMvb->getBool(0x930,24,1);

    AC3CT_SWVersionHighByteX_U8=crrcMvb->getUnsignedChar(0x930,25);
    AC3CT_SWVersionHighByteY_U8=crrcMvb->getUnsignedChar(0x930,26);

    AC3CT_MVBLAT_B1=crrcMvb->getBool(0x930,27,0);
    AC3CT_MVBRLD_B1=crrcMvb->getBool(0x930,27,1);

    /**********************************************************HVAC4-CCU**************************************************/
    AC4CT_LifeSignal_U16=crrcMvb->getUnsignedInt(0x940,0);
    AC4CT_VentilatorOn_B1=crrcMvb->getBool(0x940,2,0);
    AC4CT_Condenser1On_B1=crrcMvb->getBool(0x940,2,1);
    AC4CT_Condenser2On_B1=crrcMvb->getBool(0x940,2,2);
    AC4CT_Compressor1On_B1=crrcMvb->getBool(0x940,2,3);
    AC4CT_Compressor2On_B1=crrcMvb->getBool(0x940,2,4);
    AC4CT_Heater1On_B1=crrcMvb->getBool(0x940,2,5);
    AC4CT_Heater2On_B1=crrcMvb->getBool(0x940,2,6);
    AC4CT_Heater3On_B1=crrcMvb->getBool(0x940,2,7);

    AC4CT_Heater4On_B1=crrcMvb->getBool(0x940,3,0);
    AC4CT_AutoHeat_B1=crrcMvb->getBool(0x940,3,1);
    AC4CT_AutoCool_B1=crrcMvb->getBool(0x940,3,2);
    AC4CT_Ventilation_B1=crrcMvb->getBool(0x940,3,3);
    AC4CT_EmVentilation_B1=crrcMvb->getBool(0x940,3,4);
    AC4CT_HVACStopped_B1=crrcMvb->getBool(0x940,3,5);
    AC4CT_PreCool_B1=crrcMvb->getBool(0x940,3,6);
    AC4CT_PreHeat_B1=crrcMvb->getBool(0x940,3,7);

    AC4CT_ReturnAirTemp_I16=crrcMvb->getSignedInt(0x940,4);
    AC4CT_RoomTemp1_I16=crrcMvb->getSignedInt(0x940,6);
    AC4CT_RoomTemp2_I16=crrcMvb->getSignedInt(0x940,8);
    AC4CT_FreshAir1Temp_I16=crrcMvb->getSignedInt(0x940,10);
    AC4CT_FreshAir2Temp_I16=crrcMvb->getSignedInt(0x940,12);
    AC4CT_OutRoomTemp_I16=crrcMvb->getSignedInt(0x940,14);
    AC4CT_TargetTemp_I16=crrcMvb->getSignedInt(0x940,16);

    AC4CT_SIV1StatusFB_B1=crrcMvb->getBool(0x940,18,0);
    AC4CT_SIV2StatusFB_B1=crrcMvb->getBool(0x940,18,1);
    AC4CT_SIV3StatusFB_B1=crrcMvb->getBool(0x940,18,2);
    AC4CT_SIV4StatusFB_B1=crrcMvb->getBool(0x940,18,3);
    AC4CT_FreshAirOpen13_B1=crrcMvb->getBool(0x940,18,4);
    AC4CT_FreshAirOpen23_B1=crrcMvb->getBool(0x940,18,5);
    AC4CT_FreshAirOpenFull_B1=crrcMvb->getBool(0x940,18,6);
    AC4CT_FreshAirClosed_B1=crrcMvb->getBool(0x940,18,7);

    AC4CT_ReturnAirOpen13_B1=crrcMvb->getBool(0x940,19,0);
    AC4CT_ReturnAirOpen23_B1=crrcMvb->getBool(0x940,19,1);
    AC4CT_ReturnAirOpenFull_B1=crrcMvb->getBool(0x940,19,2);
    AC4CT_ReturnAirClosed_B1=crrcMvb->getBool(0x940,19,3);
//    AC4CT_Ventilator1OLFlt_B1=crrcMvb->getBool(0x940,19,4);
//    AC4CT_Ventilator2OLFlt_B1=crrcMvb->getBool(0x940,19,5);
//    AC4CT_Condenser1OLFlt_B1=crrcMvb->getBool(0x940,19,6);
//    AC4CT_Condenser2OLFlt_B1=crrcMvb->getBool(0x940,19,7);

//    AC4CT_Compressor1Overload_B1=crrcMvb->getBool(0x940,20,0);
//    AC4CT_Compressor1HighVol_B1=crrcMvb->getBool(0x940,20,1);
//    AC4CT_Compressor1LowVol_B1=crrcMvb->getBool(0x940,20,2);
//    AC4CT_Compressor2Overload_B1=crrcMvb->getBool(0x940,20,3);
//    AC4CT_Compressor2HighVol_B1=crrcMvb->getBool(0x940,20,4);
//    AC4CT_Compressor2LowVol_B1=crrcMvb->getBool(0x940,20,5);
//    AC4CT_Heater1Flt_B1=crrcMvb->getBool(0x940,20,6);
//    AC4CT_Heater2Flt_B1=crrcMvb->getBool(0x940,20,7);

//    AC4CT_Heater3Flt_B1=crrcMvb->getBool(0x940,21,0);
//    AC4CT_Heater4Flt_B1=crrcMvb->getBool(0x940,21,1);
//    AC4CT_FreshAirSensor1Flt_B1=crrcMvb->getBool(0x940,21,2);
//    AC4CT_FreshAirSensor2Flt_B1=crrcMvb->getBool(0x940,21,3);
//    AC4CT_ReturnAirSensorFlt_B1=crrcMvb->getBool(0x940,21,4);
//    AC4CT_SendAirSensorFlt_B1=crrcMvb->getBool(0x940,21,5);
//    AC4CT_RoomSensorFlt_B1=crrcMvb->getBool(0x940,21,6);
//    AC4CT_FreshAir1Flt_B1=crrcMvb->getBool(0x940,21,7);

//    AC4CT_FreshAir2Flt_B1=crrcMvb->getBool(0x940,22,0);
//    AC4CT_FreshAir3Flt_B1=crrcMvb->getBool(0x940,22,1);
//    AC4CT_FreshAir4Flt_B1=crrcMvb->getBool(0x940,22,2);
//    AC4CT_ReturnAir1Flt_B1=crrcMvb->getBool(0x940,22,3);
//    AC4CT_ReturnAir2Flt_B1=crrcMvb->getBool(0x940,22,4);
//    AC4CT_ReturnAir3Flt_B1=crrcMvb->getBool(0x940,22,5);
//    AC4CT_ReturnAir4Flt_B1=crrcMvb->getBool(0x940,22,6);
//    AC4CT_Compressor1FCFlt_B1=crrcMvb->getBool(0x940,22,7);

//    AC4CT_Compressor2FCFlt_B1=crrcMvb->getBool(0x940,23,0);
//    AC4CT_Comp1FCComuFlt_B1=crrcMvb->getBool(0x940,23,1);
//    AC4CT_Comp2FCComuFlt_B1=crrcMvb->getBool(0x940,23,2);
//    AC4CT_EmVentilationFCFlt_B1=crrcMvb->getBool(0x940,23,4);
//    AC4CT_ThreePhaseFlt_B1=crrcMvb->getBool(0x940,23,5);
//    AC4CT_ControllerCommuFlt_B1=crrcMvb->getBool(0x940,23,6);
//    AC4CT_MinorFlt_B1=crrcMvb->getBool(0x940,23,7);

//    AC4CT_MediumFlt_B1=crrcMvb->getBool(0x940,24,0);
//    AC4CT_MajorFlt_B1=crrcMvb->getBool(0x940,24,1);

    AC4CT_SWVersionHighByteX_U8=crrcMvb->getUnsignedChar(0x940,25);
    AC4CT_SWVersionHighByteY_U8=crrcMvb->getUnsignedChar(0x940,26);

    AC4CT_MVBLAT_B1=crrcMvb->getBool(0x940,27,0);
    AC4CT_MVBRLD_B1=crrcMvb->getBool(0x940,27,1);

    /**********************************************************HVAC5-CCU**************************************************/
    AC5CT_LifeSignal_U16=crrcMvb->getUnsignedInt(0x950,0);
    AC5CT_VentilatorOn_B1=crrcMvb->getBool(0x950,2,0);
    AC5CT_Condenser1On_B1=crrcMvb->getBool(0x950,2,1);
    AC5CT_Condenser2On_B1=crrcMvb->getBool(0x950,2,2);
    AC5CT_Compressor1On_B1=crrcMvb->getBool(0x950,2,3);
    AC5CT_Compressor2On_B1=crrcMvb->getBool(0x950,2,4);
    AC5CT_Heater1On_B1=crrcMvb->getBool(0x950,2,5);
    AC5CT_Heater2On_B1=crrcMvb->getBool(0x950,2,6);
    AC5CT_Heater3On_B1=crrcMvb->getBool(0x950,2,7);

    AC5CT_Heater4On_B1=crrcMvb->getBool(0x950,3,0);
    AC5CT_AutoHeat_B1=crrcMvb->getBool(0x950,3,1);
    AC5CT_AutoCool_B1=crrcMvb->getBool(0x950,3,2);
    AC5CT_Ventilation_B1=crrcMvb->getBool(0x950,3,3);
    AC5CT_EmVentilation_B1=crrcMvb->getBool(0x950,3,4);
    AC5CT_HVACStopped_B1=crrcMvb->getBool(0x950,3,5);
    AC5CT_PreCool_B1=crrcMvb->getBool(0x950,3,6);
    AC5CT_PreHeat_B1=crrcMvb->getBool(0x950,3,7);

    AC5CT_ReturnAirTemp_I16=crrcMvb->getSignedInt(0x950,4);
    AC5CT_RoomTemp1_I16=crrcMvb->getSignedInt(0x950,6);
    AC5CT_RoomTemp2_I16=crrcMvb->getSignedInt(0x950,8);
    AC5CT_FreshAir1Temp_I16=crrcMvb->getSignedInt(0x950,10);
    AC5CT_FreshAir2Temp_I16=crrcMvb->getSignedInt(0x950,12);
    AC5CT_OutRoomTemp_I16=crrcMvb->getSignedInt(0x950,14);
    AC5CT_TargetTemp_I16=crrcMvb->getSignedInt(0x950,16);

    AC5CT_SIV1StatusFB_B1=crrcMvb->getBool(0x950,18,0);
    AC5CT_SIV2StatusFB_B1=crrcMvb->getBool(0x950,18,1);
    AC5CT_SIV3StatusFB_B1=crrcMvb->getBool(0x950,18,2);
    AC5CT_SIV4StatusFB_B1=crrcMvb->getBool(0x950,18,3);
    AC5CT_FreshAirOpen13_B1=crrcMvb->getBool(0x950,18,4);
    AC5CT_FreshAirOpen23_B1=crrcMvb->getBool(0x950,18,5);
    AC5CT_FreshAirOpenFull_B1=crrcMvb->getBool(0x950,18,6);
    AC5CT_FreshAirClosed_B1=crrcMvb->getBool(0x950,18,7);

    AC5CT_ReturnAirOpen13_B1=crrcMvb->getBool(0x950,19,0);
    AC5CT_ReturnAirOpen23_B1=crrcMvb->getBool(0x950,19,1);
    AC5CT_ReturnAirOpenFull_B1=crrcMvb->getBool(0x950,19,2);
    AC5CT_ReturnAirClosed_B1=crrcMvb->getBool(0x950,19,3);
//    AC5CT_Ventilator1OLFlt_B1=crrcMvb->getBool(0x950,19,4);
//    AC5CT_Ventilator2OLFlt_B1=crrcMvb->getBool(0x950,19,5);
//    AC5CT_Condenser1OLFlt_B1=crrcMvb->getBool(0x950,19,6);
//    AC5CT_Condenser2OLFlt_B1=crrcMvb->getBool(0x950,19,7);

//    AC5CT_Compressor1Overload_B1=crrcMvb->getBool(0x950,20,0);
//    AC5CT_Compressor1HighVol_B1=crrcMvb->getBool(0x950,20,1);
//    AC5CT_Compressor1LowVol_B1=crrcMvb->getBool(0x950,20,2);
//    AC5CT_Compressor2Overload_B1=crrcMvb->getBool(0x950,20,3);
//    AC5CT_Compressor2HighVol_B1=crrcMvb->getBool(0x950,20,4);
//    AC5CT_Compressor2LowVol_B1=crrcMvb->getBool(0x950,20,5);
//    AC5CT_Heater1Flt_B1=crrcMvb->getBool(0x950,20,6);
//    AC5CT_Heater2Flt_B1=crrcMvb->getBool(0x950,20,7);

//    AC5CT_Heater3Flt_B1=crrcMvb->getBool(0x950,21,0);
//    AC5CT_Heater4Flt_B1=crrcMvb->getBool(0x950,21,1);
//    AC5CT_FreshAirSensor1Flt_B1=crrcMvb->getBool(0x950,21,2);
//    AC5CT_FreshAirSensor2Flt_B1=crrcMvb->getBool(0x950,21,3);
//    AC5CT_ReturnAirSensorFlt_B1=crrcMvb->getBool(0x950,21,4);
//    AC5CT_SendAirSensorFlt_B1=crrcMvb->getBool(0x950,21,5);
//    AC5CT_RoomSensorFlt_B1=crrcMvb->getBool(0x950,21,6);
//    AC5CT_FreshAir1Flt_B1=crrcMvb->getBool(0x950,21,7);

//    AC5CT_FreshAir2Flt_B1=crrcMvb->getBool(0x950,22,0);
//    AC5CT_FreshAir3Flt_B1=crrcMvb->getBool(0x950,22,1);
//    AC5CT_FreshAir4Flt_B1=crrcMvb->getBool(0x950,22,2);
//    AC5CT_ReturnAir1Flt_B1=crrcMvb->getBool(0x950,22,3);
//    AC5CT_ReturnAir2Flt_B1=crrcMvb->getBool(0x950,22,4);
//    AC5CT_ReturnAir3Flt_B1=crrcMvb->getBool(0x950,22,5);
//    AC5CT_ReturnAir4Flt_B1=crrcMvb->getBool(0x950,22,6);
//    AC5CT_Compressor1FCFlt_B1=crrcMvb->getBool(0x950,22,7);

//    AC5CT_Compressor2FCFlt_B1=crrcMvb->getBool(0x950,23,0);
//    AC5CT_Comp1FCComuFlt_B1=crrcMvb->getBool(0x950,23,1);
//    AC5CT_Comp2FCComuFlt_B1=crrcMvb->getBool(0x950,23,2);
//    AC5CT_EmVentilationFCFlt_B1=crrcMvb->getBool(0x950,23,4);
//    AC5CT_ThreePhaseFlt_B1=crrcMvb->getBool(0x950,23,5);
//    AC5CT_ControllerCommuFlt_B1=crrcMvb->getBool(0x950,23,6);
//    AC5CT_MinorFlt_B1=crrcMvb->getBool(0x950,23,7);

//    AC5CT_MediumFlt_B1=crrcMvb->getBool(0x950,24,0);
//    AC5CT_MajorFlt_B1=crrcMvb->getBool(0x950,24,1);

    AC5CT_SWVersionHighByteX_U8=crrcMvb->getUnsignedChar(0x950,25);
    AC5CT_SWVersionHighByteY_U8=crrcMvb->getUnsignedChar(0x950,26);

    AC5CT_MVBLAT_B1=crrcMvb->getBool(0x950,27,0);
    AC5CT_MVBRLD_B1=crrcMvb->getBool(0x950,27,1);


    /**********************************************************HVAC6-CCU**************************************************/
    AC6CT_LifeSignal_U16=crrcMvb->getUnsignedInt(0x960,0);
    AC6CT_VentilatorOn_B1=crrcMvb->getBool(0x960,2,0);
    AC6CT_Condenser1On_B1=crrcMvb->getBool(0x960,2,1);
    AC6CT_Condenser2On_B1=crrcMvb->getBool(0x960,2,2);
    AC6CT_Compressor1On_B1=crrcMvb->getBool(0x960,2,3);
    AC6CT_Compressor2On_B1=crrcMvb->getBool(0x960,2,4);
    AC6CT_Heater1On_B1=crrcMvb->getBool(0x960,2,5);
    AC6CT_Heater2On_B1=crrcMvb->getBool(0x960,2,6);
    AC6CT_Heater3On_B1=crrcMvb->getBool(0x960,2,7);

    AC6CT_Heater4On_B1=crrcMvb->getBool(0x960,3,0);
    AC6CT_AutoHeat_B1=crrcMvb->getBool(0x960,3,1);
    AC6CT_AutoCool_B1=crrcMvb->getBool(0x960,3,2);
    AC6CT_Ventilation_B1=crrcMvb->getBool(0x960,3,3);
    AC6CT_EmVentilation_B1=crrcMvb->getBool(0x960,3,4);
    AC6CT_HVACStopped_B1=crrcMvb->getBool(0x960,3,5);
    AC6CT_PreCool_B1=crrcMvb->getBool(0x960,3,6);
    AC6CT_PreHeat_B1=crrcMvb->getBool(0x960,3,7);

    AC6CT_ReturnAirTemp_I16=crrcMvb->getSignedInt(0x960,4);
    AC6CT_RoomTemp1_I16=crrcMvb->getSignedInt(0x960,6);
    AC6CT_RoomTemp2_I16=crrcMvb->getSignedInt(0x960,8);
    AC6CT_FreshAir1Temp_I16=crrcMvb->getSignedInt(0x960,10);
    AC6CT_FreshAir2Temp_I16=crrcMvb->getSignedInt(0x960,12);
    AC6CT_OutRoomTemp_I16=crrcMvb->getSignedInt(0x960,14);
    AC6CT_TargetTemp_I16=crrcMvb->getSignedInt(0x960,16);

    AC6CT_SIV1StatusFB_B1=crrcMvb->getBool(0x960,18,0);
    AC6CT_SIV2StatusFB_B1=crrcMvb->getBool(0x960,18,1);
    AC6CT_SIV3StatusFB_B1=crrcMvb->getBool(0x960,18,2);
    AC6CT_SIV4StatusFB_B1=crrcMvb->getBool(0x960,18,3);
    AC6CT_FreshAirOpen13_B1=crrcMvb->getBool(0x960,18,4);
    AC6CT_FreshAirOpen23_B1=crrcMvb->getBool(0x960,18,5);
    AC6CT_FreshAirOpenFull_B1=crrcMvb->getBool(0x960,18,6);
    AC6CT_FreshAirClosed_B1=crrcMvb->getBool(0x960,18,7);

    AC6CT_ReturnAirOpen13_B1=crrcMvb->getBool(0x960,19,0);
    AC6CT_ReturnAirOpen23_B1=crrcMvb->getBool(0x960,19,1);
    AC6CT_ReturnAirOpenFull_B1=crrcMvb->getBool(0x960,19,2);
    AC6CT_ReturnAirClosed_B1=crrcMvb->getBool(0x960,19,3);
//    AC6CT_Ventilator1OLFlt_B1=crrcMvb->getBool(0x960,19,4);
//    AC6CT_Ventilator2OLFlt_B1=crrcMvb->getBool(0x960,19,5);
//    AC6CT_Condenser1OLFlt_B1=crrcMvb->getBool(0x960,19,6);
//    AC6CT_Condenser2OLFlt_B1=crrcMvb->getBool(0x960,19,7);

//    AC6CT_Compressor1Overload_B1=crrcMvb->getBool(0x960,20,0);
//    AC6CT_Compressor1HighVol_B1=crrcMvb->getBool(0x960,20,1);
//    AC6CT_Compressor1LowVol_B1=crrcMvb->getBool(0x960,20,2);
//    AC6CT_Compressor2Overload_B1=crrcMvb->getBool(0x960,20,3);
//    AC6CT_Compressor2HighVol_B1=crrcMvb->getBool(0x960,20,4);
//    AC6CT_Compressor2LowVol_B1=crrcMvb->getBool(0x960,20,5);
//    AC6CT_Heater1Flt_B1=crrcMvb->getBool(0x960,20,6);
//    AC6CT_Heater2Flt_B1=crrcMvb->getBool(0x960,20,7);

//    AC6CT_Heater3Flt_B1=crrcMvb->getBool(0x960,21,0);
//    AC6CT_Heater4Flt_B1=crrcMvb->getBool(0x960,21,1);
//    AC6CT_FreshAirSensor1Flt_B1=crrcMvb->getBool(0x960,21,2);
//    AC6CT_FreshAirSensor2Flt_B1=crrcMvb->getBool(0x960,21,3);
//    AC6CT_ReturnAirSensorFlt_B1=crrcMvb->getBool(0x960,21,4);
//    AC6CT_SendAirSensorFlt_B1=crrcMvb->getBool(0x960,21,5);
//    AC6CT_RoomSensorFlt_B1=crrcMvb->getBool(0x960,21,6);
//    AC6CT_FreshAir1Flt_B1=crrcMvb->getBool(0x960,21,7);

//    AC6CT_FreshAir2Flt_B1=crrcMvb->getBool(0x960,22,0);
//    AC6CT_FreshAir3Flt_B1=crrcMvb->getBool(0x960,22,1);
//    AC6CT_FreshAir4Flt_B1=crrcMvb->getBool(0x960,22,2);
//    AC6CT_ReturnAir1Flt_B1=crrcMvb->getBool(0x960,22,3);
//    AC6CT_ReturnAir2Flt_B1=crrcMvb->getBool(0x960,22,4);
//    AC6CT_ReturnAir3Flt_B1=crrcMvb->getBool(0x960,22,5);
//    AC6CT_ReturnAir4Flt_B1=crrcMvb->getBool(0x960,22,6);
//    AC6CT_Compressor1FCFlt_B1=crrcMvb->getBool(0x960,22,7);

//    AC6CT_Compressor2FCFlt_B1=crrcMvb->getBool(0x960,23,0);
//    AC6CT_Comp1FCComuFlt_B1=crrcMvb->getBool(0x960,23,1);
//    AC6CT_Comp2FCComuFlt_B1=crrcMvb->getBool(0x960,23,2);
//    AC6CT_EmVentilationFCFlt_B1=crrcMvb->getBool(0x960,23,4);
//    AC6CT_ThreePhaseFlt_B1=crrcMvb->getBool(0x960,23,5);
//    AC6CT_ControllerCommuFlt_B1=crrcMvb->getBool(0x960,23,6);
//    AC6CT_MinorFlt_B1=crrcMvb->getBool(0x960,23,7);

//    AC6CT_MediumFlt_B1=crrcMvb->getBool(0x960,24,0);
//    AC6CT_MajorFlt_B1=crrcMvb->getBool(0x960,24,1);

    AC6CT_SWVersionHighByteX_U8=crrcMvb->getUnsignedChar(0x960,25);
    AC6CT_SWVersionHighByteY_U8=crrcMvb->getUnsignedChar(0x960,26);

    AC6CT_MVBLAT_B1=crrcMvb->getBool(0x960,27,0);
    AC6CT_MVBRLD_B1=crrcMvb->getBool(0x960,27,1);

    /********************************************CCU→HVAC1************************************************************/
    CTAC1_AutoHeat_B1=crrcMvb->getBool(0x918,0,0);
    CTAC1_AutoCool_B1=crrcMvb->getBool(0x918,0,1);
    CTAC1_Ventilation_B1=crrcMvb->getBool(0x918,0,2);
    CTAC1_HVACStop_B1=crrcMvb->getBool(0x918,0,3);
    CTAC1_EmergencyVentilation_B1=crrcMvb->getBool(0x918,0,4);
    CTAC1_SIV1Status_B1=crrcMvb->getBool(0x918,0,5);
    CTAC1_SIV2Status_B1=crrcMvb->getBool(0x918,0,6);
    CTAC1_SIV3Status_B1=crrcMvb->getBool(0x918,0,7);

    CTAC1_SIV4Status_B1=crrcMvb->getBool(0x918,1,0);
    CTAC1_TempAdd0_B1=crrcMvb->getBool(0x918,1,2);
    CTAC1_TempAdd0Point5_B1=crrcMvb->getBool(0x918,1,3);
    CTAC1_TempAdd1_B1=crrcMvb->getBool(0x918,1,4);
    CTAC1_TempAdd1Point5_B1=crrcMvb->getBool(0x918,1,5);
    CTAC1_TempAdd2_B1=crrcMvb->getBool(0x918,1,6);
    CTAC1_TempAdd2Point5_B1=crrcMvb->getBool(0x918,1,7);

    CTAC1_TempReduce0Point5_B1=crrcMvb->getBool(0x918,2,0);
    CTAC1_TempReduce1_B1=crrcMvb->getBool(0x918,2,1);
    CTAC1_TempReduce1Point5_B1=crrcMvb->getBool(0x918,2,2);
    CTAC1_TempReduce2_B1=crrcMvb->getBool(0x918,2,3);
    CTAC1_TempReduce2Point5_B1=crrcMvb->getBool(0x918,2,4);

    CTAC1_LoadHighByte_U16=crrcMvb->getUnsignedInt(0x918,3);
    CTAC1_LoadLowByte_U16=crrcMvb->getUnsignedInt(0x918,5);

    /********************************************CCU→HVAC2************************************************************/
    CTAC2_AutoHeat_B1=crrcMvb->getBool(0x928,0,0);
    CTAC2_AutoCool_B1=crrcMvb->getBool(0x928,0,1);
    CTAC2_Ventilation_B1=crrcMvb->getBool(0x928,0,2);
    CTAC2_HVACStop_B1=crrcMvb->getBool(0x928,0,3);
    CTAC2_EmergencyVentilation_B1=crrcMvb->getBool(0x928,0,4);
    CTAC2_SIV1Status_B1=crrcMvb->getBool(0x928,0,5);
    CTAC2_SIV2Status_B1=crrcMvb->getBool(0x928,0,6);
    CTAC2_SIV3Status_B1=crrcMvb->getBool(0x928,0,7);

    CTAC2_SIV4Status_B1=crrcMvb->getBool(0x928,1,0);
    CTAC2_TempAdd0_B1=crrcMvb->getBool(0x928,1,2);
    CTAC2_TempAdd0Point5_B1=crrcMvb->getBool(0x928,1,3);
    CTAC2_TempAdd1_B1=crrcMvb->getBool(0x928,1,4);
    CTAC2_TempAdd1Point5_B1=crrcMvb->getBool(0x928,1,5);
    CTAC2_TempAdd2_B1=crrcMvb->getBool(0x928,1,6);
    CTAC2_TempAdd2Point5_B1=crrcMvb->getBool(0x928,1,7);

    CTAC2_TempReduce0Point5_B1=crrcMvb->getBool(0x928,2,0);
    CTAC2_TempReduce1_B1=crrcMvb->getBool(0x928,2,1);
    CTAC2_TempReduce1Point5_B1=crrcMvb->getBool(0x928,2,2);
    CTAC2_TempReduce2_B1=crrcMvb->getBool(0x928,2,3);
    CTAC2_TempReduce2Point5_B1=crrcMvb->getBool(0x928,2,4);

    CTAC2_LoadHighByte_U16=crrcMvb->getUnsignedInt(0x928,3);
    CTAC2_LoadLowByte_U16=crrcMvb->getUnsignedInt(0x928,5);


    /********************************************CCU→HVAC3************************************************************/
    CTAC3_AutoHeat_B1=crrcMvb->getBool(0x938,0,0);
    CTAC3_AutoCool_B1=crrcMvb->getBool(0x938,0,1);
    CTAC3_Ventilation_B1=crrcMvb->getBool(0x938,0,2);
    CTAC3_HVACStop_B1=crrcMvb->getBool(0x938,0,3);
    CTAC3_EmergencyVentilation_B1=crrcMvb->getBool(0x938,0,4);
    CTAC3_SIV1Status_B1=crrcMvb->getBool(0x938,0,5);
    CTAC3_SIV2Status_B1=crrcMvb->getBool(0x938,0,6);
    CTAC3_SIV3Status_B1=crrcMvb->getBool(0x938,0,7);

    CTAC3_SIV4Status_B1=crrcMvb->getBool(0x938,1,0);
    CTAC3_TempAdd0_B1=crrcMvb->getBool(0x938,1,2);
    CTAC3_TempAdd0Point5_B1=crrcMvb->getBool(0x938,1,3);
    CTAC3_TempAdd1_B1=crrcMvb->getBool(0x938,1,4);
    CTAC3_TempAdd1Point5_B1=crrcMvb->getBool(0x938,1,5);
    CTAC3_TempAdd2_B1=crrcMvb->getBool(0x938,1,6);
    CTAC3_TempAdd2Point5_B1=crrcMvb->getBool(0x938,1,7);

    CTAC3_TempReduce0Point5_B1=crrcMvb->getBool(0x938,2,0);
    CTAC3_TempReduce1_B1=crrcMvb->getBool(0x938,2,1);
    CTAC3_TempReduce1Point5_B1=crrcMvb->getBool(0x938,2,2);
    CTAC3_TempReduce2_B1=crrcMvb->getBool(0x938,2,3);
    CTAC3_TempReduce2Point5_B1=crrcMvb->getBool(0x938,2,4);

    CTAC3_LoadHighByte_U16=crrcMvb->getUnsignedInt(0x938,3);
    CTAC3_LoadLowByte_U16=crrcMvb->getUnsignedInt(0x938,5);


    /********************************************CCU→HVAC4************************************************************/
    CTAC4_AutoHeat_B1=crrcMvb->getBool(0x948,0,0);
    CTAC4_AutoCool_B1=crrcMvb->getBool(0x948,0,1);
    CTAC4_Ventilation_B1=crrcMvb->getBool(0x948,0,2);
    CTAC4_HVACStop_B1=crrcMvb->getBool(0x948,0,3);
    CTAC4_EmergencyVentilation_B1=crrcMvb->getBool(0x948,0,4);
    CTAC4_SIV1Status_B1=crrcMvb->getBool(0x948,0,5);
    CTAC4_SIV2Status_B1=crrcMvb->getBool(0x948,0,6);
    CTAC4_SIV3Status_B1=crrcMvb->getBool(0x948,0,7);

    CTAC4_SIV4Status_B1=crrcMvb->getBool(0x948,1,0);
    CTAC4_TempAdd0_B1=crrcMvb->getBool(0x948,1,2);
    CTAC4_TempAdd0Point5_B1=crrcMvb->getBool(0x948,1,3);
    CTAC4_TempAdd1_B1=crrcMvb->getBool(0x948,1,4);
    CTAC4_TempAdd1Point5_B1=crrcMvb->getBool(0x948,1,5);
    CTAC4_TempAdd2_B1=crrcMvb->getBool(0x948,1,6);
    CTAC4_TempAdd2Point5_B1=crrcMvb->getBool(0x948,1,7);

    CTAC4_TempReduce0Point5_B1=crrcMvb->getBool(0x948,2,0);
    CTAC4_TempReduce1_B1=crrcMvb->getBool(0x948,2,1);
    CTAC4_TempReduce1Point5_B1=crrcMvb->getBool(0x948,2,2);
    CTAC4_TempReduce2_B1=crrcMvb->getBool(0x948,2,3);
    CTAC4_TempReduce2Point5_B1=crrcMvb->getBool(0x948,2,4);

    CTAC4_LoadHighByte_U16=crrcMvb->getUnsignedInt(0x948,3);
    CTAC4_LoadLowByte_U16=crrcMvb->getUnsignedInt(0x948,5);

    /********************************************CCU→HVAC5************************************************************/
    CTAC5_AutoHeat_B1=crrcMvb->getBool(0x958,0,0);
    CTAC5_AutoCool_B1=crrcMvb->getBool(0x958,0,1);
    CTAC5_Ventilation_B1=crrcMvb->getBool(0x958,0,2);
    CTAC5_HVACStop_B1=crrcMvb->getBool(0x958,0,3);
    CTAC5_EmergencyVentilation_B1=crrcMvb->getBool(0x958,0,4);
    CTAC5_SIV1Status_B1=crrcMvb->getBool(0x958,0,5);
    CTAC5_SIV2Status_B1=crrcMvb->getBool(0x958,0,6);
    CTAC5_SIV3Status_B1=crrcMvb->getBool(0x958,0,7);

    CTAC5_SIV4Status_B1=crrcMvb->getBool(0x958,1,0);
    CTAC5_TempAdd0_B1=crrcMvb->getBool(0x958,1,2);
    CTAC5_TempAdd0Point5_B1=crrcMvb->getBool(0x958,1,3);
    CTAC5_TempAdd1_B1=crrcMvb->getBool(0x958,1,4);
    CTAC5_TempAdd1Point5_B1=crrcMvb->getBool(0x958,1,5);
    CTAC5_TempAdd2_B1=crrcMvb->getBool(0x958,1,6);
    CTAC5_TempAdd2Point5_B1=crrcMvb->getBool(0x958,1,7);

    CTAC5_TempReduce0Point5_B1=crrcMvb->getBool(0x958,2,0);
    CTAC5_TempReduce1_B1=crrcMvb->getBool(0x958,2,1);
    CTAC5_TempReduce1Point5_B1=crrcMvb->getBool(0x958,2,2);
    CTAC5_TempReduce2_B1=crrcMvb->getBool(0x958,2,3);
    CTAC5_TempReduce2Point5_B1=crrcMvb->getBool(0x958,2,4);

    CTAC5_LoadHighByte_U16=crrcMvb->getUnsignedInt(0x958,3);
    CTAC5_LoadLowByte_U16=crrcMvb->getUnsignedInt(0x958,5);


    /********************************************CCU→HVAC6************************************************************/
    CTAC6_AutoHeat_B1=crrcMvb->getBool(0x968,0,0);
    CTAC6_AutoCool_B1=crrcMvb->getBool(0x968,0,1);
    CTAC6_Ventilation_B1=crrcMvb->getBool(0x968,0,2);
    CTAC6_HVACStop_B1=crrcMvb->getBool(0x968,0,3);
    CTAC6_EmergencyVentilation_B1=crrcMvb->getBool(0x968,0,4);
    CTAC6_SIV1Status_B1=crrcMvb->getBool(0x968,0,5);
    CTAC6_SIV2Status_B1=crrcMvb->getBool(0x968,0,6);
    CTAC6_SIV3Status_B1=crrcMvb->getBool(0x968,0,7);

    CTAC6_SIV4Status_B1=crrcMvb->getBool(0x968,1,0);
    CTAC6_TempAdd0_B1=crrcMvb->getBool(0x968,1,2);
    CTAC6_TempAdd0Point5_B1=crrcMvb->getBool(0x968,1,3);
    CTAC6_TempAdd1_B1=crrcMvb->getBool(0x968,1,4);
    CTAC6_TempAdd1Point5_B1=crrcMvb->getBool(0x968,1,5);
    CTAC6_TempAdd2_B1=crrcMvb->getBool(0x968,1,6);
    CTAC6_TempAdd2Point5_B1=crrcMvb->getBool(0x968,1,7);

    CTAC6_TempReduce0Point5_B1=crrcMvb->getBool(0x968,2,0);
    CTAC6_TempReduce1_B1=crrcMvb->getBool(0x968,2,1);
    CTAC6_TempReduce1Point5_B1=crrcMvb->getBool(0x968,2,2);
    CTAC6_TempReduce2_B1=crrcMvb->getBool(0x968,2,3);
    CTAC6_TempReduce2Point5_B1=crrcMvb->getBool(0x968,2,4);

    CTAC6_LoadHighByte_U16=crrcMvb->getUnsignedInt(0x968,3);
    CTAC6_LoadLowByte_U16=crrcMvb->getUnsignedInt(0x968,5);

    /*************************************************ATC1→CCU**********************************************************/
    AT1CT_SN1_U8=crrcMvb->getUnsignedChar(0xA10,0);
    AT1CT_ATODOORCMD_U8=crrcMvb->getUnsignedChar(0xA10,1);
    AT1CT_DOORTYPE_U8=crrcMvb->getUnsignedChar(0xA10,2);
    AT1CT_TAB_U8=crrcMvb->getUnsignedChar(0xA10,3);
    AT1CT_OPERATIONMODE_U8=crrcMvb->getUnsignedChar(0xA10,4);
    AT1CT_CTRLSTATE_U8=crrcMvb->getUnsignedChar(0xA10,5);
    AT1CT_STATE_U8=crrcMvb->getUnsignedChar(0xA10,6);

    AT1CT_VOBCSPEED_U16=crrcMvb->getUnsignedInt(0xA10,8);

    AT1CT_AUTOREVERSE_U8=crrcMvb->getUnsignedChar(0xA10,10);
    AT1CT_VOBCLOC_U8=crrcMvb->getUnsignedChar(0xA10,11);

    AT1CT_MVBLAT_B1=crrcMvb->getBool(0xA10,12,0);
    AT1CT_MVBRLD_B1=crrcMvb->getBool(0xA10,12,1);

    AT1CT_DataValidbit15_B1=crrcMvb->getBool(0xA11,0,0);
    AT1CT_DataValidbit14_B1=crrcMvb->getBool(0xA11,0,1);
    AT1CT_DataValidbit13_B1=crrcMvb->getBool(0xA11,0,2);
    AT1CT_DataValidbit12_B1=crrcMvb->getBool(0xA11,0,3);
    AT1CT_DataValidbit11_B1=crrcMvb->getBool(0xA11,0,4);
    AT1CT_DataValidbit10_B1=crrcMvb->getBool(0xA11,0,5);
    AT1CT_DataValidbit9_B1=crrcMvb->getBool(0xA11,0,6);
    AT1CT_DataValidbit8_B1=crrcMvb->getBool(0xA11,0,7);

    AT1CT_DataValidbit7_B1=crrcMvb->getBool(0xA11,1,0);
    AT1CT_DataValidbit6_B1=crrcMvb->getBool(0xA11,1,1);
    AT1CT_DataValidbit5_B1=crrcMvb->getBool(0xA11,1,2);
    AT1CT_DataValidbit4_B1=crrcMvb->getBool(0xA11,1,3);
    AT1CT_DataValidbit3_B1=crrcMvb->getBool(0xA11,1,4);
    AT1CT_DataValidbit2_B1=crrcMvb->getBool(0xA11,1,5);
    AT1CT_DataValidbit1_B1=crrcMvb->getBool(0xA11,1,6);
    AT1CT_DataValidbit0_B1=crrcMvb->getBool(0xA11,1,7);

    AT1CT_SN2_U8=crrcMvb->getUnsignedChar(0xA11,2);
    AT1CT_NEXTDOORDIR_U8=crrcMvb->getUnsignedChar(0xA11,3);

    AT1CT_DESCODE_U32=crrcMvb->getUnsignedInt32(0xA11,4);
    AT1CT_NEXTSTATIONID_U32=crrcMvb->getUnsignedInt32(0xA11,8);
    AT1CT_CURRENTSTATIONID_U32=crrcMvb->getUnsignedInt32(0xA11,12);

    AT1CT_TARGETDIS_U16=crrcMvb->getUnsignedInt(0xA11,16);
    AT1CT_STARTINGDIS_U16=crrcMvb->getUnsignedInt(0xA11,18);

    AT1CT_YEAR_U8=crrcMvb->getUnsignedChar(0xA11,20);
    AT1CT_MONTH_U8=crrcMvb->getUnsignedChar(0xA11,21);
    AT1CT_DAY_U8=crrcMvb->getUnsignedChar(0xA11,22);
    AT1CT_HOUR_U8=crrcMvb->getUnsignedChar(0xA11,23);
    AT1CT_MINUTE_U8=crrcMvb->getUnsignedChar(0xA11,24);
    AT1CT_SECOND_U8=crrcMvb->getUnsignedChar(0xA11,25);
    AT1CT_PATEST_U8=crrcMvb->getUnsignedChar(0xA11,26);


    /*************************************************ATC2→CCU**********************************************************/
    AT2CT_SN1_U8=crrcMvb->getUnsignedChar(0xA20,0);
    AT2CT_ATODOORCMD_U8=crrcMvb->getUnsignedChar(0xA20,1);
    AT2CT_DOORTYPE_U8=crrcMvb->getUnsignedChar(0xA20,2);
    AT2CT_TAB_U8=crrcMvb->getUnsignedChar(0xA20,3);
    AT2CT_OPERATIONMODE_U8=crrcMvb->getUnsignedChar(0xA20,4);
    AT2CT_CTRLSTATE_U8=crrcMvb->getUnsignedChar(0xA20,5);
    AT2CT_STATE_U8=crrcMvb->getUnsignedChar(0xA20,6);

    AT2CT_VOBCSPEED_U16=crrcMvb->getUnsignedInt(0xA20,8);

    AT2CT_AUTOREVERSE_U8=crrcMvb->getUnsignedChar(0xA20,10);
    AT2CT_VOBCLOC_U8=crrcMvb->getUnsignedChar(0xA20,11);

    AT2CT_MVBLAT_B1=crrcMvb->getBool(0xA20,12,0);
    AT2CT_MVBRLD_B1=crrcMvb->getBool(0xA20,12,1);

    AT2CT_DataValidbit15_B1=crrcMvb->getBool(0xA21,0,0);
    AT2CT_DataValidbit14_B1=crrcMvb->getBool(0xA21,0,1);
    AT2CT_DataValidbit13_B1=crrcMvb->getBool(0xA21,0,2);
    AT2CT_DataValidbit12_B1=crrcMvb->getBool(0xA21,0,3);
    AT2CT_DataValidbit11_B1=crrcMvb->getBool(0xA21,0,4);
    AT2CT_DataValidbit10_B1=crrcMvb->getBool(0xA21,0,5);
    AT2CT_DataValidbit9_B1=crrcMvb->getBool(0xA21,0,6);
    AT2CT_DataValidbit8_B1=crrcMvb->getBool(0xA21,0,7);

    AT2CT_DataValidbit7_B1=crrcMvb->getBool(0xA21,1,0);
    AT2CT_DataValidbit6_B1=crrcMvb->getBool(0xA21,1,1);
    AT2CT_DataValidbit5_B1=crrcMvb->getBool(0xA21,1,2);
    AT2CT_DataValidbit4_B1=crrcMvb->getBool(0xA21,1,3);
    AT2CT_DataValidbit3_B1=crrcMvb->getBool(0xA21,1,4);
    AT2CT_DataValidbit2_B1=crrcMvb->getBool(0xA21,1,5);
    AT2CT_DataValidbit1_B1=crrcMvb->getBool(0xA21,1,6);
    AT2CT_DataValidbit0_B1=crrcMvb->getBool(0xA21,1,7);

    AT2CT_SN2_U8=crrcMvb->getUnsignedChar(0xA21,2);
    AT2CT_NEXTDOORDIR_U8=crrcMvb->getUnsignedChar(0xA21,3);

    AT2CT_DESCODE_U32=crrcMvb->getUnsignedInt32(0xA21,4);
    AT2CT_NEXTSTATIONID_U32=crrcMvb->getUnsignedInt32(0xA21,8);
    AT2CT_CURRENTSTATIONID_U32=crrcMvb->getUnsignedInt32(0xA21,12);

    AT2CT_TARGETDIS_U16=crrcMvb->getUnsignedInt(0xA21,16);
    AT2CT_STARTINGDIS_U16=crrcMvb->getUnsignedInt(0xA21,18);

    AT2CT_YEAR_U8=crrcMvb->getUnsignedChar(0xA21,20);
    AT2CT_MONTH_U8=crrcMvb->getUnsignedChar(0xA21,21);
    AT2CT_DAY_U8=crrcMvb->getUnsignedChar(0xA21,22);
    AT2CT_HOUR_U8=crrcMvb->getUnsignedChar(0xA21,23);
    AT2CT_MINUTE_U8=crrcMvb->getUnsignedChar(0xA21,24);
    AT2CT_SECOND_U8=crrcMvb->getUnsignedChar(0xA21,25);
    AT2CT_PATEST_U8=crrcMvb->getUnsignedChar(0xA21,26);

    /****************************************************CCU-ATC**************************************************/
    CTAT_TRAINSAFECTRL_U16=crrcMvb->getUnsignedInt(0xA08,0);
    CTAT_DOORBUTTON_U8=crrcMvb->getUnsignedChar(0xA08,2);
    CTAT_RATE_LIMITINGFAULT_U8=crrcMvb->getUnsignedChar(0xA08,3);
    CTAT_TRAINLOAD_U16=crrcMvb->getUnsignedInt(0xA08,4);

    CTAT_SERVISEBRAKEFAULT_U8=crrcMvb->getUnsignedChar(0xA08,6);
    CTAT_SLIPSTATE_U8=crrcMvb->getUnsignedChar(0xA08,7);

    CTAT_NETVOL_U16=crrcMvb->getUnsignedInt(0xA08,8);
    CTAT_NETCURRENT_U16=crrcMvb->getUnsignedInt(0xA08,10);

    CTAT_TABSTATE_U8=crrcMvb->getUnsignedChar(0xA08,12);
    CTAT_DOORENABLE_U8=crrcMvb->getUnsignedChar(0xA08,13);

    CTAT_TOTALBRAKE_U16=crrcMvb->getUnsignedInt(0xA08,14);
    CTAT_ELECTRICBRAKE_U16=crrcMvb->getUnsignedInt(0xA08,16);
    CTAT_ATOCURRENTOUTPUT_U16=crrcMvb->getUnsignedInt(0xA08,20);

    CTAT_PATESTFEEDBACK_U8=crrcMvb->getUnsignedChar(0xA08,22);
    CTAT_AtoOutputFeedback_U8=crrcMvb->getUnsignedChar(0xA08,23);
    CTAT_MANZAI_U8=crrcMvb->getUnsignedChar(0xA08,24);

    CTAT_TOTALDIS_U32=crrcMvb->getUnsignedInt32(0xA08,26);

    CTAT_DESCODEFEEDBACK_U32=crrcMvb->getUnsignedInt32(0xA09,0);
    CTAT_NEXTSTATIONIDFEEDBACK_U32=crrcMvb->getUnsignedInt32(0xA09,4);
    CTAT_CURRENTSTATIONIDFEEDBACK_U32=crrcMvb->getUnsignedInt32(0xA09,8);

    CTAT_NEXTSTATIONDOORDIRFEEDBACK_U8=crrcMvb->getUnsignedChar(0xA09,12);

    /****************************************************PIS1→CCU****************************************************/
    PA1CT_LfSgn_U8=crrcMvb->getUnsignedChar(0xB10,0);
    PA1CT_CCULifeSgn_U8=crrcMvb->getUnsignedChar(0xB10,1);

    PA1CT_EndSttnID_U16=crrcMvb->getUnsignedInt(0xB10,2);
    PA1CT_CurrntSttnID_U16=crrcMvb->getUnsignedInt(0xB10,4);
    PA1CT_NxtSttnID_U16=crrcMvb->getUnsignedInt(0xB10,6);

    PA1CT_SWVrsn_U8=crrcMvb->getUnsignedChar(0xB10,8);
    PA1CT_PIDSOprtnMd_U8=crrcMvb->getUnsignedChar(0xB10,10);
    PA1CT_RadioStt_U8=crrcMvb->getUnsignedChar(0xB10,11);
    PA1CT_CabAnswerPECUNum_B1=crrcMvb->getUnsignedChar(0xB10,12);


    PA1CT_TC1PECU1Alarm_B1=crrcMvb->getBool(0xB10,13,0);
    PA1CT_TC1PECU2Alarm_B1=crrcMvb->getBool(0xB10,13,1);
    PA1CT_Mp1PECU1Alarm_B1=crrcMvb->getBool(0xB10,13,2);
    PA1CT_Mp1PECU2Alarm_B1=crrcMvb->getBool(0xB10,13,3);
    PA1CT_M1PECU1Alarm_B1=crrcMvb->getBool(0xB10,13,4);
    PA1CT_M1PECU2Alarm_B1=crrcMvb->getBool(0xB10,13,5);
    PA1CT_Mp2PECU1Alarm_B1=crrcMvb->getBool(0xB10,13,6);
    PA1CT_Mp2PECU2Alarm_B1=crrcMvb->getBool(0xB10,13,7);

    PA1CT_M2PECU1Alarm_B1=crrcMvb->getBool(0xB10,14,0);
    PA1CT_M2PECU2Alarm_B1=crrcMvb->getBool(0xB10,14,1);
    PA1CT_M3PECU1Alarm_B1=crrcMvb->getBool(0xB10,14,2);
    PA1CT_M3PECU2Alarm_B1=crrcMvb->getBool(0xB10,14,3);

    PA1CT_PIDS1SgnlVld_B1=crrcMvb->getBool(0xB10,15,0);
    PA1CT_PIDS2SgnlVld_B1=crrcMvb->getBool(0xB10,15,1);
    PA1CT_PIDS3SgnlVld_B1=crrcMvb->getBool(0xB10,15,2);
    PA1CT_PIDS4SgnlVld_B1=crrcMvb->getBool(0xB10,15,3);
    PA1CT_PIDS5SgnlVld_B1=crrcMvb->getBool(0xB10,15,4);
    PA1CT_PIDS6SgnlVld_B1=crrcMvb->getBool(0xB10,15,5);

    PA1CT_PECU1Fault_B1=crrcMvb->getBool(0xB10,16,0);
    PA1CT_PECU2Fault_B1=crrcMvb->getBool(0xB10,16,1);
    PA1CT_PECU3Fault_B1=crrcMvb->getBool(0xB10,16,2);
    PA1CT_PECU4Fault_B1=crrcMvb->getBool(0xB10,16,3);
    PA1CT_PECU5Fault_B1=crrcMvb->getBool(0xB10,16,4);
    PA1CT_PECU6Fault_B1=crrcMvb->getBool(0xB10,16,5);
    PA1CT_PECU7Fault_B1=crrcMvb->getBool(0xB10,16,6);
    PA1CT_PECU8Fault_B1=crrcMvb->getBool(0xB10,16,7);


    PA1CT_PECU9Fault_B1=crrcMvb->getBool(0xB10,17,0);
    PA1CT_PECU10Fault_B1=crrcMvb->getBool(0xB10,17,1);
    PA1CT_PECU11Fault_B1=crrcMvb->getBool(0xB10,17,2);
    PA1CT_PECU12Fault_B1=crrcMvb->getBool(0xB10,17,3);

    PA1CT_LocationFB_U8=crrcMvb->getUnsignedChar(0xB10,26);
    PA1CT_HMI_U8=crrcMvb->getUnsignedChar(0xB10,27);

    PA1CT_PATestFB_B1=crrcMvb->getBool(0xB10,28,0);
    PA1CT_ABDrOpenAFB_B1=crrcMvb->getBool(0xB10,28,1);
    PA1CT_ABDrOpenBFB_B1=crrcMvb->getBool(0xB10,28,2);
    PA1CT_MVBLAT_B1=crrcMvb->getBool(0xB10,28,4);
    PA1CT_MVBRLD_B1=crrcMvb->getBool(0xB10,28,5);
    PA1CT_Tc1Active_B1=crrcMvb->getBool(0xB10,28,6);
    PA1CT_Tc2Active_B1=crrcMvb->getBool(0xB10,28,7);

    PA1CT_CabToCab_B1=crrcMvb->getBool(0xB10,29,0);
    PA1CT_CabToPssngr_B1=crrcMvb->getBool(0xB10,29,1);

    /****************************************************PIS2→CCU****************************************************/
    PA2CT_LfSgn_U8=crrcMvb->getUnsignedChar(0xB20,0);
    PA2CT_CCULifeSgn_U8=crrcMvb->getUnsignedChar(0xB20,1);

    PA2CT_EndSttnID_U16=crrcMvb->getUnsignedInt(0xB20,2);
    PA2CT_CurrntSttnID_U16=crrcMvb->getUnsignedInt(0xB20,4);
    PA2CT_NxtSttnID_U16=crrcMvb->getUnsignedInt(0xB20,6);

    PA2CT_SWVrsn_U8=crrcMvb->getUnsignedChar(0xB20,8);
    PA2CT_PIDSOprtnMd_U8=crrcMvb->getUnsignedChar(0xB20,10);
    PA2CT_RadioStt_U8=crrcMvb->getUnsignedChar(0xB20,11);
    PA2CT_CabAnswerPECUNum_B1=crrcMvb->getUnsignedChar(0xB20,12);


    PA2CT_TC1PECU1Alarm_B1=crrcMvb->getBool(0xB20,13,0);
    PA2CT_TC1PECU2Alarm_B1=crrcMvb->getBool(0xB20,13,1);
    PA2CT_Mp1PECU1Alarm_B1=crrcMvb->getBool(0xB20,13,2);
    PA2CT_Mp1PECU2Alarm_B1=crrcMvb->getBool(0xB20,13,3);
    PA2CT_M1PECU1Alarm_B1=crrcMvb->getBool(0xB20,13,4);
    PA2CT_M1PECU2Alarm_B1=crrcMvb->getBool(0xB20,13,5);
    PA2CT_Mp2PECU1Alarm_B1=crrcMvb->getBool(0xB20,13,6);
    PA2CT_Mp2PECU2Alarm_B1=crrcMvb->getBool(0xB20,13,7);

    PA2CT_M2PECU1Alarm_B1=crrcMvb->getBool(0xB20,14,0);
    PA2CT_M2PECU2Alarm_B1=crrcMvb->getBool(0xB20,14,1);
    PA2CT_M3PECU1Alarm_B1=crrcMvb->getBool(0xB20,14,2);
    PA2CT_M3PECU2Alarm_B1=crrcMvb->getBool(0xB20,14,3);

    PA2CT_PIDS1SgnlVld_B1=crrcMvb->getBool(0xB20,15,0);
    PA2CT_PIDS2SgnlVld_B1=crrcMvb->getBool(0xB20,15,1);
    PA2CT_PIDS3SgnlVld_B1=crrcMvb->getBool(0xB20,15,2);
    PA2CT_PIDS4SgnlVld_B1=crrcMvb->getBool(0xB20,15,3);
    PA2CT_PIDS5SgnlVld_B1=crrcMvb->getBool(0xB20,15,4);
    PA2CT_PIDS6SgnlVld_B1=crrcMvb->getBool(0xB20,15,5);

    PA2CT_PECU1Fault_B1=crrcMvb->getBool(0xB20,16,0);
    PA2CT_PECU2Fault_B1=crrcMvb->getBool(0xB20,16,1);
    PA2CT_PECU3Fault_B1=crrcMvb->getBool(0xB20,16,2);
    PA2CT_PECU4Fault_B1=crrcMvb->getBool(0xB20,16,3);
    PA2CT_PECU5Fault_B1=crrcMvb->getBool(0xB20,16,4);
    PA2CT_PECU6Fault_B1=crrcMvb->getBool(0xB20,16,5);
    PA2CT_PECU7Fault_B1=crrcMvb->getBool(0xB20,16,6);
    PA2CT_PECU8Fault_B1=crrcMvb->getBool(0xB20,16,7);


    PA2CT_PECU9Fault_B1=crrcMvb->getBool(0xB20,17,0);
    PA2CT_PECU10Fault_B1=crrcMvb->getBool(0xB20,17,1);
    PA2CT_PECU11Fault_B1=crrcMvb->getBool(0xB20,17,2);
    PA2CT_PECU12Fault_B1=crrcMvb->getBool(0xB20,17,3);

    PA2CT_LocationFB_U8=crrcMvb->getUnsignedChar(0xB20,26);
    PA2CT_HMI_U8=crrcMvb->getUnsignedChar(0xB20,27);

    PA2CT_PATestFB_B1=crrcMvb->getBool(0xB20,28,0);
    PA2CT_ABDrOpenAFB_B1=crrcMvb->getBool(0xB20,28,1);
    PA2CT_ABDrOpenBFB_B1=crrcMvb->getBool(0xB20,28,2);
    PA2CT_MVBLAT_B1=crrcMvb->getBool(0xB20,28,4);
    PA2CT_MVBRLD_B1=crrcMvb->getBool(0xB20,28,5);
    PA2CT_Tc1Active_B1=crrcMvb->getBool(0xB20,28,6);
    PA2CT_Tc2Active_B1=crrcMvb->getBool(0xB20,28,7);

    PA2CT_CabToCab_B1=crrcMvb->getBool(0xB20,29,0);
    PA2CT_CabToPssngr_B1=crrcMvb->getBool(0xB20,29,1);

    /***************************************************CCU-PIS*****************************************************/
    CTPA_CrrntPNO_U32=crrcMvb->getUnsignedInt32(0xB08,0);
    CTPA_NextPNO_U32=crrcMvb->getUnsignedInt32(0xB08,4);
    CTPA_DstntnPNO_U32=crrcMvb->getUnsignedInt32(0xB08,8);

    CTPA_TARGETDIS_U16=crrcMvb->getUnsignedInt(0xB08,12);
    CTPA_STARTINGDIS_U16=crrcMvb->getUnsignedInt(0xB08,14);

    CTPA_CTRLSTATE_U8=crrcMvb->getUnsignedChar(0xB08,16);
    CTPA_STATE_U8=crrcMvb->getUnsignedChar(0xB08,17);
    CTPA_ATCOnline_U8=crrcMvb->getUnsignedChar(0xB08,18);

    CTPA_NPSideADrOpn_B1=crrcMvb->getBool(0xB08,19,0);
    CTPA_NPSideBDrOpn_B1=crrcMvb->getBool(0xB08,19,1);
    CTPA_ABDrOpenA_B1=crrcMvb->getBool(0xB08,19,2);
    CTPA_ABDrOpenB_B1=crrcMvb->getBool(0xB08,19,3);
    CTPA_AllDrClsd_B1=crrcMvb->getBool(0xB08,19,4);
    CTPA_DrOpnd_B1=crrcMvb->getBool(0xB08,19,5);
    CTPA_AMMode_B1=crrcMvb->getBool(0xB08,19,6);
    CTPA_CMMode_B1=crrcMvb->getBool(0xB08,19,7);

    CTPA_RMMode_B1=crrcMvb->getBool(0xB08,20,0);
    CTPA_AutoReverse_B1=crrcMvb->getBool(0xB08,20,1);
    CTPA_PATest_B1=crrcMvb->getBool(0xB08,20,2);
    CTPA_Tc1Active_B1=crrcMvb->getBool(0xB08,20,3);
    CTPA_Tc2Active_B1=crrcMvb->getBool(0xB08,20,4);
    CTPA_OpenLeft_B1=crrcMvb->getBool(0xB08,20,5);
    CTPA_OpenRight_B1=crrcMvb->getBool(0xB08,20,6);

    CTPA_EEDIsActvtdTc1Dr1_B1=crrcMvb->getBool(0xB08,21,0);
    CTPA_EEDIsActvtdTc1Dr2_B1=crrcMvb->getBool(0xB08,21,1);
    CTPA_EEDIsActvtdTc1Dr3_B1=crrcMvb->getBool(0xB08,21,2);
    CTPA_EEDIsActvtdTc1Dr4_B1=crrcMvb->getBool(0xB08,21,3);
    CTPA_EEDIsActvtdTc1Dr5_B1=crrcMvb->getBool(0xB08,21,4);
    CTPA_EEDIsActvtdTc1Dr6_B1=crrcMvb->getBool(0xB08,21,5);
    CTPA_EEDIsActvtdTc1Dr7_B1=crrcMvb->getBool(0xB08,21,6);
    CTPA_EEDIsActvtdTc1Dr8_B1=crrcMvb->getBool(0xB08,21,7);

    CTPA_EEDIsActvtdMp1Dr1_B1=crrcMvb->getBool(0xB08,22,0);
    CTPA_EEDIsActvtdMp1Dr2_B1=crrcMvb->getBool(0xB08,22,1);
    CTPA_EEDIsActvtdMp1Dr3_B1=crrcMvb->getBool(0xB08,22,2);
    CTPA_EEDIsActvtdMp1Dr4_B1=crrcMvb->getBool(0xB08,22,3);
    CTPA_EEDIsActvtdMp1Dr5_B1=crrcMvb->getBool(0xB08,22,4);
    CTPA_EEDIsActvtdMp1Dr6_B1=crrcMvb->getBool(0xB08,22,5);
    CTPA_EEDIsActvtdMp1Dr7_B1=crrcMvb->getBool(0xB08,22,6);
    CTPA_EEDIsActvtdMp1Dr8_B1=crrcMvb->getBool(0xB08,22,7);

    CTPA_EEDIsActvtdM1Dr1_B1=crrcMvb->getBool(0xB08,23,0);
    CTPA_EEDIsActvtdM1Dr2_B1=crrcMvb->getBool(0xB08,23,1);
    CTPA_EEDIsActvtdM1Dr3_B1=crrcMvb->getBool(0xB08,23,2);
    CTPA_EEDIsActvtdM1Dr4_B1=crrcMvb->getBool(0xB08,23,3);
    CTPA_EEDIsActvtdM1Dr5_B1=crrcMvb->getBool(0xB08,23,4);
    CTPA_EEDIsActvtdM1Dr6_B1=crrcMvb->getBool(0xB08,23,5);
    CTPA_EEDIsActvtdM1Dr7_B1=crrcMvb->getBool(0xB08,23,6);
    CTPA_EEDIsActvtdM1Dr8_B1=crrcMvb->getBool(0xB08,23,7);

    CTPA_EEDIsActvtdM2Dr1_B1=crrcMvb->getBool(0xB08,24,0);
    CTPA_EEDIsActvtdM2Dr2_B1=crrcMvb->getBool(0xB08,24,1);
    CTPA_EEDIsActvtdM2Dr3_B1=crrcMvb->getBool(0xB08,24,2);
    CTPA_EEDIsActvtdM2Dr4_B1=crrcMvb->getBool(0xB08,24,3);
    CTPA_EEDIsActvtdM2Dr5_B1=crrcMvb->getBool(0xB08,24,4);
    CTPA_EEDIsActvtdM2Dr6_B1=crrcMvb->getBool(0xB08,24,5);
    CTPA_EEDIsActvtdM2Dr7_B1=crrcMvb->getBool(0xB08,24,6);
    CTPA_EEDIsActvtdM2Dr8_B1=crrcMvb->getBool(0xB08,24,7);

    CTPA_EEDIsActvtdMp2Dr1_B1=crrcMvb->getBool(0xB08,25,0);
    CTPA_EEDIsActvtdMp2Dr2_B1=crrcMvb->getBool(0xB08,25,1);
    CTPA_EEDIsActvtdMp2Dr3_B1=crrcMvb->getBool(0xB08,25,2);
    CTPA_EEDIsActvtdMp2Dr4_B1=crrcMvb->getBool(0xB08,25,3);
    CTPA_EEDIsActvtdMp2Dr5_B1=crrcMvb->getBool(0xB08,25,4);
    CTPA_EEDIsActvtdMp2Dr6_B1=crrcMvb->getBool(0xB08,25,5);
    CTPA_EEDIsActvtdMp2Dr7_B1=crrcMvb->getBool(0xB08,25,6);
    CTPA_EEDIsActvtdMp2Dr8_B1=crrcMvb->getBool(0xB08,25,7);

    CTPA_EEDIsActvtdTc2Dr1_B1=crrcMvb->getBool(0xB08,26,0);
    CTPA_EEDIsActvtdTc2Dr2_B1=crrcMvb->getBool(0xB08,26,1);
    CTPA_EEDIsActvtdTc2Dr3_B1=crrcMvb->getBool(0xB08,26,2);
    CTPA_EEDIsActvtdTc2Dr4_B1=crrcMvb->getBool(0xB08,26,3);
    CTPA_EEDIsActvtdTc2Dr5_B1=crrcMvb->getBool(0xB08,26,4);
    CTPA_EEDIsActvtdTc2Dr6_B1=crrcMvb->getBool(0xB08,26,5);
    CTPA_EEDIsActvtdTc2Dr7_B1=crrcMvb->getBool(0xB08,26,6);
    CTPA_EEDIsActvtdTc2Dr8_B1=crrcMvb->getBool(0xB08,26,7);

    CTPA_Tc1Fire1_B1=crrcMvb->getBool(0xB08,27,0);
    CTPA_Tc1Fire2_B1=crrcMvb->getBool(0xB08,27,1);
    CTPA_Tc1Fire3_B1=crrcMvb->getBool(0xB08,27,2);
    CTPA_Tc1Fire4_B1=crrcMvb->getBool(0xB08,27,3);
    CTPA_Tc1Fire5_B1=crrcMvb->getBool(0xB08,27,4);
    CTPA_Tc1Fire6_B1=crrcMvb->getBool(0xB08,27,5);
    CTPA_Mp1Fire1_B1=crrcMvb->getBool(0xB08,27,6);
    CTPA_Mp1Fire2_B1=crrcMvb->getBool(0xB08,27,7);

    CTPA_Mp1Fire3_B1=crrcMvb->getBool(0xB08,28,0);
    CTPA_Mp1Fire4_B1=crrcMvb->getBool(0xB08,28,1);
    CTPA_M1Fire1_B1=crrcMvb->getBool(0xB08,28,2);
    CTPA_M1Fire2_B1=crrcMvb->getBool(0xB08,28,3);
    CTPA_M1Fire3_B1=crrcMvb->getBool(0xB08,28,4);
    CTPA_M1Fire4_B1=crrcMvb->getBool(0xB08,28,5);
    CTPA_M2Fire1_B1=crrcMvb->getBool(0xB08,28,6);
    CTPA_M2Fire2_B1=crrcMvb->getBool(0xB08,28,7);

    CTPA_M2Fire3_B1=crrcMvb->getBool(0xB08,29,0);
    CTPA_M2Fire4_B1=crrcMvb->getBool(0xB08,29,1);
    CTPA_Mp2Fire1_B1=crrcMvb->getBool(0xB08,29,2);
    CTPA_Mp2Fire2_B1=crrcMvb->getBool(0xB08,29,3);
    CTPA_Mp2Fire3_B1=crrcMvb->getBool(0xB08,29,4);
    CTPA_Mp2Fire4_B1=crrcMvb->getBool(0xB08,29,5);
    CTPA_Tc2Fire1_B1=crrcMvb->getBool(0xB08,29,6);
    CTPA_Tc2Fire2_B1=crrcMvb->getBool(0xB08,29,7);

    CTPA_Tc2Fire3_B1=crrcMvb->getBool(0xB08,30,6);
    CTPA_Tc2Fire4_B1=crrcMvb->getBool(0xB08,30,7);

    CTPA_Tc2Fire5_B1=crrcMvb->getBool(0xB08,30,0);
    CTPA_Tc2Fire6_B1=crrcMvb->getBool(0xB08,30,1);

    CTPA_QuitOperMode_U8=crrcMvb->getUnsignedChar(0xB08,31);


    /****************************************************TDS1→CCU*******************************************************/
    TD1CT_TDSlife_U16=crrcMvb->getUnsignedInt(0xC10,0);
    TD1CT_SoftwareVersion_U16=crrcMvb->getUnsignedInt(0xC10,2);

    TD1CT_TDSSlightFault_B1=crrcMvb->getBool(0xC10,5,7);
    TD1CT_TDSMediumFault_B1=crrcMvb->getBool(0xC10,5,6);
    TD1CT_TDSSeriousFault_B1=crrcMvb->getBool(0xC10,5,5);
    TD1CT_TDSMaster_B1=crrcMvb->getBool(0xC10,5,4);
    TD1CT_InternalBusFault_B1=crrcMvb->getBool(0xC10,5,3);
    TD1CT_MVBLAT_B1=crrcMvb->getBool(0xC10,5,2);
    TD1CT_MVBRLD_B1=crrcMvb->getBool(0xC10,5,1);

    TD1CT_Car1No1Temp_I8=crrcMvb->getsignedChar(0xC12,1);
    TD1CT_Car1No2Temp_I8=crrcMvb->getsignedChar(0xC12,0);
    TD1CT_Car1No3Temp_I8=crrcMvb->getsignedChar(0xC12,3);
    TD1CT_Car1No4Temp_I8=crrcMvb->getsignedChar(0xC12,2);
    TD1CT_Car1No5Temp_I8=crrcMvb->getsignedChar(0xC12,5);
    TD1CT_Car1No6Temp_I8=crrcMvb->getsignedChar(0xC12,4);
    TD1CT_Car1No7Temp_I8=crrcMvb->getsignedChar(0xC12,7);
    TD1CT_Car1No8Temp_I8=crrcMvb->getsignedChar(0xC12,6);
    TD1CT_Car2No1Temp_I8=crrcMvb->getsignedChar(0xC12,9);
    TD1CT_Car2No2Temp_I8=crrcMvb->getsignedChar(0xC12,8);
    TD1CT_Car2No3Temp_I8=crrcMvb->getsignedChar(0xC12,11);
    TD1CT_Car2No4Temp_I8=crrcMvb->getsignedChar(0xC12,10);
    TD1CT_Car2No5Temp_I8=crrcMvb->getsignedChar(0xC12,13);
    TD1CT_Car2No6Temp_I8=crrcMvb->getsignedChar(0xC12,12);
    TD1CT_Car2No7Temp_I8=crrcMvb->getsignedChar(0xC12,15);
    TD1CT_Car2No8Temp_I8=crrcMvb->getsignedChar(0xC12,14);
    TD1CT_Car3No1Temp_I8=crrcMvb->getsignedChar(0xC12,17);
    TD1CT_Car3No2Temp_I8=crrcMvb->getsignedChar(0xC12,16);
    TD1CT_Car3No3Temp_I8=crrcMvb->getsignedChar(0xC12,19);
    TD1CT_Car3No4Temp_I8=crrcMvb->getsignedChar(0xC12,18);
    TD1CT_Car3No5Temp_I8=crrcMvb->getsignedChar(0xC12,21);
    TD1CT_Car3No6Temp_I8=crrcMvb->getsignedChar(0xC12,20);
    TD1CT_Car3No7Temp_I8=crrcMvb->getsignedChar(0xC12,23);
    TD1CT_Car3No8Temp_I8=crrcMvb->getsignedChar(0xC12,22);
    TD1CT_Car4No1Temp_I8=crrcMvb->getsignedChar(0xC12,25);
    TD1CT_Car4No2Temp_I8=crrcMvb->getsignedChar(0xC12,24);
    TD1CT_Car4No3Temp_I8=crrcMvb->getsignedChar(0xC12,27);
    TD1CT_Car4No4Temp_I8=crrcMvb->getsignedChar(0xC12,26);
    TD1CT_Car4No5Temp_I8=crrcMvb->getsignedChar(0xC12,29);
    TD1CT_Car4No6Temp_I8=crrcMvb->getsignedChar(0xC12,28);
    TD1CT_Car4No7Temp_I8=crrcMvb->getsignedChar(0xC12,31);
    TD1CT_Car4No8Temp_I8=crrcMvb->getsignedChar(0xC12,30);

    TD1CT_Car5No1Temp_I8=crrcMvb->getsignedChar(0xC13,1);
    TD1CT_Car5No2Temp_I8=crrcMvb->getsignedChar(0xC13,0);
    TD1CT_Car5No3Temp_I8=crrcMvb->getsignedChar(0xC13,3);
    TD1CT_Car5No4Temp_I8=crrcMvb->getsignedChar(0xC13,2);
    TD1CT_Car5No5Temp_I8=crrcMvb->getsignedChar(0xC13,5);
    TD1CT_Car5No6Temp_I8=crrcMvb->getsignedChar(0xC13,4);
    TD1CT_Car5No7Temp_I8=crrcMvb->getsignedChar(0xC13,7);
    TD1CT_Car5No8Temp_I8=crrcMvb->getsignedChar(0xC13,6);
    TD1CT_Car6No1Temp_I8=crrcMvb->getsignedChar(0xC13,9);
    TD1CT_Car6No2Temp_I8=crrcMvb->getsignedChar(0xC13,8);
    TD1CT_Car6No3Temp_I8=crrcMvb->getsignedChar(0xC13,11);
    TD1CT_Car6No4Temp_I8=crrcMvb->getsignedChar(0xC13,10);
    TD1CT_Car6No5Temp_I8=crrcMvb->getsignedChar(0xC13,13);
    TD1CT_Car6No6Temp_I8=crrcMvb->getsignedChar(0xC13,12);
    TD1CT_Car6No7Temp_I8=crrcMvb->getsignedChar(0xC13,15);
    TD1CT_Car6No8Temp_I8=crrcMvb->getsignedChar(0xC13,14);


    /****************************************************TDS2→CCU*******************************************************/
    TD2CT_TDSlife_U16=crrcMvb->getUnsignedInt(0xC20,0);
    TD2CT_SoftwareVersion_U16=crrcMvb->getUnsignedInt(0xC20,2);

    TD2CT_TDSSlightFault_B1=crrcMvb->getBool(0xC20,5,7);
    TD2CT_TDSMediumFault_B1=crrcMvb->getBool(0xC20,5,6);
    TD2CT_TDSSeriousFault_B1=crrcMvb->getBool(0xC20,5,5);
    TD2CT_TDSMaster_B1=crrcMvb->getBool(0xC20,5,4);
    TD2CT_InternalBusFault_B1=crrcMvb->getBool(0xC20,5,3);
    TD2CT_MVBLAT_B1=crrcMvb->getBool(0xC20,5,2);
    TD2CT_MVBRLD_B1=crrcMvb->getBool(0xC20,5,1);

    TD2CT_Car1No1Temp_I8=crrcMvb->getsignedChar(0xC22,1);
    TD2CT_Car1No2Temp_I8=crrcMvb->getsignedChar(0xC22,0);
    TD2CT_Car1No3Temp_I8=crrcMvb->getsignedChar(0xC22,3);
    TD2CT_Car1No4Temp_I8=crrcMvb->getsignedChar(0xC22,2);
    TD2CT_Car1No5Temp_I8=crrcMvb->getsignedChar(0xC22,5);
    TD2CT_Car1No6Temp_I8=crrcMvb->getsignedChar(0xC22,4);
    TD2CT_Car1No7Temp_I8=crrcMvb->getsignedChar(0xC22,7);
    TD2CT_Car1No8Temp_I8=crrcMvb->getsignedChar(0xC22,6);
    TD2CT_Car2No1Temp_I8=crrcMvb->getsignedChar(0xC22,9);
    TD2CT_Car2No2Temp_I8=crrcMvb->getsignedChar(0xC22,8);
    TD2CT_Car2No3Temp_I8=crrcMvb->getsignedChar(0xC22,11);
    TD2CT_Car2No4Temp_I8=crrcMvb->getsignedChar(0xC22,10);
    TD2CT_Car2No5Temp_I8=crrcMvb->getsignedChar(0xC22,13);
    TD2CT_Car2No6Temp_I8=crrcMvb->getsignedChar(0xC22,12);
    TD2CT_Car2No7Temp_I8=crrcMvb->getsignedChar(0xC22,15);
    TD2CT_Car2No8Temp_I8=crrcMvb->getsignedChar(0xC22,14);
    TD2CT_Car3No1Temp_I8=crrcMvb->getsignedChar(0xC22,17);
    TD2CT_Car3No2Temp_I8=crrcMvb->getsignedChar(0xC22,16);
    TD2CT_Car3No3Temp_I8=crrcMvb->getsignedChar(0xC22,19);
    TD2CT_Car3No4Temp_I8=crrcMvb->getsignedChar(0xC22,18);
    TD2CT_Car3No5Temp_I8=crrcMvb->getsignedChar(0xC22,21);
    TD2CT_Car3No6Temp_I8=crrcMvb->getsignedChar(0xC22,20);
    TD2CT_Car3No7Temp_I8=crrcMvb->getsignedChar(0xC22,23);
    TD2CT_Car3No8Temp_I8=crrcMvb->getsignedChar(0xC22,22);
    TD2CT_Car4No1Temp_I8=crrcMvb->getsignedChar(0xC22,25);
    TD2CT_Car4No2Temp_I8=crrcMvb->getsignedChar(0xC22,24);
    TD2CT_Car4No3Temp_I8=crrcMvb->getsignedChar(0xC22,27);
    TD2CT_Car4No4Temp_I8=crrcMvb->getsignedChar(0xC22,26);
    TD2CT_Car4No5Temp_I8=crrcMvb->getsignedChar(0xC22,29);
    TD2CT_Car4No6Temp_I8=crrcMvb->getsignedChar(0xC22,28);
    TD2CT_Car4No7Temp_I8=crrcMvb->getsignedChar(0xC22,31);
    TD2CT_Car4No8Temp_I8=crrcMvb->getsignedChar(0xC22,30);

    TD2CT_Car5No1Temp_I8=crrcMvb->getsignedChar(0xC23,1);
    TD2CT_Car5No2Temp_I8=crrcMvb->getsignedChar(0xC23,0);
    TD2CT_Car5No3Temp_I8=crrcMvb->getsignedChar(0xC23,3);
    TD2CT_Car5No4Temp_I8=crrcMvb->getsignedChar(0xC23,2);
    TD2CT_Car5No5Temp_I8=crrcMvb->getsignedChar(0xC23,5);
    TD2CT_Car5No6Temp_I8=crrcMvb->getsignedChar(0xC23,4);
    TD2CT_Car5No7Temp_I8=crrcMvb->getsignedChar(0xC23,7);
    TD2CT_Car5No8Temp_I8=crrcMvb->getsignedChar(0xC23,6);
    TD2CT_Car6No1Temp_I8=crrcMvb->getsignedChar(0xC23,9);
    TD2CT_Car6No2Temp_I8=crrcMvb->getsignedChar(0xC23,8);
    TD2CT_Car6No3Temp_I8=crrcMvb->getsignedChar(0xC23,11);
    TD2CT_Car6No4Temp_I8=crrcMvb->getsignedChar(0xC23,10);
    TD2CT_Car6No5Temp_I8=crrcMvb->getsignedChar(0xC23,13);
    TD2CT_Car6No6Temp_I8=crrcMvb->getsignedChar(0xC23,12);
    TD2CT_Car6No7Temp_I8=crrcMvb->getsignedChar(0xC23,15);
    TD2CT_Car6No8Temp_I8=crrcMvb->getsignedChar(0xC23,14);

    /***************************************************CCU→TDS******************************************************/
    CTTD_CCULifeSignal_U16=crrcMvb->getUnsignedInt(0xC08,0);
    CTTD_TotalMile_U32=crrcMvb->getUnsignedInt32(0xC08,2);

    CTTD_Tc1MassValid_U16=crrcMvb->getUnsignedInt(0xC08,6);
    CTTD_Mp1MassValid_U16=crrcMvb->getUnsignedInt(0xC08,8);
    CTTD_M1MassValid_U16=crrcMvb->getUnsignedInt(0xC08,10);
    CTTD_M2MassValid_U16=crrcMvb->getUnsignedInt(0xC08,12);
    CTTD_Mp2MassValid_U16=crrcMvb->getUnsignedInt(0xC08,14);
    CTTD_Tc2MassValid_U16=crrcMvb->getUnsignedInt(0xC08,16);
    CTTD_NextStation_U16=crrcMvb->getUnsignedInt(0xC08,22);
    CTTD_CurrentStation_U16=crrcMvb->getUnsignedInt(0xC08,24);
    CTTD_NextStationDistance_U16=crrcMvb->getUnsignedInt(0xC08,26);
    CTTD_LastStationDistance_U16=crrcMvb->getUnsignedInt(0xC08,28);

    CTTD_QuitOperMode_B1=crrcMvb->getBool(0xC08,31,7);

    CTTD_Tc1WheelDia_U16=crrcMvb->getUnsignedInt(0xC09,0);
    CTTD_Mp1WheelDia_U16=crrcMvb->getUnsignedInt(0xC09,2);
    CTTD_M1WheelDia_U16=crrcMvb->getUnsignedInt(0xC09,4);
    CTTD_M2WheelDia_U16=crrcMvb->getUnsignedInt(0xC09,6);
    CTTD_Mp2WheelDia_U16=crrcMvb->getUnsignedInt(0xC09,8);
    CTTD_Tc2WheelDia_U16=crrcMvb->getUnsignedInt(0xC09,10);
    CTTD_TrainSpeed_U16=crrcMvb->getUnsignedInt(0xC09,16);

    CTTD_Tc2CabActive_B1=crrcMvb->getBool(0xC09,30,0);
    CTTD_Tc1CabActive_B2=crrcMvb->getBool(0xC09,30,1);

    CTTD_Tc2WheelSetValid_B1=crrcMvb->getBool(0xC09,31,2);
    CTTD_Mp2WheelSetValid_B1=crrcMvb->getBool(0xC09,31,3);
    CTTD_M2WheelSetValid_B1=crrcMvb->getBool(0xC09,31,4);
    CTTD_M1WheelSetValid_B1=crrcMvb->getBool(0xC09,31,5);
    CTTD_Mp1WheelSetValid_B1=crrcMvb->getBool(0xC09,31,6);
    CTTD_Tc1WheelSetValid_B1=crrcMvb->getBool(0xC09,31,7);

    /******************************************************FAS1→CCU*****************************************************/
    FS1CT_OverVolBattNum_U8=crrcMvb->getUnsignedChar(0xE50,0);

    /******************************************************FAS2→CCU*****************************************************/
    FS2CT_OverVolBattNum_U8=crrcMvb->getUnsignedChar(0xE60,0);

    /*******************************************************CCU-FAS1****************************************************/
    CTFS1_NetVoltage_U16=crrcMvb->getUnsignedInt(0xE58,0);

    /*******************************************************CCU-FAS1****************************************************/
    CTFS2_NetVoltage_U16=crrcMvb->getUnsignedInt(0xE68,0);

    /*******************************************************BMS1→CCU****************************************************/
    BM1CT_OverVolBattNum_U8=crrcMvb->getUnsignedChar(0xE10,0);
    BM1CT_LowVolBattNum_U8=crrcMvb->getUnsignedChar(0xE10,1);
    BM1CT_OverTempBattNum_U8=crrcMvb->getUnsignedChar(0xE10,2);
    BM1CT_OverVolAlarmBatt_U8=crrcMvb->getUnsignedChar(0xE10,3);

    BM1CT_OverVolAlarmBattVal_U16=crrcMvb->getUnsignedInt(0xE10,4);

    BM1CT_LowVolAlarmBatt_U8=crrcMvb->getUnsignedChar(0xE10,6);

    BM1CT_LowVolAlarmBattVal_U16=crrcMvb->getUnsignedInt(0xE10,7);

    BM1CT_OverTempAlarmBatt_U8=crrcMvb->getUnsignedChar(0xE10,9);

    BM1CT_OverTempAlarmBattVal_U16=crrcMvb->getUnsignedInt(0xE10,10);

    BM1CT_OnlyOverVolAlarm_B1=crrcMvb->getBool(0xE10,12,7);
    BM1CT_OnlyLowVolAlarm_B1=crrcMvb->getBool(0xE10,12,6);
    BM1CT_OnlyOverTempAlarm_B1=crrcMvb->getBool(0xE10,12,5);
    BM1CT_WholeLowVolAlarm_B1=crrcMvb->getBool(0xE10,12,4);
    BM1CT_InsetOverTempAlarm_B1=crrcMvb->getBool(0xE10,12,3);
    BM1CT_OverChargeCurAlarm_B1=crrcMvb->getBool(0xE10,12,2);
    BM1CT_OverDischargeCurAlarm_B1=crrcMvb->getBool(0xE10,12,1);
    BM1CT_CapacityLeftLowAlarm_B1=crrcMvb->getBool(0xE10,12,0);

    BM1CT_MonitorInitFaultAlarm_B1=crrcMvb->getBool(0xE10,13,7);
    BM1CT_MVBLAT_B1=crrcMvb->getBool(0xE10,13,6);
    BM1CT_MVBRLD_B1=crrcMvb->getBool(0xE10,13,5);

    BM1CT_SoftVersion_U16=crrcMvb->getUnsignedInt(0xE10,14);

    BM1CT_LifeSignal_U8=crrcMvb->getUnsignedChar(0xE10,16);
    BM1CT_AlarmLampSta_U8=crrcMvb->getUnsignedChar(0xE10,17);

    BM1CT_ChargeVolVal_U16=crrcMvb->getUnsignedInt(0xE10,19);
    BM1CT_DischargeVolVal_U16=crrcMvb->getUnsignedInt(0xE10,21);
    BM1CT_InsetTempVal_U16=crrcMvb->getUnsignedInt(0xE10,23);
    BM1CT_ChargeCurVal_U16=crrcMvb->getUnsignedInt(0xE10,25);
    BM1CT_DischargeCurVal_U16=crrcMvb->getUnsignedInt(0xE10,27);
    BM1CT_CapacityLeft_U16=crrcMvb->getUnsignedInt(0xE10,29);


    /*******************************************************BMS2→CCU****************************************************/
    BM2CT_OverVolBattNum_U8=crrcMvb->getUnsignedChar(0xE20,0);
    BM2CT_LowVolBattNum_U8=crrcMvb->getUnsignedChar(0xE20,1);
    BM2CT_OverTempBattNum_U8=crrcMvb->getUnsignedChar(0xE20,2);
    BM2CT_OverVolAlarmBatt_U8=crrcMvb->getUnsignedChar(0xE20,3);

    BM2CT_OverVolAlarmBattVal_U16=crrcMvb->getUnsignedInt(0xE20,4);

    BM2CT_LowVolAlarmBatt_U8=crrcMvb->getUnsignedChar(0xE20,6);

    BM2CT_LowVolAlarmBattVal_U16=crrcMvb->getUnsignedInt(0xE20,7);

    BM2CT_OverTempAlarmBatt_U8=crrcMvb->getUnsignedChar(0xE20,9);

    BM2CT_OverTempAlarmBattVal_U16=crrcMvb->getUnsignedInt(0xE20,10);

    BM2CT_OnlyOverVolAlarm_B1=crrcMvb->getBool(0xE20,12,7);
    BM2CT_OnlyLowVolAlarm_B1=crrcMvb->getBool(0xE20,12,6);
    BM2CT_OnlyOverTempAlarm_B1=crrcMvb->getBool(0xE20,12,5);
    BM2CT_WholeLowVolAlarm_B1=crrcMvb->getBool(0xE20,12,4);
    BM2CT_InsetOverTempAlarm_B1=crrcMvb->getBool(0xE20,12,3);
    BM2CT_OverChargeCurAlarm_B1=crrcMvb->getBool(0xE20,12,2);
    BM2CT_OverDischargeCurAlarm_B1=crrcMvb->getBool(0xE20,12,1);
    BM2CT_CapacityLeftLowAlarm_B1=crrcMvb->getBool(0xE20,12,0);

    BM2CT_MonitorInitFaultAlarm_B1=crrcMvb->getBool(0xE20,13,7);
    BM2CT_MVBLAT_B1=crrcMvb->getBool(0xE20,13,6);
    BM2CT_MVBRLD_B1=crrcMvb->getBool(0xE20,13,5);

    BM2CT_SoftVersion_U16=crrcMvb->getUnsignedInt(0xE20,14);

    BM2CT_LifeSignal_U8=crrcMvb->getUnsignedChar(0xE20,16);
    BM2CT_AlarmLampSta_U8=crrcMvb->getUnsignedChar(0xE20,17);

    BM2CT_ChargeVolVal_U16=crrcMvb->getUnsignedInt(0xE20,19);
    BM2CT_DischargeVolVal_U16=crrcMvb->getUnsignedInt(0xE20,21);
    BM2CT_InsetTempVal_U16=crrcMvb->getUnsignedInt(0xE20,23);
    BM2CT_ChargeCurVal_U16=crrcMvb->getUnsignedInt(0xE20,25);
    BM2CT_DischargeCurVal_U16=crrcMvb->getUnsignedInt(0xE20,27);
    BM2CT_CapacityLeft_U16=crrcMvb->getUnsignedInt(0xE20,29);

  /**********************************************************PCU1→CCU*******************************************************/
    PN1CT_LfSgn_U16=crrcMvb->getUnsignedInt(0xF10,0);
    PN1CT_ControllerStatus_B1=crrcMvb->getBool(0xF10,2,0);
    PN1CT_MVBLAT_B1=crrcMvb->getBool(0xF10,3,0);
    PN1CT_MVBRLD_B1=crrcMvb->getBool(0xF10,3,1);

    PN1CT_VersionX_U8=crrcMvb->getUnsignedChar(0xF10,4);
    PN1CT_VersionY_U8=crrcMvb->getUnsignedChar(0xF10,5);


    /**********************************************************PCU2→CCU*******************************************************/
      PN2CT_LfSgn_U16=crrcMvb->getUnsignedInt(0xF20,0);
      PN2CT_ControllerStatus_B1=crrcMvb->getBool(0xF20,2,0);
      PN2CT_MVBLAT_B1=crrcMvb->getBool(0xF20,3,0);
      PN2CT_MVBRLD_B1=crrcMvb->getBool(0xF20,3,1);

      PN2CT_VersionX_U8=crrcMvb->getUnsignedChar(0xF20,4);
      PN2CT_VersionY_U8=crrcMvb->getUnsignedChar(0xF20,5);

    /**********************************************************CCU→PCU*******************************************************/
      CTPN_NetVoltage_U16=crrcMvb->getUnsignedInt(0xF08,0);

      CTPN_CrrntPNO_U32=crrcMvb->getUnsignedInt32(0xF08,2);
      CTPN_NextPNO_U32=crrcMvb->getUnsignedInt32(0xF08,6);
      CTPN_DstntnPNO_U32=crrcMvb->getUnsignedInt32(0xF08,10);

      CTPN_TARGETDIS_U16=crrcMvb->getUnsignedInt(0xF08,14);
      CTPN_STARTINGDIS_U16=crrcMvb->getUnsignedInt(0xF08,16);

      CTPN_CTRLSTATE_U8=crrcMvb->getUnsignedChar(0xF08,18);
      CTPN_STATE_U8=crrcMvb->getUnsignedChar(0xF08,19);
      CTPN_ATCOnline_U8=crrcMvb->getUnsignedChar(0xF08,20);

      CTPN_AllDrClsd_B1=crrcMvb->getBool(0xF08,21,0);
      CTPN_DrOpnd_B1=crrcMvb->getBool(0xF08,21,1);
      CTPN_QuitOperMode_B1=crrcMvb->getBool(0xF08,21,2);



}
