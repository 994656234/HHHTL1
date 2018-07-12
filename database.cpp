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






}
