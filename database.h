#ifndef DATABASE_H
#define DATABASE_H
#include "MainGetDefaultPara.h"
#include "global.h"
#include "PixyTypes.h"
#include "PixyMvbLib.h"
#include <QList>
#include <QMap>
#include "crrcmvb.h"
class Database
{
public:
    Database();
    int HMIPosition;
    void updateDatabse(CrrcMvb* crrcMvb);

    //CCU-ALL 0xF
    unsigned short PUBPORT_CCULfSign_U16;//生命信号
    unsigned char PUBPORT_CCUTimeYear_U8,PUBPORT_CCUTimeMonth_U8,PUBPORT_CCUTimeDay_U8,PUBPORT_CCUTimeHour_U8,PUBPORT_CCUTimeMinute_U8,PUBPORT_CCUTimeSecond_U8;//年，月，日，时，分，秒
    bool PUBPORT_SettingTimeEnable_B1,PUBPORT_TimeValid_B1,PUBPORT_TraRfrSpdValid_B1,PUBPORT_TrainNumberValid_B1,PUBPORT_LineNumberValid_B1;//时间校准,日期时间有效,列车速度有效,车辆号有效,线路号有效
    unsigned short PUBPORT_TraRfrSpd_U16;// 列车参考速度
    unsigned char PUBPORT_TrainNmbr_U8,PUBPORT_LineNmbr_U8;//车辆号 线路号

    //RIOM-CCU
    //0x110
    unsigned char RM1CT_GWLifeSign1_U8,RM1CT_GWVersion_U8,RM1CT_DIVersion_U8,RM1CT_DOVersion_U8,RM1CT_AXVersion_U8,//网关生命信号,网关版本号,DIM模块版本号,DOM模块版本号,AIOM模块版本号
            RM1CT_DI1LifeSign_U8,RM1CT_DI2LifeSign_U8,RM1CT_DI3LifeSign_U8,RM1CT_DO1LifeSign_U8,RM1CT_AX1LifeSign_U8;//DIM1生命信号,DIM2生命信号,DIM3生命信号,DOM1生命信号,AIOM1生命信号

    bool RM1CT_DI1Online_B1, RM1CT_DI2Online_B1,RM1CT_DI3Online_B1,RM1CT_DO1Online_B1,RM1CT_AX1Online_B1,RM1CT_LAT_B1,RM1CT_RLD_B1;//DIM1在线信息,DIM2在线信息,DIM3在线信息,DOM1在线信息,AIOM1在线信息, LAT, RLD

    //0x160
    unsigned char RM6CT_GWLifeSign1_U8,RM6CT_GWVersion_U8,RM6CT_DIVersion_U8,RM6CT_DOVersion_U8,RM6CT_AXVersion_U8,//网关生命信号,网关版本号,DIM模块版本号,DOM模块版本号,AIOM模块版本号
            RM6CT_DI1LifeSign_U8,RM6CT_DI2LifeSign_U8,RM6CT_DI3LifeSign_U8,RM6CT_DO1LifeSign_U8,RM6CT_AX1LifeSign_U8;//DIM1生命信号,DIM2生命信号,DIM3生命信号,DOM1生命信号,AIOM1生命信号

    bool RM6CT_DI1Online_B1, RM6CT_DI2Online_B1,RM6CT_DI3Online_B1,RM6CT_DO1Online_B1,RM6CT_AX1Online_B1,RM6CT_LAT_B1,RM6CT_RLD_B1;//DIM1在线信息,DIM2在线信息,DIM3在线信息,DOM1在线信息,AIOM1在线信息, LAT, RLD

    //0x111
    unsigned short RM1CT_AIM1Ch1_U16,RM1CT_AIM1Ch7_U16;//司控器级位电流采集（信号）,司控器级位电压采集

    bool RM1CT_DI1Ch6FastBrake_B1,RM1CT_DI1Ch5Brake_B1,RM1CT_DI1Ch4Traction_B1,RM1CT_DI1Ch3CabPossession_B1,//快速制动,制动,牵引,司机室占有
    RM1CT_DI1Ch2Backward_B1,RM1CT_DI1Ch1Forward_B1;//向后,向前

    //0x161
    unsigned short RM6CT_AIM1Ch1_U16,RM6CT_AIM1Ch7_U16;//司控器级位电流采集（信号）,司控器级位电压采集

    bool RM6CT_DI1Ch6FastBrake_B1,RM6CT_DI1Ch5Brake_B1,RM6CT_DI1Ch4Traction_B1,RM6CT_DI1Ch3CabPossession_B1,//快速制动,制动,牵引,司机室占有
    RM6CT_DI1Ch2Backward_B1,RM6CT_DI1Ch1Forward_B1;//向后,向前

    //0x120
    unsigned char RM2CT_GWLfSign1_U8,RM2CT_GWVer_U8,RM2CT_DIVer_U8,RM2CT_DOVer_U8,//网关生命信号,网关版本号,DIM模块版本号,DOM模块版本号
            RM2CT_DI1LfSign_U8,RM2CT_DO1LfSign_U8;//DIM1生命信号,DOM1生命信号,
    bool RM2CT_DI1Online_B1,RM2CT_DO1Online_B1,//DIM1在线信息,DOM1在线信息
            RM2CT_LAT_B1,RM2CT_RLD_B1;// LAT, RLD

    //0x150
    unsigned char RM5CT_GWLfSign1_U8,RM5CT_GWVer_U8,RM5CT_DIVer_U8,RM5CT_DOVer_U8,//网关生命信号,网关版本号,DIM模块版本号,DOM模块版本号
            RM5CT_DI1LfSign_U8,RM5CT_DO1LfSign_U8;//DIM1生命信号,DOM1生命信号,
    bool RM5CT_DI1Online_B1,RM5CT_DO1Online_B1,//DIM1在线信息,DOM1在线信息
            RM5CT_LAT_B1,RM5CT_RLD_B1;// LAT, RLD

    //0x130
    unsigned char RM3CT_GWLfSign1_U8,RM3CT_GWVer_U8,RM3CT_DIVer_U8,RM3CT_DOVer_U8,//网关生命信号,网关版本号,DIM模块版本号,DOM模块版本号
            RM3CT_DI1LfSign_U8,RM3CT_DO1LfSign_U8;//DIM1生命信号,DOM1生命信号
    bool RM3CT_DI1Online_B1,RM3CT_DO1Online_B1,RM3CT_LAT_B1,RM3CT_RLD_B1;//DIM1在线信息,DOM1在线信息,LAT,RLD

    //0x140
    unsigned char RM4CT_GWLfSign1_U8,RM4CT_GWVer_U8,RM4CT_DIVer_U8,RM4CT_DOVer_U8,//网关生命信号,网关版本号,DIM模块版本号,DOM模块版本号
            RM4CT_DI1LfSign_U8,RM4CT_DO1LfSign_U8;//DIM1生命信号,DOM1生命信号
    bool RM4CT_DI1Online_B1,RM4CT_DO1Online_B1,RM4CT_LAT_B1,RM4CT_RLD_B1;//DIM1在线信息,DOM1在线信息,LAT,RLD

    //0x170
    unsigned char RM7CT_GWLifeSign1_U8,RM7CT_GWVersion_U8,RM7CT_DIVersion_U8,RM7CT_DOVersion_U8,//网关生命信号,网关版本号,DIM模块版本号,DOM模块版本号
            RM7CT_AXVersion_U8,RM7CT_DI1LifeSign_U8,RM7CT_DI2LifeSign_U8,RM7CT_DI3LifeSign_U8,//AIOM模块版本号,DIM1生命信号,DIM2生命信号,DIM3生命信号
            RM7CT_DO1LifeSign_U8,RM7CT_AX1LifeSign_U8;//DOM1生命信号,AIOM1生命信号
    bool RM7CT_DI1Online_B1,RM7CT_DO1Online_B1,RM7CT_AX1Online_B1,RM7CT_LAT_B1,//DIM1在线信息,DOM1在线信息,AIOM1在线信息,LAT
            RM7CT_RLD_B1;//RLD

    //0x180
    unsigned char RM8CT_GWLifeSign1_U8,RM8CT_GWVersion_U8,RM8CT_DIVersion_U8,RM8CT_DOVersion_U8,//网关生命信号,网关版本号,DIM模块版本号,DOM模块版本号
            RM8CT_AXVersion_U8,RM8CT_DI1LifeSign_U8,RM8CT_DI2LifeSign_U8,RM8CT_DI3LifeSign_U8,//AIOM模块版本号,DIM1生命信号,DIM2生命信号,DIM3生命信号
            RM8CT_DO1LifeSign_U8,RM8CT_AX1LifeSign_U8;//DOM1生命信号,AIOM1生命信号
    bool RM8CT_DI1Online_B1,RM8CT_DO1Online_B1,RM8CT_AX1Online_B1,RM8CT_LAT_B1,//DIM1在线信息,DOM1在线信息,AIOM1在线信息,LAT
            RM8CT_RLD_B1;//RLD

    //0x171
    unsigned RM7CT_AIM1Ch1_U16,RM7CT_AIM1Ch7_U16;//司控器级位电流采集（信号）,司控器级位电压采集
    bool RM7CT_DI1Ch6FastBrake_B1,RM7CT_DI1Ch5Brake_B1,RM7CT_DI1Ch4Traction_B1,RM7CT_DI1Ch3CabPossession_B1,//快速制动,制动,牵引,司机室占有
            RM7CT_DI1Ch2Backward_B1,RM7CT_DI1Ch1Forward_B1;//向后,向前

    //0x181
    unsigned RM8CT_AIM1Ch1_U16,RM8CT_AIM1Ch7_U16;//司控器级位电流采集（信号）,司控器级位电压采集
    bool RM8CT_DI1Ch6FastBrake_B1,RM8CT_DI1Ch5Brake_B1,RM8CT_DI1Ch4Traction_B1,RM8CT_DI1Ch3CabPossession_B1,//快速制动,制动,牵引,司机室占有
            RM8CT_DI1Ch2Backward_B1,RM8CT_DI1Ch1Forward_B1;//向后,向前

    //CCU-RIOM
    //0x118
    unsigned short CTRM1_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM1_Check0_B1,CTRM1_Check1_B1;//校验位
    //0x168
    unsigned short CTRM6_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM6_Check0_B1,CTRM6_Check1_B1;//校验位

    //0x128
    unsigned short CTRM2_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM2_Check0_B1,CTRM2_Check1_B1;//校验位
    //0x158
    unsigned short CTRM5_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM5_Check0_B1,CTRM5_Check1_B1;//校验位

    //0x138
    unsigned short CTRM3_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM3_Check0_B1,CTRM3_Check1_B1;//校验位
    //0x148
    unsigned short CTRM4_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM4_Check0_B1,CTRM4_Check1_B1;//校验位

    //CCU-RIOM1R 0x178
    unsigned short CTRM7_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM7_Check0_B1,CTRM7_Check1_B1;//校验位,校验位

    //CCU-RIOM1R 0x188
    unsigned short CTRM8_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM8_Check0_B1,CTRM8_Check1_B1;//校验位,校验位

    //HMI1-CCU
    //0x210
    unsigned short HM1CT_LifeSignal_U16;//显示屏生命信号

    unsigned char HM1CT_HMISWVerH_U8,HM1CT_HMISWVerL_U8,HM1CT_Year_U8,HM1CT_Month_U8,//软件版本-H, 软件版本-L,时间设定值-年,时间设定值-月
            HM1CT_Day_U8,HM1CT_Hour_U8,HM1CT_Minute_U8,HM1CT_Second_U8,//时间设定值-日,时间设定值-时,时间设定值-分,时间设定值-秒
            HM1CT_TrainNum_U8,HM1CT_LineNum_U8,HM1CT_WheelDia1_U8,HM1CT_WheelDia2_U8,//列车号,线路号,TC1车轮径设定值,MP1车轮径设定值
            HM1CT_WheelDia3_U8,HM1CT_WheelDia4_U8,HM1CT_WheelDia5_U8,HM1CT_WheelDia6_U8;//M1车轮径设定值,M2车轮径设定值,MP2车轮径设定值,TC2车轮径设定值

    bool HM1CT_SAVETime_B1,HM1CT_SAVETrainNum_B1,HM1CT_SAVELineNum_B1,HM1CT_SAVEWheelDig1_B1,//时间设定保存标志,列车号保存标志,线路号保存标志,车轴轮径保存标志1
            HM1CT_SAVEWheelDig2_B1,HM1CT_SAVEWheelDig3_B1,HM1CT_SAVEWheelDig4_B1,HM1CT_SAVEWheelDig5_B1,//车轴轮径保存标志2,车轴轮径保存标志3,车轴轮径保存标志4,车轴轮径保存标志5
            HM1CT_SAVEWheelDig6_B1;//车轴轮径保存标志6

    unsigned char HM1CT_SetFlagChecker_U8;//设定标志校验位

    //0x211
    bool HM1CT_HVACEmgcyVenti_B1,HM1CT_HVACVenti_B1,HM1CT_HVACAutoCoolMode_B1, HM1CT_HVACAutoWarmMode_B1,//空调紧急通风模式设定,空调通风模式设定,空调自动冷模式设定,空调自动暖模式设定
            HM1CT_HVACStop_B1;//空调停机设定
    bool HM1CT_Reduce0point5_B1,HM1CT_Reduce1_B1,HM1CT_Reduce1point5_B1,HM1CT_Reduce2_B1,//目标温度调节-0.5℃,目标温度调节-1℃,目标温度调节-1.5℃,目标温度调节-2℃
            HM1CT_Reduce2point5_B1,HM1CT_Add0point5_B1,HM1CT_Add1_B1,HM1CT_Add1point5_B1,//目标温度调节-2.5℃,目标温度调节+0.5℃,目标温度调节+1℃,目标温度调节+1.5℃
            HM1CT_Add2_B1,HM1CT_Add2point5_B1;//目标温度调节+2℃,目标温度调节+2.5℃

    unsigned char HM1CT_SAVEHVACPosition_U8;//控制车节
    bool HM1CT_Mp1DCUFaultReset_B1,HM1CT_M1DCUFaultReset_B1,HM1CT_M2DCUFaultReset_B1,HM1CT_Mp2DCUFaultReset_B1,//DCU1故障复位,DCU2故障复位,DCU3故障复位,DCU4故障复位
            HM1CT_Mp1DynamicBrkCut_B1,HM1CT_M1DynamicBrkCut_B1,HM1CT_M2DynamicBrkCut_B1,HM1CT_Mp2DynamicBrkCut_B1;//Mp1车电制动切除\恢复,M1车电制动切除\恢复,M2车电制动切除\恢复,Mp2车电制动切除\恢复

    bool HM1CT_ACU1Reset_B1,HM1CT_ACU2Reset_B1,HM1CT_ACU3Reset_B1,HM1CT_ACU4Reset_B1,//ACU1复位（辅助逆变器）,ACU2复位（辅助逆变器）,ACU3复位（辅助逆变器）,ACU4复位（辅助逆变器）
            HM1CT_ACU1Cutoff_B1,HM1CT_ACU2Cutoff_B1,HM1CT_ACU3Cutoff_B1,HM1CT_ACU4Cutoff_B1;//ACU1切除（辅助逆变器）,ACU2切除（辅助逆变器）,ACU3切除（辅助逆变器）,ACU4切除（辅助逆变器）

    bool HM1CT_DCURunStatClear_B1,HM1CT_ACMRunStatClear_B1;//牵引能耗清零,辅助能耗清零

    bool HM1CT_TC1APClear_B1,HM1CT_TC2APClear_B1;//空压机1运行时间清零,空压机2运行时间清零

    bool HM1CT_ACDETestStopFlag_B1,HM1CT_ACDETestStartFlag_B1;//加速度测试结束信号 ,加速度测试开始信号

    bool HM1CT_BCUSelfTestReq_B1;//制动自检请求

    bool HM1CT_OpenLeftDrReq_B1,HM1CT_OpenRightDrReq_B1,HM1CT_CloseLeftDrReq_B1,HM1CT_CloseRightDrReq_B1;//开左门命令,开右门命令,关左门命令,关右门命令

    bool HM1CT_RunStatSetFlag_B1;//累计数据设定标志

    unsigned char HM1CT_RunStatSetType_U8;//累计数据设定内容

    //HMI2-CCU
    //0x220
    unsigned short HM2CT_LifeSignal_U16;//显示屏生命信号

    unsigned char HM2CT_HMISWVerH_U8,HM2CT_HMISWVerL_U8,HM2CT_Year_U8,HM2CT_Month_U8,//软件版本-H, 软件版本-L,时间设定值-年,时间设定值-月
            HM2CT_Day_U8,HM2CT_Hour_U8,HM2CT_Minute_U8,HM2CT_Second_U8,//时间设定值-日,时间设定值-时,时间设定值-分,时间设定值-秒
            HM2CT_TrainNum_U8,HM2CT_LineNum_U8,HM2CT_WheelDia1_U8,HM2CT_WheelDia2_U8,//列车号,线路号,TC1车轮径设定值,MP1车轮径设定值
            HM2CT_WheelDia3_U8,HM2CT_WheelDia4_U8,HM2CT_WheelDia5_U8,HM2CT_WheelDia6_U8;//M1车轮径设定值,M2车轮径设定值,MP2车轮径设定值,TC2车轮径设定值

    bool HM2CT_SAVETime_B1,HM2CT_SAVETrainNum_B1,HM2CT_SAVELineNum_B1,HM2CT_SAVEWheelDig1_B1,//时间设定保存标志,列车号保存标志,线路号保存标志,车轴轮径保存标志1
            HM2CT_SAVEWheelDig2_B1,HM2CT_SAVEWheelDig3_B1,HM2CT_SAVEWheelDig4_B1,HM2CT_SAVEWheelDig5_B1,//车轴轮径保存标志2,车轴轮径保存标志3,车轴轮径保存标志4,车轴轮径保存标志5
            HM2CT_SAVEWheelDig6_B1;//车轴轮径保存标志6

    unsigned char HM2CT_SetFlagChecker_U8;//设定标志校验位

    //0x221
    bool HM2CT_HVACEmgcyVenti_B1,HM2CT_HVACVenti_B1,HM2CT_HVACAutoCoolMode_B1, HM2CT_HVACAutoWarmMode_B1,//空调紧急通风模式设定,空调通风模式设定,空调自动冷模式设定,空调自动暖模式设定
            HM2CT_HVACStop_B1;//空调停机设定
    bool HM2CT_Reduce0point5_B1,HM2CT_Reduce1_B1,HM2CT_Reduce1point5_B1,HM2CT_Reduce2_B1,//目标温度调节-0.5℃,目标温度调节-1℃,目标温度调节-1.5℃,目标温度调节-2℃
            HM2CT_Reduce2point5_B1,HM2CT_Add0point5_B1,HM2CT_Add1_B1,HM2CT_Add1point5_B1,//目标温度调节-2.5℃,目标温度调节+0.5℃,目标温度调节+1℃,目标温度调节+1.5℃
            HM2CT_Add2_B1,HM2CT_Add2point5_B1;//目标温度调节+2℃,目标温度调节+2.5℃

    unsigned char HM2CT_SAVEHVACPosition_U8;//控制车节
    bool HM2CT_Mp1DCUFaultReset_B1,HM2CT_M1DCUFaultReset_B1,HM2CT_M2DCUFaultReset_B1,HM2CT_Mp2DCUFaultReset_B1,//DCU1故障复位,DCU2故障复位,DCU3故障复位,DCU4故障复位
            HM2CT_Mp1DynamicBrkCut_B1,HM2CT_M1DynamicBrkCut_B1,HM2CT_M2DynamicBrkCut_B1,HM2CT_Mp2DynamicBrkCut_B1;//Mp1车电制动切除\恢复,M1车电制动切除\恢复,M2车电制动切除\恢复,Mp2车电制动切除\恢复

    bool HM2CT_ACU1Reset_B1,HM2CT_ACU2Reset_B1,HM2CT_ACU3Reset_B1,HM2CT_ACU4Reset_B1,//ACU1复位（辅助逆变器）,ACU2复位（辅助逆变器）,ACU3复位（辅助逆变器）,ACU4复位（辅助逆变器）
            HM2CT_ACU1Cutoff_B1,HM2CT_ACU2Cutoff_B1,HM2CT_ACU3Cutoff_B1,HM2CT_ACU4Cutoff_B1;//ACU1切除（辅助逆变器）,ACU2切除（辅助逆变器）,ACU3切除（辅助逆变器）,ACU4切除（辅助逆变器）

    bool HM2CT_DCURunStatClear_B1,HM2CT_ACMRunStatClear_B1;//牵引能耗清零,辅助能耗清零

    bool HM2CT_TC1APClear_B1,HM2CT_TC2APClear_B1;//空压机1运行时间清零,空压机2运行时间清零

    bool HM2CT_ACDETestStopFlag_B1,HM2CT_ACDETestStartFlag_B1;//加速度测试结束信号 ,加速度测试开始信号

    bool HM2CT_BCUSelfTestReq_B1;//制动自检请求

    bool HM2CT_OpenLeftDrReq_B1,HM2CT_OpenRightDrReq_B1,HM2CT_CloseLeftDrReq_B1,HM2CT_CloseRightDrReq_B1;//开左门命令,开右门命令,关左门命令,关右门命令

    bool HM2CT_RunStatSetFlag_B1;//累计数据设定标志

    unsigned char HM2CT_RunStatSetType_U8;//累计数据设定内容

    //CCU-HMI
    //0x208
    bool CTHM_CCU1On_B1,CTHM_CCU2On_B1,CTHM_ERM1On_B1,CTHM_ERM2On_B1,//CCU1在线,CCU2在线,ERM1在线,ERM2在线
            CTHM_HMI1On_B1,CTHM_HMI2On_B1;//显示屏1在线,显示屏2在线
    bool CTHM_TC1RIOMGWOn_B1,CTHM_TC1RIOMGWROn_B1,CTHM_Mp1RIOMGWOn_B1,CTHM_M1RIOMGWOn_B1,//TC1车RIOM机箱网关在线,TC1车RIOM机箱冗余网关在线,MP1车RIOM机箱网关在线,M1车RIOM机箱网关在线
            CTHM_M2RIOMGWOn_B1,CTHM_Mp2RIOMGWOn_B1,CTHM_TC2RIOMGWOn_B1,CTHM_TC2RIOMGWROn_B1;//M2车RIOM机箱网关在线,MP2车RIOM机箱网关在线,TC2车RIOM机箱网关在线,TC2车RIOM机箱网关冗余在线

    bool CTHM_TC1DI1On_B1,CTHM_TC1DI2On_B1,CTHM_TC1DI3On_B1,CTHM_TC1DI4On_B1,//TC1车RIOM机箱DI1板在线,TC1车RIOM机箱DI2板在线,TC1车RIOM机箱DI3板在线,TC1车RIOM机箱DI4板在线
            CTHM_TC1DO1On_B1,CTHM_TC1DO2On_B1,CTHM_TC1AX1On_B1,CTHM_TC1AX2On_B1;//TC1车RIOM机箱DO1板在线,TC1车RIOM机箱DO2板在线,TC1车RIOM机箱AX1板在线,TC1车RIOM机箱AX2板在线

    bool CTHM_MP1DI1On_B1,CTHM_MP1DO1On_B1,CTHM_M1DI1On_B1,CTHM_M1DO1On_B1,//MP1车RIOM机箱DI1板在线,MP1车RIOM机箱DO1板在线,M1车RIOM机箱DI1板在线,M1车RIOM机箱DO1板在线
            CTHM_M2DI1On_B1,CTHM_M2DO1On_B1,CTHM_MP2DI1On_B1,CTHM_MP2DO1On_B1;//    M2车RIOM机箱DI1板在线,M2车RIOM机箱DO1板在线,MP2车RIOM机箱DI1板在线,MP2车RIOM机箱DO1板在线

    bool CTHM_TC2DI1On_B1,CTHM_TC2DI2On_B1,CTHM_TC2DI3On_B1,CTHM_TC2DI4On_B1,//TC2车RIOM机箱DI1板在线,TC2车RIOM机箱DI2板在线,TC2车RIOM机箱DI3板在线,TC2车RIOM机箱DI4板在线
            CTHM_TC2DO1On_B1,CTHM_TC2DO2On_B1,CTHM_TC2AX1On_B1,CTHM_TC2AX2On_B1;//TC2车RIOM机箱DO1板在线,TC2车RIOM机箱DO2板在线,TC2车RIOM机箱AX1板在线,TC2车RIOM机箱AX2板在线

    bool CTHM_DCUM1On_B1,CTHM_DCUM2On_B1,CTHM_DCUM3On_B1,CTHM_DCUM4On_B1,//DCUM1在线,DCUM2在线,DCUM3在线,DCUM4在线
            CTHM_ACU1On_B1,CTHM_ACU2On_B1,CTHM_ACU3On_B1,CTHM_ACU4On_B1;//ACU1在线,ACU2在线,ACU3在线,ACU4在线

    bool CTHM_BCU1On_B1,CTHM_BCU2On_B1,CTHM_BCU3On_B1,CTHM_BCU4On_B1,//BCU1在线,BCU2在线,BCU3在线,BCU4在线
            CTHM_EDCU1On_B1,CTHM_EDCU2On_B1,CTHM_EDCU3On_B1,CTHM_EDCU4On_B1;//EDCU1在线,EDCU2在线,EDCU3在线,EDCU4在线

    bool CTHM_EDCU5On_B1,CTHM_EDCU6On_B1,CTHM_EDCU7On_B1,CTHM_EDCU8On_B1,//EDCU5在线,EDCU6在线,EDCU7在线,EDCU8在线
            CTHM_EDCU9On_B1,CTHM_EDCU10On_B1,CTHM_EDCU11On_B1,CTHM_EDCU12On_B1;//EDCU9在线,EDCU10在线,EDCU11在线,EDCU12在线

    bool CTHM_HVAC1On_B1,CTHM_HVAC2On_B1,CTHM_HVAC3On_B1,CTHM_HVAC4On_B1,//HVAC1在线,HVAC2在线,HVAC3在线,HVAC4在线
            CTHM_HVAC5On_B1,CTHM_HVAC6On_B1,CTHM_PIS1On_B1,CTHM_PIS2On_B1;//HVAC5在线,HVAC6在线,PIS1在线,PIS2在线

    bool CTHM_CCUD1On_B1,CTHM_CCUD2On_B1,CTHM_ATC1On_B1,CTHM_ATC2On_B1,//CCUD1在线,CCUD2在线,ATC1在线,ATC2在线
            CTHM_TDS1On_B1,CTHM_TDS2On_B1,CTHM_BMS1On_B1,CTHM_BMS2On_B1;//TDS1在线,TDS2在线,BMS1在线,BMS2在线

    bool CTHM_FAS1On_B1,CTHM_FAS2On_B1,CTHM_LCU1On_B1,CTHM_LCU2On_B1,//FAS1在线,FAS2在线,LCU1在线,LCU2在线
            CTHM_LCU3On_B1,CTHM_LCU4On_B1,CTHM_LCU5On_B1,CTHM_LCU6On_B1;//LCU3在线,LCU4在线,LCU5在线,LCU6在线

    bool CTHM_LCU7On_B1,CTHM_LCU8On_B1,CTHM_PCU1On_B1,CTHM_PCU2On_B1;//LCU7在线,LCU8在线,PCU1在线,PCU2在线

    bool CTHM_PIS1Active_B1,CTHM_PIS2Active_B1,CTHM_ATC1Active_B1,CTHM_ATC2Active_B1,//PIS1为主,PIS2为主,ATC1为主,ATC2为主
            CTHM_CCU1Active_B1,CTHM_CCU2Active_B1,CTHM_TC1Active_B1,CTHM_TC2Active_B1;//CCU1为主,CCU2为主, TC1车司机钥匙激活,TC2车司机钥匙激活

    bool CTHM_Traction_B1,CTHM_Brake_B1,CTHM_FastBrake_B1,CTHM_EmgyBrake_B1,//牵引指令,制动指令,快速制动,紧急制动
            CTHM_Backward_B1,CTHM_Forward_B1,CTHM_DrOpenEnable_B1;//方向向后,方向向前, 门开使能

    unsigned char CTHM_LineNum_U8;//线路号
    unsigned char CTHM_TrainNum_U8;//列车号
    unsigned char CTHM_Grade_U8;//牵引制动级位
    unsigned char CTHM_DriveMode_U8;//驾驶模式

    unsigned short CTHM_TrainLimitSpeed_U16,CTHM_TrainSpeed_U16, CTHM_CatenaryVoltage_U16, CTHM_CatenaryCurrent_U16;//列车限速度,列车速度,网压,网流

    unsigned char CTHM_WheelDig1FedBk_U8,CTHM_WheelDig2FedBk_U8,CTHM_WheelDig3FedBk_U8,CTHM_WheelDig4FedBk_U8,//1车轮径设定值,2车轮径设定值,3车轮径设定值,4车轮径设定值
            CTHM_WheelDig5FedBk_U8,CTHM_WheelDig6FedBk_U8;//5车轮径设定值,6车轮径设定值


    //0x209
    unsigned char CTHM_CCU1SWVer_U8,CTHM_CCU1MVBVer_U8,CTHM_CCU1SDBVer_U8,CTHM_CCU1VxWorksVer_U8,//CCU1软件版本,CCU1的MVB软件版本,CCU1的SDB软件版本,CCU1的VxWorks软件版本
            CTHM_CCU1FPGAVer_U8,CTHM_CCU2SWVer_U8,CTHM_CCU2MVBVer_U8,CTHM_CCU2SDBVer_U8,//CCU1的FPGA软件版本,CCU2软件版本,CCU2的MVB软件版本,CCU2的SDB软件版本
            CTHM_CCU2VxWorksVer_U8,CTHM_CCU2FPGAVer_U8;//CCU2的VxWorks软件版本,CCU1的FPGA软件版本

    unsigned short CTHM_Acceleration_U16,CTHM_Acceleration40_U16,CTHM_Acceleration80_U16,CTHM_Deceleration_U16,//瞬时加速度值,0-40km/h，平均加速度,0-80km/h，平均加速度,减速度测试，平均加速度
            CTHM_AcDeStartVelocity_U16,CTHM_AcDeDistance_U16,CTHM_AcDeTime_U16;//减速度测试初速度,减速测试距离,减速测试时间

    unsigned short CTHM_TC1Load_U16,CTHM_MP1Load_U16,CTHM_M1Load_U16,CTHM_M2Load_U16,//TC1车载荷，含转动惯量  MP1车载荷，含转动惯量 M1车载荷，含转动惯量  M2车载荷，含转动惯量
            CTHM_MP2Load_U16,CTHM_TC2Load_U16;//MP2车载荷，含转动惯量 TC2车载荷，含转动惯量


     unsigned int  CTHM_CurrentStation_U32,CTHM_NextStationID_U32,CTHM_LastStationID_U32;//当前站ID,下一站ID,终点站ID


    //ERM1-CCU
    //0x310
    unsigned char DT1CT_ERMLifeSign_U8,DT1CT_ERMSWVer_U8,DT1CT_ERMVxWorksVer_U8,DT1CT_ERMMVBSWVer_U8,//ERM生命信号,ERM软件版本(x.y.z),ERM的VxWorks版本(x.y),ERM的MVB版本(x.y)
            DT1CT_ERMSDBVer_U8,DT1CT_ERMFPGAVer_U8;//ERM的SDB版本(x.y) ,ERM的FPGA版本(x.y)

    //0x311
     unsigned int  DT1CT_TCMSRunTime_U32,DT1CT_RunKilometers_U32,DT1CT_DCU1ConsEnergy_U32,DT1CT_DCU2ConsEnergy_U32;//数据记录时间；累计行驶距离；DCU1牵引能耗；DCU2牵引能耗；
    //0x312
     unsigned int  DT1CT_DCU3ConsEnergy_U32,DT1CT_DCU4ConsEnergy_U32,DT1CT_ACM1ConsEnergy_U32,DT1CT_ACM2ConsEnergy_U32,//DCU3牵引能耗； DCU4牵引能耗；ACM1能耗；ACM2能耗；
            DT1CT_ACM3ConsEnergy_U32,DT1CT_ACM4ConsEnergy_U32,DT1CT_DCU1RhBrkConsEnergy_U32,DT1CT_DCU2RhBrkConsEnergy_U32;//ACM3能耗；ACM4能耗；DCU1电阻制动能耗；DCU2电阻制动能耗；
     unsigned int  DT1CT_DCU3RhBrkConsEnergy_U32,DT1CT_DCU4RhBrkConsEnergy_U32,DT1CT_DCU1RegBrkEnergy_U32,DT1CT_DCU2RegBrkEnergy_U32,//DCU3电阻制动能耗；DCU4电阻制动能耗； DCU1再生制动能耗； DCU2再生制动能耗；
            DT1CT_DCU3RegBrkEnergy_U32,DT1CT_DCU4RegBrkEnergy_U32,DT1CT_TC1APRunTime_U32,DT1CT_TC2APRunTime_U32;//DCU3再生制动能耗；DCU4再生制动能耗；TC1空压机运行时间；TC2空压机运行时间；

    //ERM2-CCU
    //0x320
    unsigned char DT2CT_ERMLifeSign_U8,DT2CT_ERMSWVer_U8,DT2CT_ERMVxWorksVer_U8,DT2CT_ERMMVBSWVer_U8,//ERM生命信号,ERM软件版本(x.y.z),ERM的VxWorks版本(x.y),ERM的MVB版本(x.y)
            DT2CT_ERMSDBVer_U8,DT2CT_ERMFPGAVer_U8;//ERM的SDB版本(x.y) ,ERM的FPGA版本(x.y)

    //0x321
     unsigned int  DT2CT_TCMSRunTime_U32,DT2CT_RunKilometers_U32,DT2CT_DCU1ConsEnergy_U32,DT2CT_DCU2ConsEnergy_U32;//数据记录时间；累计行驶距离；DCU1牵引能耗；DCU2牵引能耗；
    //0x322
     unsigned int  DT2CT_DCU3ConsEnergy_U32,DT2CT_DCU4ConsEnergy_U32,DT2CT_ACM1ConsEnergy_U32,DT2CT_ACM2ConsEnergy_U32,//DCU3牵引能耗； DCU4牵引能耗；ACM1能耗；ACM2能耗；
            DT2CT_ACM3ConsEnergy_U32,DT2CT_ACM4ConsEnergy_U32,DT2CT_DCU1RhBrkConsEnergy_U32,DT2CT_DCU2RhBrkConsEnergy_U32;//ACM3能耗；ACM4能耗；DCU1电阻制动能耗；DCU2电阻制动能耗；
     unsigned int  DT2CT_DCU3RhBrkConsEnergy_U32,DT2CT_DCU4RhBrkConsEnergy_U32,DT2CT_DCU1RegBrkEnergy_U32,DT2CT_DCU2RegBrkEnergy_U32,//DCU3电阻制动能耗；DCU4电阻制动能耗； DCU1再生制动能耗； DCU2再生制动能耗；
            DT2CT_DCU3RegBrkEnergy_U32,DT2CT_DCU4RegBrkEnergy_U32,DT2CT_TC1APRunTime_U32,DT2CT_TC2APRunTime_U32;//DCU3再生制动能耗；DCU4再生制动能耗；TC1空压机运行时间；TC2空压机运行时间；

    //CCU-ERM
    //0x308
    unsigned char CTDT_CCULifeSign_U8;//ERM生命信号
    bool CTDT_TracSignNotSame_B1,CTDT_BrkSignNotSame_B1,CTDT_EBBrkSignNotSame_B1,CTDT_AIBrkSignNotSame_B1,//两端采集到牵引信号不一致,两端采集到制动信号不一致,两端采集到紧急制动信号不一致,两端采集到快速制动信号不一致
            CTDT_ForwardSignNotSame_B1,CTDT_BackwardSignNotSame_B1;//两端采集到向前信号不一致,两端采集到向后信号不一致

    bool CTDT_TC1ActSignNotSame_B1,CTDT_TC2ActSignNotSame_B1,CTDT_TC1ForwardSignRedFault_B1,CTDT_TC2ForwardSignRedFault_B1,//司机室1占有冗余信号不一致,司机室2占有冗余信号不一致,向前冗余信号不一致,向前冗余信号不一致
            CTDT_TC1BackwardSignRedFault_B1,CTDT_TC2BackwardSignRedFault_B1,CTDT_TC1TracSignRedFault_B1,CTDT_TC2TracSignRedFault_B1,//向后冗余信号不一致,向后冗余信号不一致,牵引冗余信号不一致,牵引冗余信号不一致
            CTDT_TC1BrkSignRedFault_B1;//制动冗余信号不一致
    bool CTDT_TC2BrkSignRedFault_B1,CTDT_TC1FastBrkSignRedFault_B1,CTDT_TC2FastBrkSignRedFault_B1,CTDT_Mp1ADDLowPanto_B1,//制动冗余信号不一致,快速制动冗余信号不一致,快速制动冗余信号不一致,Mp1车ADD降弓
            CTDT_Mp2ADDLowPanto_B1,CTDT_BothCabActive_B1,CTDT_TC1BothDirectionActive_B1, CTDT_TC2BothDirectionActive_B1;//Mp2车ADD降弓,两端司机室均占有,TC1车向前向后方向都激活,TC2车向前向后方向都激活

    bool CTDT_TC1BothTracBrkActive_B1,CTDT_TC2BothTracBrkActive_B1, CTDT_TC1BothSideOpenDoor_B1,CTDT_TC2BothSideOpenDoor_B1,//TC1车牵引制动均激活,TC2车牵引制动均激活,TC1车同时收到开左门与开右门信号,TC2车同时收到开左门与开右门信号
            CTDT_TC1BCUSTInterrupted_B1,CTDT_MP1BCUSTInterrupted_B1,CTDT_M1BCUSTInterrupted_B1,CTDT_M2BCUSTInterrupted_B1;//TC1车自检中断,MP1车自检中断,M1车自检中断,M2车自检中断

    bool CTDT_MP2BCUSTInterrupted_B1,CTDT_TC2BCUSTInterrupted_B1,CTDT_2SCUFault_B1;//MP2车自检中断,TC2车自检中断,PIS系统2个以上SCU故障

    //DDU1-CCU
    //0x490
    short TR1CT_DCUMLifeSignal_I16,TR1CT_DCUMBrkForce_I16,TR1CT_Axis1Speed_I16,TR1CT_Axis2Speed_I16,//DCUM生命信号, 牵引制动力实际值,1轴速度,2轴速度
            TR1CT_Axis3Speed_I16,TR1CT_Axis4Speed_I16,TR1CT_BrkChopingCtrlRate_I16;//3轴速度,4轴速度,制动斩波控制率(保留)


    bool TR1CT_EBOK_B1,TR1CT_Slide_B1,TR1CT_Axis4SpeedValid_B1,TR1CT_Axis3SpeedValid_B1,TR1CT_Axis2SpeedValid_B1,//电制动可用,空转/滑行,4轴速度有效,3轴速度有效
            TR1CT_Axis1SpeedValid_B1,TR1CT_TBEValid_B1;//2轴速度有效,1轴速度有效,牵引/制动力有效

    //0x491
    short TR1CT_DCULifeSignal1_I16,TR1CT_ActualPower_I16,TR1CT_DCVoltage_I16,TR1CT_DCCurrent_I16,//DCU生命信号,实际电机功率,直流电压,直流电流
            TR1CT_EBVirtualValue_I16, TR1CT_TractionStatus_I16;//电制动力虚拟值,牵引状态字

    short TR1CT_MaxEBEffort_I16,TR1CT_BrkChopingActualRate_I16,TR1CT_MotorCurrent_I16,TR1CT_SystemFeedback_I16,//最大可用电制动力参考值,实际斩波功率,电机电流,系统反馈
            TR1CT_MaxAvailbleEB_I16;//最大可用电制动力

    bool TR1CT_AdjustActive_B1,TR1CT_Backward_B1,TR1CT_Forward_B1;//校正激活,方向向后,方向向前

    bool TR1CT_GroundingFlt_B1,TR1CT_ChoppingPowerValid_B1,TR1CT_MotorPowerValid_B1,TR1CT_MaxEBValid_B1,//接地故障,斩波功率有效,电机功率有效,最大可用电制动力有效
            TR1CT_TrcSaftyEnable_B1,TR1CT_DCCurrentValid_B1,TR1CT_DCVoltageValid_B1;//牵引安全使能,直流环节电流有效,直流环节电压有效

    bool TR1CT_LineVoltageOK_B1,TR1CT_OutsideFanFullSpeed_B1,TR1CT_OutsideFanHalfSpeed_B1;//线电压正常,外部风扇全速,外部风扇全速

    bool TR1CT_IESContacterQ2_B1,TR1CT_IESContacterQ1_B1,TR1CT_SupplyMode_B1,TR1CT_MotorCurrentValid_B1,//IES接触器Q2在2位,IES接触器Q1在1位,车间电源模式, 电机电流有效

            TR1CT_DivContacterClose_B1,TR1CT_HSCBClose_B1;//分离接触器闭合,高速断路器闭合


    //ox492
    short TR1CT_DCULifeSignal2_I16;//DCU生命信号

    short TR1CT_DCUMVersion_I16,TR1CT_TrcRadiatorTemp_I16,TR1CT_Motor1Temp_I16,TR1CT_Motor2Temp_I16,//DCU/M软件版本,牵引变流器散热器温度,电机1温度,电机2温度
            TR1CT_Motor3Temp_I16,TR1CT_Motor4Temp_I16,TR1CT_TrcAirTemp_I16,TR1CT_ChargingRTemp_I16,//电机3温度,电机4温度, 牵引变流器空气温度,充电电阻温度
            TR1CT_BrkRTemp_I16,TR1CT_Axis1Diameter_I16,TR1CT_Axis2Diameter_I16,TR1CT_Axis3Diameter_I16,//制动电阻温度,1轴轮径,2轴轮径,3轴轮径
            TR1CT_Axis4Diameter_I16;//4轴轮径

    bool TR1CT_WashingMode_B1,TR1CT_NotZeroSpeed_B1,TR1CT_MainControler3_B1,TR1CT_MainControler2_B1,//洗车模式激活 非零速 主控制器3（备用指令 主控制器2（备用指令
            TR1CT_MainControler1_B1;//主控制器1（备用指令

    bool TR1CT_Axis4DiameterValid_B1,TR1CT_Axis3DiameterValid_B1, TR1CT_Axis2DiameterValid_B1,TR1CT_Axis1DiameterValid_B1,//4轴轮径有效 3轴轮径有效 2轴轮径有效 1轴轮径有效
            TR1CT_BrkRTempValid_B1;//制动电阻温度有效

    bool TR1CT_ChargingRTempValid_B1,TR1CT_DCUInvAirTempValid_B1,TR1CT_Motor4TempValid_B1,TR1CT_Motor3TempValid_B1,//充电电阻温度有效 牵引变流器空气温度有效 电机4温度有效 电机3温度有效
            TR1CT_Motor2TempValid_B1,TR1CT_Motor1TempValid_B1,TR1CT_DCUInvRadiatorTempValid_B1;//电机2温度有效 电机1温度有效 牵引变流器散热器温度有效

    //DDU2-CCU
    //0x4C0
    short TR2CT_DCUMLifeSignal_I16,TR2CT_DCUMBrkForce_I16,TR2CT_Axis1Speed_I16,TR2CT_Axis2Speed_I16,//DCUM生命信号, 牵引制动力实际值,1轴速度,2轴速度
            TR2CT_Axis3Speed_I16,TR2CT_Axis4Speed_I16,TR2CT_BrkChopingCtrlRate_I16;//3轴速度,4轴速度,制动斩波控制率(保留)


    bool TR2CT_EBOK_B1,TR2CT_Slide_B1,TR2CT_Axis4SpeedValid_B1,TR2CT_Axis3SpeedValid_B1,TR2CT_Axis2SpeedValid_B1,//电制动可用,空转/滑行,4轴速度有效,3轴速度有效
            TR2CT_Axis1SpeedValid_B1,TR2CT_TBEValid_B1;//2轴速度有效,1轴速度有效,牵引/制动力有效

    //0x4C1
    short TR2CT_DCULifeSignal1_I16,TR2CT_ActualPower_I16,TR2CT_DCVoltage_I16,TR2CT_DCCurrent_I16,//DCU生命信号,实际电机功率,直流电压,直流电流
            TR2CT_EBVirtualValue_I16, TR2CT_TractionStatus_I16;//电制动力虚拟值,牵引状态字

    short TR2CT_MaxEBEffort_I16,TR2CT_BrkChopingActualRate_I16,TR2CT_MotorCurrent_I16,TR2CT_SystemFeedback_I16,//最大可用电制动力参考值,实际斩波功率,电机电流,系统反馈
            TR2CT_MaxAvailbleEB_I16;//最大可用电制动力

    bool TR2CT_AdjustActive_B1,TR2CT_Backward_B1,TR2CT_Forward_B1;//校正激活,方向向后,方向向前

    bool TR2CT_GroundingFlt_B1,TR2CT_ChoppingPowerValid_B1,TR2CT_MotorPowerValid_B1,TR2CT_MaxEBValid_B1,//接地故障,斩波功率有效,电机功率有效,最大可用电制动力有效
            TR2CT_TrcSaftyEnable_B1,TR2CT_DCCurrentValid_B1,TR2CT_DCVoltageValid_B1;//牵引安全使能,直流环节电流有效,直流环节电压有效

    bool TR2CT_LineVoltageOK_B1,TR2CT_OutsideFanFullSpeed_B1,TR2CT_OutsideFanHalfSpeed_B1;//线电压正常,外部风扇全速,外部风扇全速

    bool TR2CT_IESContacterQ2_B1,TR2CT_IESContacterQ1_B1,TR2CT_SupplyMode_B1,TR2CT_MotorCurrentValid_B1,//IES接触器Q2在2位,IES接触器Q1在1位,车间电源模式, 电机电流有效

            TR2CT_DivContacterClose_B1,TR2CT_HSCBClose_B1;//分离接触器闭合,高速断路器闭合


    //ox4C2
    short TR2CT_DCULifeSignal2_I16;//DCU生命信号

    short TR2CT_DCUMVersion_I16,TR2CT_TrcRadiatorTemp_I16,TR2CT_Motor1Temp_I16,TR2CT_Motor2Temp_I16,//DCU/M软件版本,牵引变流器散热器温度,电机1温度,电机2温度
            TR2CT_Motor3Temp_I16,TR2CT_Motor4Temp_I16,TR2CT_TrcAirTemp_I16,TR2CT_ChargingRTemp_I16,//电机3温度,电机4温度, 牵引变流器空气温度,充电电阻温度
            TR2CT_BrkRTemp_I16,TR2CT_Axis1Diameter_I16,TR2CT_Axis2Diameter_I16,TR2CT_Axis3Diameter_I16,//制动电阻温度,1轴轮径,2轴轮径,3轴轮径
            TR2CT_Axis4Diameter_I16;//4轴轮径

    bool TR2CT_WashingMode_B1,TR2CT_NotZeroSpeed_B1,TR2CT_MainControler3_B1,TR2CT_MainControler2_B1,//洗车模式激活 非零速 主控制器3（备用指令 主控制器2（备用指令
            TR2CT_MainControler1_B1;//主控制器1（备用指令

    bool TR2CT_Axis4DiameterValid_B1,TR2CT_Axis3DiameterValid_B1, TR2CT_Axis2DiameterValid_B1,TR2CT_Axis1DiameterValid_B1,//4轴轮径有效 3轴轮径有效 2轴轮径有效 1轴轮径有效
            TR2CT_BrkRTempValid_B1;//制动电阻温度有效

    bool TR2CT_ChargingRTempValid_B1,TR2CT_DCUInvAirTempValid_B1,TR2CT_Motor4TempValid_B1,TR2CT_Motor3TempValid_B1,//充电电阻温度有效 牵引变流器空气温度有效 电机4温度有效 电机3温度有效
            TR2CT_Motor2TempValid_B1,TR2CT_Motor1TempValid_B1,TR2CT_DCUInvRadiatorTempValid_B1;//电机2温度有效 电机1温度有效 牵引变流器散热器温度有效

    //DDU3-CCU
    //0x4D0
    short TR3CT_DCUMLifeSignal_I16,TR3CT_DCUMBrkForce_I16,TR3CT_Axis1Speed_I16,TR3CT_Axis2Speed_I16,//DCUM生命信号, 牵引制动力实际值,1轴速度,2轴速度
            TR3CT_Axis3Speed_I16,TR3CT_Axis4Speed_I16,TR3CT_BrkChopingCtrlRate_I16;//3轴速度,4轴速度,制动斩波控制率(保留)


    bool TR3CT_EBOK_B1,TR3CT_Slide_B1,TR3CT_Axis4SpeedValid_B1,TR3CT_Axis3SpeedValid_B1,TR3CT_Axis2SpeedValid_B1,//电制动可用,空转/滑行,4轴速度有效,3轴速度有效
            TR3CT_Axis1SpeedValid_B1,TR3CT_TBEValid_B1;//2轴速度有效,1轴速度有效,牵引/制动力有效

    //0x4D1
    short TR3CT_DCULifeSignal1_I16,TR3CT_ActualPower_I16,TR3CT_DCVoltage_I16,TR3CT_DCCurrent_I16,//DCU生命信号,实际电机功率,直流电压,直流电流
            TR3CT_EBVirtualValue_I16, TR3CT_TractionStatus_I16;//电制动力虚拟值,牵引状态字

    short TR3CT_MaxEBEffort_I16,TR3CT_BrkChopingActualRate_I16,TR3CT_MotorCurrent_I16,TR3CT_SystemFeedback_I16,//最大可用电制动力参考值,实际斩波功率,电机电流,系统反馈
            TR3CT_MaxAvailbleEB_I16;//最大可用电制动力

    bool TR3CT_AdjustActive_B1,TR3CT_Backward_B1,TR3CT_Forward_B1;//校正激活,方向向后,方向向前

    bool TR3CT_GroundingFlt_B1,TR3CT_ChoppingPowerValid_B1,TR3CT_MotorPowerValid_B1,TR3CT_MaxEBValid_B1,//接地故障,斩波功率有效,电机功率有效,最大可用电制动力有效
            TR3CT_TrcSaftyEnable_B1,TR3CT_DCCurrentValid_B1,TR3CT_DCVoltageValid_B1;//牵引安全使能,直流环节电流有效,直流环节电压有效

    bool TR3CT_LineVoltageOK_B1,TR3CT_OutsideFanFullSpeed_B1,TR3CT_OutsideFanHalfSpeed_B1;//线电压正常,外部风扇全速,外部风扇全速

    bool TR3CT_IESContacterQ2_B1,TR3CT_IESContacterQ1_B1,TR3CT_SupplyMode_B1,TR3CT_MotorCurrentValid_B1,//IES接触器Q2在2位,IES接触器Q1在1位,车间电源模式, 电机电流有效

            TR3CT_DivContacterClose_B1,TR3CT_HSCBClose_B1;//分离接触器闭合,高速断路器闭合


    //ox4D2
    short TR3CT_DCULifeSignal2_I16;//DCU生命信号

    short TR3CT_DCUMVersion_I16,TR3CT_TrcRadiatorTemp_I16,TR3CT_Motor1Temp_I16,TR3CT_Motor2Temp_I16,//DCU/M软件版本,牵引变流器散热器温度,电机1温度,电机2温度
            TR3CT_Motor3Temp_I16,TR3CT_Motor4Temp_I16,TR3CT_TrcAirTemp_I16,TR3CT_ChargingRTemp_I16,//电机3温度,电机4温度, 牵引变流器空气温度,充电电阻温度
            TR3CT_BrkRTemp_I16,TR3CT_Axis1Diameter_I16,TR3CT_Axis2Diameter_I16,TR3CT_Axis3Diameter_I16,//制动电阻温度,1轴轮径,2轴轮径,3轴轮径
            TR3CT_Axis4Diameter_I16;//4轴轮径

    bool TR3CT_WashingMode_B1,TR3CT_NotZeroSpeed_B1,TR3CT_MainControler3_B1,TR3CT_MainControler2_B1,//洗车模式激活 非零速 主控制器3（备用指令 主控制器2（备用指令
            TR3CT_MainControler1_B1;//主控制器1（备用指令

    bool TR3CT_Axis4DiameterValid_B1,TR3CT_Axis3DiameterValid_B1, TR3CT_Axis2DiameterValid_B1,TR3CT_Axis1DiameterValid_B1,//4轴轮径有效 3轴轮径有效 2轴轮径有效 1轴轮径有效
            TR3CT_BrkRTempValid_B1;//制动电阻温度有效

    bool TR3CT_ChargingRTempValid_B1,TR3CT_DCUInvAirTempValid_B1,TR3CT_Motor4TempValid_B1,TR3CT_Motor3TempValid_B1,//充电电阻温度有效 牵引变流器空气温度有效 电机4温度有效 电机3温度有效
            TR3CT_Motor2TempValid_B1,TR3CT_Motor1TempValid_B1,TR3CT_DCUInvRadiatorTempValid_B1;//电机2温度有效 电机1温度有效 牵引变流器散热器温度有效



    //DDU4-CCU
    //0x480
    short TR4CT_DCUMLifeSignal_I16,TR4CT_DCUMBrkForce_I16,TR4CT_Axis1Speed_I16,TR4CT_Axis2Speed_I16,//DCUM生命信号, 牵引制动力实际值,1轴速度,2轴速度
            TR4CT_Axis3Speed_I16,TR4CT_Axis4Speed_I16,TR4CT_BrkChopingCtrlRate_I16;//3轴速度,4轴速度,制动斩波控制率(保留)


    bool TR4CT_EBOK_B1,TR4CT_Slide_B1,TR4CT_Axis4SpeedValid_B1,TR4CT_Axis3SpeedValid_B1,TR4CT_Axis2SpeedValid_B1,//电制动可用,空转/滑行,4轴速度有效,3轴速度有效
            TR4CT_Axis1SpeedValid_B1,TR4CT_TBEValid_B1;//2轴速度有效,1轴速度有效,牵引/制动力有效

    //0x481
    short TR4CT_DCULifeSignal1_I16,TR4CT_ActualPower_I16,TR4CT_DCVoltage_I16,TR4CT_DCCurrent_I16,//DCU生命信号,实际电机功率,直流电压,直流电流
            TR4CT_EBVirtualValue_I16, TR4CT_TractionStatus_I16;//电制动力虚拟值,牵引状态字

    short TR4CT_MaxEBEffort_I16,TR4CT_BrkChopingActualRate_I16,TR4CT_MotorCurrent_I16,TR4CT_SystemFeedback_I16,//最大可用电制动力参考值,实际斩波功率,电机电流,系统反馈
            TR4CT_MaxAvailbleEB_I16;//最大可用电制动力

    bool TR4CT_AdjustActive_B1,TR4CT_Backward_B1,TR4CT_Forward_B1;//校正激活,方向向后,方向向前

    bool TR4CT_GroundingFlt_B1,TR4CT_ChoppingPowerValid_B1,TR4CT_MotorPowerValid_B1,TR4CT_MaxEBValid_B1,//接地故障,斩波功率有效,电机功率有效,最大可用电制动力有效
            TR4CT_TrcSaftyEnable_B1,TR4CT_DCCurrentValid_B1,TR4CT_DCVoltageValid_B1;//牵引安全使能,直流环节电流有效,直流环节电压有效

    bool TR4CT_LineVoltageOK_B1,TR4CT_OutsideFanFullSpeed_B1,TR4CT_OutsideFanHalfSpeed_B1;//线电压正常,外部风扇全速,外部风扇全速

    bool TR4CT_IESContacterQ2_B1,TR4CT_IESContacterQ1_B1,TR4CT_SupplyMode_B1,TR4CT_MotorCurrentValid_B1,//IES接触器Q2在2位,IES接触器Q1在1位,车间电源模式, 电机电流有效

            TR4CT_DivContacterClose_B1,TR4CT_HSCBClose_B1;//分离接触器闭合,高速断路器闭合


    //ox482
    short TR4CT_DCULifeSignal2_I16;//DCU生命信号

    short TR4CT_DCUMVersion_I16,TR4CT_TrcRadiatorTemp_I16,TR4CT_Motor1Temp_I16,TR4CT_Motor2Temp_I16,//DCU/M软件版本,牵引变流器散热器温度,电机1温度,电机2温度
            TR4CT_Motor3Temp_I16,TR4CT_Motor4Temp_I16,TR4CT_TrcAirTemp_I16,TR4CT_ChargingRTemp_I16,//电机3温度,电机4温度, 牵引变流器空气温度,充电电阻温度
            TR4CT_BrkRTemp_I16,TR4CT_Axis1Diameter_I16,TR4CT_Axis2Diameter_I16,TR4CT_Axis3Diameter_I16,//制动电阻温度,1轴轮径,2轴轮径,3轴轮径
            TR4CT_Axis4Diameter_I16;//4轴轮径

    bool TR4CT_WashingMode_B1,TR4CT_NotZeroSpeed_B1,TR4CT_MainControler3_B1,TR4CT_MainControler2_B1,//洗车模式激活 非零速 主控制器3（备用指令 主控制器2（备用指令
            TR4CT_MainControler1_B1;//主控制器1（备用指令

    bool TR4CT_Axis4DiameterValid_B1,TR4CT_Axis3DiameterValid_B1, TR4CT_Axis2DiameterValid_B1,TR4CT_Axis1DiameterValid_B1,//4轴轮径有效 3轴轮径有效 2轴轮径有效 1轴轮径有效
            TR4CT_BrkRTempValid_B1;//制动电阻温度有效

    bool TR4CT_ChargingRTempValid_B1,TR4CT_DCUInvAirTempValid_B1,TR4CT_Motor4TempValid_B1,TR4CT_Motor3TempValid_B1,//充电电阻温度有效 牵引变流器空气温度有效 电机4温度有效 电机3温度有效
            TR4CT_Motor2TempValid_B1,TR4CT_Motor1TempValid_B1,TR4CT_DCUInvRadiatorTempValid_B1;//电机2温度有效 电机1温度有效 牵引变流器散热器温度有效



    //CCU-DCU
    //0x800
    short CTTR_SysTimeYearDCUM_I8,CTTR_SysTimeMonthDCUM_I8,CTTR_SysTimeDayDCUM_I8,CTTR_SysTimeHourDCUM_I8,//年,月,日,时
            CTTR_SysTimeMinuteDCUM_I8,CTTR_SysTimeSecondDCUM_I8;//分,秒
    //CCU-DCU1
    //0x498
    short CTTR1_CCULifeSignal1_I16,CTTR1_TractionEffortPercent_I16,CTTR1_TrainSpeed_I16,CTTR1_RefAxisSpeed_I16;//CCU生命信号,牵引力参考值（百分比）,列车速度,参考轴速度
    bool CTTR1_EACooperition_B1, CTTR1_TrcEffortValid_B1;//电空配合,牵引力参考值有效

    bool CTTR1_RefAxisSpeedValid_B1, CTTR1_Brake_B1,CTTR1_Traction_B1,CTTR1_SpeedValid_B1,//参考轴速度有效,制动指令,牵引指令,列车速度有效
            CTTR1_FastBrake_B1;//快速制动
    //0x499
    short CTTR1_CCULifeSignal2_I16,CTTR1_LoadAdjustParameter_I16,CTTR1_SystemChoise_I16;//CCU生命信号,载荷校正系数,系统选择

    bool CTTR1_LoadAdjustParaValid_B1,CTTR1_Backward_B1;//载荷校正系数有效,方向向后指令
    bool CTTR1_Forward_B1,CTTR1_EDCutOff_B1,CTTR1_3PhaseActived_B1;//方向向前指令,电制动切除,三相母线激活
    bool CTTR1_LineVoltageOn_B1,CTTR1_HighVoltageEnable_B1;//线电压工作,高压使能
    //0x49A
    short CTTR1_CCULifeSignal3_I16,CTTR1_RefDiameter_I16,CTTR1_RefAxisNumber_I16,CTTR1_EnvironmentTemp_I16,//CCU生命信号,参考轴轮径,参考轴轴号,环境温度
            CTTR1_SpeedLimit_I16;//限速值
    bool CTTR1_CCUD2OK_B1,CTTR1_SpeedLimitValid_B1,CTTR1_WashingMode_B1,CTTR1_VersionEnable_B1,//CCU-D2正常,限速有效,洗车模式,版本信息使能
            CTTR1_CounterClear_B1,CTTR1_RefDiameterValid_B1,CTTR1_CCUD1OK_B1,CTTR1_FltReset_B1,//清空条件计数器,参考轴轮径有效,CCU-D1正常,故障复位
            CTTR1_EBCutOff_B1;//试验切除电制动

    //CCU-DCU2
    //0x4C8
    short CTTR2_CCULifeSignal1_I16,CTTR2_TractionEffortPercent_I16,CTTR2_TrainSpeed_I16,CTTR2_RefAxisSpeed_I16;//CCU生命信号,牵引力参考值（百分比）,列车速度,参考轴速度
    bool CTTR2_EACooperition_B1, CTTR2_TrcEffortValid_B1;//电空配合,牵引力参考值有效

    bool CTTR2_RefAxisSpeedValid_B1, CTTR2_Brake_B1,CTTR2_Traction_B1,CTTR2_SpeedValid_B1,//参考轴速度有效,制动指令,牵引指令,列车速度有效
            CTTR2_FastBrake_B1;//快速制动
    //0x4C9
    short CTTR2_CCULifeSignal2_I16,CTTR2_LoadAdjustParameter_I16,CTTR2_SystemChoise_I16;//CCU生命信号,载荷校正系数,系统选择

    bool CTTR2_LoadAdjustParaValid_B1,CTTR2_Backward_B1;//载荷校正系数有效,方向向后指令
    bool CTTR2_Forward_B1,CTTR2_EDCutOff_B1,CTTR2_3PhaseActived_B1;//方向向前指令,电制动切除,三相母线激活
    bool CTTR2_LineVoltageOn_B1,CTTR2_HighVoltageEnable_B1;//线电压工作,高压使能
    //0x4CA
    short CTTR2_CCULifeSignal3_I16,CTTR2_RefDiameter_I16,CTTR2_RefAxisNumber_I16,CTTR2_EnvironmentTemp_I16,//CCU生命信号,参考轴轮径,参考轴轴号,环境温度
            CTTR2_SpeedLimit_I16;//限速值
    bool CTTR2_CCUD2OK_B1,CTTR2_SpeedLimitValid_B1,CTTR2_WashingMode_B1,CTTR2_VersionEnable_B1,//CCU-D2正常,限速有效,洗车模式,版本信息使能
            CTTR2_CounterClear_B1,CTTR2_RefDiameterValid_B1,CTTR2_CCUD1OK_B1,CTTR2_FltReset_B1,//清空条件计数器,参考轴轮径有效,CCU-D1正常,故障复位
            CTTR2_EBCutOff_B1;//试验切除电制动

    //CCU-DCU3
    //0x4D8
    short CTTR3_CCULifeSignal1_I16,CTTR3_TractionEffortPercent_I16,CTTR3_TrainSpeed_I16,CTTR3_RefAxisSpeed_I16;//CCU生命信号,牵引力参考值（百分比）,列车速度,参考轴速度
    bool CTTR3_EACooperition_B1, CTTR3_TrcEffortValid_B1;//电空配合,牵引力参考值有效

    bool CTTR3_RefAxisSpeedValid_B1, CTTR3_Brake_B1,CTTR3_Traction_B1,CTTR3_SpeedValid_B1,//参考轴速度有效,制动指令,牵引指令,列车速度有效
            CTTR3_FastBrake_B1;//快速制动
    //0x4D9
    short CTTR3_CCULifeSignal2_I16,CTTR3_LoadAdjustParameter_I16,CTTR3_SystemChoise_I16;//CCU生命信号,载荷校正系数,系统选择

    bool CTTR3_LoadAdjustParaValid_B1,CTTR3_Backward_B1;//载荷校正系数有效,方向向后指令
    bool CTTR3_Forward_B1,CTTR3_EDCutOff_B1,CTTR3_3PhaseActived_B1;//方向向前指令,电制动切除,三相母线激活
    bool CTTR3_LineVoltageOn_B1,CTTR3_HighVoltageEnable_B1;//线电压工作,高压使能
    //0x4DA
    short CTTR3_CCULifeSignal3_I16,CTTR3_RefDiameter_I16,CTTR3_RefAxisNumber_I16,CTTR3_EnvironmentTemp_I16,//CCU生命信号,参考轴轮径,参考轴轴号,环境温度
            CTTR3_SpeedLimit_I16;//限速值
    bool CTTR3_CCUD2OK_B1,CTTR3_SpeedLimitValid_B1,CTTR3_WashingMode_B1,CTTR3_VersionEnable_B1,//CCU-D2正常,限速有效,洗车模式,版本信息使能
            CTTR3_CounterClear_B1,CTTR3_RefDiameterValid_B1,CTTR3_CCUD1OK_B1,CTTR3_FltReset_B1,//清空条件计数器,参考轴轮径有效,CCU-D1正常,故障复位
            CTTR3_EBCutOff_B1;//试验切除电制动


    //CCU-DCU4
    //0x488
    short CTTR4_CCULifeSignal1_I16,CTTR4_TractionEffortPercent_I16,CTTR4_TrainSpeed_I16,CTTR4_RefAxisSpeed_I16;//CCU生命信号,牵引力参考值（百分比）,列车速度,参考轴速度
    bool CTTR4_EACooperition_B1, CTTR4_TrcEffortValid_B1;//电空配合,牵引力参考值有效

    bool CTTR4_RefAxisSpeedValid_B1, CTTR4_Brake_B1,CTTR4_Traction_B1,CTTR4_SpeedValid_B1,//参考轴速度有效,制动指令,牵引指令,列车速度有效
            CTTR4_FastBrake_B1;//快速制动
    //0x489
    short CTTR4_CCULifeSignal2_I16,CTTR4_LoadAdjustParameter_I16,CTTR4_SystemChoise_I16;//CCU生命信号,载荷校正系数,系统选择

    bool CTTR4_LoadAdjustParaValid_B1,CTTR4_Backward_B1;//载荷校正系数有效,方向向后指令
    bool CTTR4_Forward_B1,CTTR4_EDCutOff_B1,CTTR4_3PhaseActived_B1;//方向向前指令,电制动切除,三相母线激活
    bool CTTR4_LineVoltageOn_B1,CTTR4_HighVoltageEnable_B1;//线电压工作,高压使能
    //0x48A
    short CTTR4_CCULifeSignal3_I16,CTTR4_RefDiameter_I16,CTTR4_RefAxisNumber_I16,CTTR4_EnvironmentTemp_I16,//CCU生命信号,参考轴轮径,参考轴轴号,环境温度
            CTTR4_SpeedLimit_I16;//限速值
    bool CTTR4_CCUD2OK_B1,CTTR4_SpeedLimitValid_B1,CTTR4_WashingMode_B1,CTTR4_VersionEnable_B1,//CCU-D2正常,限速有效,洗车模式,版本信息使能
            CTTR4_CounterClear_B1,CTTR4_RefDiameterValid_B1,CTTR4_CCUD1OK_B1,CTTR4_FltReset_B1,//清空条件计数器,参考轴轮径有效,CCU-D1正常,故障复位
            CTTR4_EBCutOff_B1;//试验切除电制动


    //CCU-D1-CCU
    //0x818
    short CD1CT_DCUMLifeSignal_I16, CD1CT_SoftWareVersion1_I16,CD1CT_SoftWareVersion2_I16,CD1CT_SoftWareVersion3_I16,//DCUM生命信号, 软件版本号1,软件版本号2,软件版本号3
            CD1CT_SoftWareVersion4_I16;//软件版本号4
    bool CD1CT_CCUDLowVoltage_B1,CD1CT_ODBSOK_B1;//CCU-D电池低压,ODBS OK

    //CCU-D2-CCU
    //0x828
    short CD2CT_DCUMLifeSignal_I16, CD2CT_SoftWareVersion1_I16,CD2CT_SoftWareVersion2_I16,CD2CT_SoftWareVersion3_I16,//DCUM生命信号, 软件版本号1,软件版本号2,软件版本号3
            CD2CT_SoftWareVersion4_I16;//软件版本号4
    bool CD2CT_CCUDLowVoltage_B1,CD2CT_ODBSOK_B1;//CCU-D电池低压,ODBS OK

    //CCU-CCU-D
    //0x810
    short CTCD_CCULifeSignal_I16,CTCD_TrainNumber_I16;//CCU生命信号,列车号


    //BCU1-CCU
    //0x610
    short BR1CT_MassTc12Bog1_I16,BR1CT_MassTc12Bog2_I16,BR1CT_MassMp12Bog1_I16,BR1CT_MassMp12Bog2_I16,//MassTc1/Tc2Bogie1，Tc1/Tc2转向架1载荷 MassTc1/Tc2Bogie2，Tc1/Tc2转向架2载荷 MassMp1/Mp2Bogie1，Mp1/Mp2转向架1载荷 MassMp1/Mp2Bogie1，Mp1/Mp2转向架2载荷
            BR1CT_MassM12Bog1_I16, BR1CT_MassM12Bog2_I16;//MassM1/M2Bogie1，M1/M2转向架1载荷 MassM1/M2Bogie2，M1/M2转向架2载荷

    short BR1CT_ASPTc12Bog1_I16,BR1CT_ASPTc12Bog2_I16,BR1CT_ASPMp12Bog1_I16,BR1CT_ASPMp12Bog2_I16,//ASPTc1/Tc2Bogie1，Tc1/Tc2转向架1ASP压力值 ASPTc1/Tc2Bogie2，Tc1/Tc2转向架2ASP压力值 ASPMp1/Mp2Bogie1 , Mp1/Mp2转向架1ASP压力值 ASPMp1/Mp2Bogie2，Mp1/Mp2转向架2ASP压力值
            BR1CT_ASPM12Bog1_I16,BR1CT_ASPM12Bog2_I16;//ASPM1/M2Bogie1，M1/M2转向架1ASP压力值 ASPM1/M2Bogie2，M1/M2转向架2ASP压力值

    bool BR1CT_MassValidTc12Bog1_B1,BR1CT_MassValidTc12Bog2_B1,BR1CT_MassValidMp12Bog1_B1,BR1CT_MassValidMp12Bog2_B1,//MassTc1/Tc2Bogie1valid，Tc1/Tc2转向架1载荷值有效 MassTc1/Tc2Bogie2valid，Tc1/Tc2转向架2载荷值有效 MassMp1/Mp2Bogie1valid，Mp1/Mp2转向架1载荷值有效 MassMp1/Mp2Bogie2valid，Mp1/Mp2转向架2载荷值有效
            BR1CT_MassValidM12Bog1_B1,BR1CT_MassValidM12Bog2_B1;//MassM1/M2Bogie1valid，M1/M2转向架1载荷值有效 MassM1/M2Bogie2valid，M1/M2转向架2载荷值有效

    bool BR1CT_ASPValidTc12Bog1_B1,BR1CT_ASPValidTc12Bog2_B1,BR1CT_ASPValidMp12Bog1_B1,BR1CT_ASPValidMp12Bog2_B1,//ASPTc1/Tc2Bogie1valid，Tc1/Tc2转向架1空簧压力有效 ASPTc1/Tc2Bogie2valid，Tc1/Tc2转向架2空簧压力有效 ASPMp1/Mp2Bogie1valid，Mp1/Mp2向架1空簧压力有效 ASPMp1/Mp2Bogie2valid，Mp1/Mp2转向架2空簧压力有效
            BR1CT_ASPValidM12Bog1_B1,BR1CT_ASPValidM12Bog2_B1;//ASPM1/M2Bogie1valid，M1/M2转向架1空簧压力有效 ASPM1/M2Bogie2valid，M1/M2转向架2空簧压力有效

    //0x611
    short BR1CT_SpeedTc12Ax1_I16,BR1CT_SpeedTc12Ax2_I16,BR1CT_SpeedTc12Ax3_I16,BR1CT_SpeedTC12Ax4_I16,//Actualspeedofaxle1inCarTc1/Tc2，Tc1/Tc2车1轴线速度 Actualspeedofaxle2inCarTc1/Tc2，Tc1/Tc2车2轴线速度 Actualspeedofaxle3inCarTc1/Tc2，Tc1/Tc2车3轴线速度 Actualspeedofaxle4inCarTc1/Tc2，Tc1/Tc2车4轴线速度
            BR1CT_SpeedMp12Ax1_I16,BR1CT_SpeedMp12Ax2_I16,BR1CT_SpeedMp12Ax3_I16,BR1CT_SpeedMp12Ax4_I16,//Actualspeedofaxle1inCarMp1/Mp2，Mp1/Mp2车1轴线速度 Actualspeedofaxle2inCarMp1/Mp2，Mp1/Mp2车2轴线速度 Actualspeedofaxle3inCarMp1/Mp2，Mp1/Mp2车3轴线速度 Actualspeedofaxle4inCarMp1/Mp2，Mp1/Mp2车4轴线速度
            BR1CT_SpeedM12Ax1_I16,BR1CT_SpeedM12Ax2_I16,BR1CT_SpeedM12Ax3_I16,BR1CT_SpeedM12Ax4_I16,//Actualspeedofaxle1inCarM1/M2，M1/M2车1轴线速度 Actualspeedofaxle2inCarM1/M2，M1/M2车2轴线速度 Actualspeedofaxle3inCarM1/M2，M1/M2车3轴线速度 Actualspeedofaxle4inCarM1/M2，M1/M2车4轴线速度
            BR1CT_MRP_TC_I16,BR1CT_MRP_MP_I16,BR1CT_MRP_M_I16;//MRpressureInTCCar，TC车单元主风管压力 MRpressureInMPCar，MP车单元主风管压力 MRpressureInMCar，M车单元主风管压力

    bool BR1CT_SpeedValTc12Ax1_B1,BR1CT_SpeedValTc12Ax2_B1,BR1CT_SpeedValTc12Ax3_B1,BR1CT_SpeedValTc12Ax4_B1,//Actualspeedofaxle1validinCarTc1/Tc2，Tc1/Tc2车1轴线速度值有效 Actualspeedofaxle2validinCarTc1/Tc2，Tc1/Tc2车2轴线速度值有效 Actualspeedofaxle3validinCarTc1/Tc2，Tc1/Tc2车3轴线速度值有效 Actualspeedofaxle4validinCarTc1/Tc2，Tc1/Tc2车4轴线速度值有效
            BR1CT_SpeedValMp12Ax1_B1,BR1CT_SpeedValMp12Ax2_B1,BR1CT_SpeedValMp12Ax3_B1,BR1CT_SpeedValMp12Ax4_B1;//Actualspeedofaxle1validinCarMp1/Mp2，Mp1/Mp2车1轴线速度值有效  Actualspeedofaxle2validinCarMp1/Mp2，Mp1/Mp2车2轴线速度值有效 Actualspeedofaxle3validinCarMp1/Mp2，Mp1/Mp2车3轴线速度值有效  Actualspeedofaxle4validinCarMp1/Mp2，Mp1/Mp2车4轴线速度值有效

    bool BR1CT_SpeedValM12Ax1_B1,BR1CT_SpeedValM12Ax2_B1,BR1CT_SpeedValM12Ax3_B1,BR1CT_SpeedValM12Ax4_B1,//Actualspeedofaxle1validinCarM1/M2，M1/M2车1轴线速度值有效 Actualspeedofaxle2validinCarM1/M2，M1/M2车2轴线速度值有效 Actualspeedofaxle3validinCarM1/M2，M1/M2车3轴线速度值有效 Actualspeedofaxle4validinCarM1/M2，M1/M2车4轴线速度值有效
            BR1CT_MRPValTC_B1,BR1CT_MRPValMP_B1,BR1CT_MRPValM_B1;//MRpressureValidInTC，TC车主风管压力有效 MRpressureValidInMP，MP车主风管压力有效  MRpressureValidInM，M车主风管压力有效

    //0x612
    short BR1CT_LifeSgn_I16,BR1CT_EPForceTc12bog1_I16,BR1CT_EPForceTc12bog2_I16,BR1CT_EPForceMp12bog1_I16,//LifeSignal生命信号	TC1/TC2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,Tc1/Tc2转向架1可能施加的空气制动力	TC1/TC2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,Tc1/Tc2转向架2可能施加的空气制动力	MP1/MP2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,Mp1/Mp2转向架1可能施加的空气制动力
            BR1CT_EPForceMp12bog2_I16,BR1CT_EPForceM12bog1_I16,BR1CT_EPForceM12bog2_I16;//MP1/MP2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,Mp1/Mp2转向架2可能施加的空气制动力	M1/M2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,M1/M2转向架1可能施加的空气制动力	M1/M2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,M1/M2转向架2可能施加的空气制动力

    unsigned char BR1CT_GWSWVerBH_U8,BR1CT_GWSWVerBL_U8;//Gatewayvalveswversionbytehigh，网关阀软件版本byte高位   Gatewayvalveswversionbytelow，网关阀软件版本byte低位

    bool BR1CT_DiagOKTc12_Bogie1_B1,BR1CT_DiagOKTc12_Bogie2_B1,BR1CT_DiagOKMp12_Bogie1_B1, BR1CT_DiagOKMp12_Bogie2_B1,//Tc1/Tc2Bogie1BCUDiagOK，Tc1/Tc2转向架1状态及诊断数据有效	Tc1/Tc2Bogie2BCUDiagOK，Tc1/Tc2转向架2状态及诊断数据有效	Mp1/Mp2Bogie1BCUDiagOK，Mp1/Mp2转向架1状态及诊断数据有效	Mp1/Mp2Bogie2BCUDiagOK，Mp1/Mp2转向架2状态及诊断数据有效
            BR1CT_DiagOKM12_Bogie1_B1, BR1CT_DiagOKM12_Bogie2_B1,BR1CT_CanApplSBTc12Bog1_B1,BR1CT_CanApplSBTc12Bog2_B1;//M1/M2Bogie1BCUDiagOK，M1/M2转向架1状态及诊断数据有效	M1/M2Bogie2BCUDiagOK，M1/M2转向架2状态及诊断数据有效	Tc1/Tc2bogie1EP2002canapplyservicebrake，Tc1/Tc2车转向架1能施加常用制动	Tc1/Tc2bogie2EP2002canapplyservicebrake，Tc1/Tc2车转向架2能施加常用制动

    bool BR1CT_CanApplSBMp12Bog1_B1,BR1CT_CanApplSBMp12Bog2_B1,BR1CT_CanApplSBM12Bog1_B1,BR1CT_CanApplSBM12Bog2_B1,//Mp1/Mp2bogie1EP2002canapplyservicebrake，Mp1/Mp2车转向架1能施加常用制动	Mp1/Mp2bogie2EP2002canapplyservicebrake，Mp1/Mp2车转向架2能施加常用制动	M1/M2bogie1EP2002canapplyservicebrake，M1/M2车转向架1能施加常用制动	M1/M2bogie2EP2002canapplyservicebrake，M1/M2车转向架2能施加常用制动
            BR1CT_BrakeAppliedTC12Bog1_B1,BR1CT_BrakeAppliedTC12Bog2_B1,BR1CT_BrakeAppliedMp12Bog1_B1,BR1CT_BrakeAppliedMp12Bog2_B1;//Tc1/Tc2转向架1制动已经施加	Tc1/Tc2转向架2制动已经施加	Mp1/Mp2转向架1制动已经施加	Mp1/Mp2转向架2制动已经施加

    bool BR1CT_BrakeAppliedM12Bog1_B1,BR1CT_BrakeAppliedM12Bog2_B1,BR1CT_BrakeReleasedTC12Bog1_B1,BR1CT_BrakeReleasedTC12Bog2_B1,//M1/M2转向架1制动已经施加	M1/M2转向架2制动已经施加	Tc1/Tc2转向架1制动已经缓解	Tc1/Tc2转向架2制动已经缓解
            BR1CT_BrakeReleasedMp12Bog1_B1,BR1CT_BrakeReleasedMp12Bog2_B1,BR1CT_BrakeReleasedM12Bog1_B1, BR1CT_BrakeReleasedM12Bog2_B1;//Mp1/Mp2转向架1制动已经缓解	Mp1/Mp2转向架2制动已经缓解	M1/M2转向架1制动已经缓解	M1/M2转向架2制动已经缓解

    bool BR1CT_IsolTc12Bog1_B1,BR1CT_IsolTc12Bog2_B1, BR1CT_IsolMp12Bog1_B1,BR1CT_IsolMp12Bog2_B1,//isolatedTc1/Tc2Bogie1，Tc1/Tc2转向架1隔离	isolatedTc1/Tc2Bogie2，Tc1/Tc2转向架2隔离	isolatedMp1/Mp2Bogie1，Mp1/Mp2转向架1隔离	isolatedMp1/Mp2Bogie2，Mp1/Mp2转向架2隔离
            BR1CT_IsolM12Bog1_B1,BR1CT_IsolM12Bog2_B1, BR1CT_WSPTc12Bog1_B1,BR1CT_WSPTc12Bog2_B1;//isolatedM1/M2Bogie1，M1/M2转向架1隔离	isolatedM1/M2Bogie2，M1/M2转向架2隔离	Tc1/Tc2 Bog1 WSPDetected，检测到打滑	Tc1/Tc2 Bog2 WSPDetected，检测到打滑

    bool BR1CT_WSPMP12Bog1_B1,BR1CT_WSPMP12Bog2_B1,BR1CT_WSPM12Bog1_B1,BR1CT_WSPM12Bog2_B1,//MP1/MP2 Bog1 WSPDetected，检测到打滑	MP1/MP2 Bog2 WSPDetected，检测到打滑	M1/M2 Bog1 WSPDetected，检测到打滑	M1/M2 Bog2 WSPDetected，检测到打滑
            BR1CT_EBActiTc12Bog1_B1,BR1CT_EBActiTc12Bog2_B1,BR1CT_EBActiMp12Bog1_B1,BR1CT_EBActiMp12Bog2_B1;//EmergencybrakeActiveTc1/Tc2Bogie1，Tc1/Tc2车转向架1紧急制动激活	EmergencybrakeActiveTc1/Tc2Bogie2，Tc1/Tc2车转向架2紧急制动激活	EmergencybrakeActiveMp1/Mp2Bogie1，Mp1/Mp2车转向架1紧急制动激活	EmergencybrakeActiveMp1/Mp2Bogie2，Mp1/Mp2车转向架2紧急制动激活

    bool BR1CT_EBActiM12Bog1_B1,BR1CT_EBActiM12Bog2_B1,BR1CT_EBAvailTc12Bog1_B1,BR1CT_EBAvailTc12Bog2_B1,//EmergencybrakeActiveM1/M2Bogie1，M1/M2车转向架1紧急制动激活	EmergencybrakeActiveM1/M2Bogie2，M1/M2车转向架2紧急制动激活	EmergencybrakeAvailableTc1/Tc2Bogie1，Tc1/Tc2车转向1架紧急制动可用	EmergencybrakeAvailableTc1/Tc2Bogie2，Tc1/Tc2车转向2架紧急制动可用
            BR1CT_EBAvailMp12Bog1_B1,BR1CT_EBAvailMp12Bog2_B1,BR1CT_EBAvailM12Bog1_B1,BR1CT_EBAvailM12Bog2_B1;//EmergencybrakeAvailableMp1/Mp2Bogie1，Mp1/Mp2车转向1架紧急制动可用	EmergencybrakeAvailableMp1/Mp2Bogie2，Mp1/Mp2车转向2架紧急制动可用	EmergencybrakeAvailableM1/M2Bogie1，M1/M2车转向1架紧急制动可用	EmergencybrakeAvailableM1/M2Bogie2，M1/M2车转向2架紧急制动可用

    bool BR1CT_PBReleasedTc12_B1, BR1CT_PBReleasedMp12_B1,BR1CT_PBReleasedM12_B1,BR1CT_MGW_B1,//ParkingbrakeReleasedInTc1/Tc2，Tc1/Tc2车停放制动缓解	ParkingbrakeReleasedInMp1/Mp2，Mp1/Mp2车停放制动缓解	ParkingbrakeReleasedInM1/M2，M1/M2车停放制动缓解	Gatewayismaster，主网关阀
            BR1CT_DISEBMp12_B1,BR1CT_DISEBM12_B1,BR1CT_CAN1_B1,BR1CT_AllASPReady_B1;//Mp1/Mp2EdBrakeCutOff，制动系统要求牵引系统电制动切除	M1/M2EdBrakeCutOff，制动系统要求牵引系统电制动切除	cansegment1，can1网络	AllAspReady，所有空气悬挂系统压力达到正常值

    bool BR1CT_SelfTestConT_B1,BR1CT_RuningSelfTest_B1,BR1CT_SelfTestOK_B1,BR1CT_SelfTestFailed_B1,//SelftestConditionsTrue，自检测条件满足	SelftestRunning，自检测进行中	SelftestOk，自检ok	SelftestFailed自检失败
            BR1CT_LastSelfTestAborted_B1,BR1CT_DiameterInput_ready_B1, BR1CT_DiameterInput_status_B1,BR1CT_EBActiInCAN_B1;//SelftestAbort自检退出	轮径输入准备好	轮径输入成功	EmergencybrakeActive in CAN segment，紧急制动在CAN网中激活

    bool BR1CT_BrakeActInCAN_B1,BR1CT_DriveActInCAN_B1, BR1CT_FastBrakeActInCAN_B1,BR1CT_EDM_B1,//Hardwired brake is active in CAN segment， CAN单元中硬线制动激活	Hardwired drive is set in CAN segment，CAN单元中硬线牵引置位	Hardwired fastbrake is active in CAN segment，CAN单元中快速制动激活	Hardwired EDM is set in CAN segment, CAN单元中硬线紧急牵引指令置位
            BR1CT_ZeroSpeed_B1,BR1CT_HBBrakeApply_B1,BR1CT_30kphExceed_B1,BR1CT_80kphExceed_B1;//零速信号（<0.5kph）	Holding brake applied in CAN segment，保持制动已经施加	30km/h超速（硬线反馈）	88km/h超速（硬线反馈）

    bool BR1CT_MVBOK_B1;//MVB网络通讯正常


    //0x613
    short BR1CT_BSRTc12Bog1_I16,BR1CT_BSRTc12Bog2_I16,BR1CT_BSRMp12Bog1_I16,BR1CT_BSRMp12Bog2_I16,//BrakecySupplyReservoirPressBogie1Tc1/Tc2，Tc1/Tc2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2Tc1/Tc2，Tc1/Tc2转向架2制动风缸压力	BrakecySupplyReservoirPressBogie1Mp1/Mp2，Mp1/Mp2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2Mp1/Mp2，Mp1/Mp2转向架2制动风缸压力
            BR1CT_BSRM12Bog1_I16, BR1CT_BSRM12Bog2_I16,BR1CT_BCPTc12Bog1_I16,BR1CT_BCPTc12Bog2_I16;//BrakecySupplyReservoirPressBogie1M1/M2，M1/M2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2M1/M2，M1/M2转向架2制动风缸压力	BrakecyCylinderPressBogie1Tc1/Tc2，Tc1/Tc2转向架1制动缸压力	BrakecyCylinderPressBogie2Tc1/Tc2，Tc1/Tc2转向架2制动缸压力

    short BR1CT_BCPMp12Bog1_I16,BR1CT_BCPMp12Bog2_I16,BR1CT_BCPM12Bog1_I16,BR1CT_BCPM12Bog2_I16,//BrakecyCylinderPressBogie1Mp1/Mp2，Mp1/Mp2转向架1制动缸压力	BrakecyCylinderPressBogie2Mp1/Mp2，Mp1/Mp2转向架2制动缸压力	BrakecyCylinderPressBogie1M1/M2，M1/M2转向架1制动缸压力	BrakecyCylinderPressBogie2M1/M2，M1/M2转向架2制动缸压力
            BR1CT_PBPressureTc_I16,BR1CT_PBPressureMP_I16,BR1CT_PBPressureM_I16;//ParkingbrakePressureInTC, Tc车停放制动缸压力	ParkingbrakePressureInMP, MP车停放制动缸压力	ParkingbrakePressureInM, M车停放制动缸压力

    bool BR1CT_BSRBog1Valid_Tc12_B1,BR1CT_BSRBog2Valid_Tc12_B1,BR1CT_BSRBog1Valid_Mp12_B1,BR1CT_BSRBog2Valid_Mp12_B1,//BSR_PressBogie1Valid_Tc1/Tc2，Tc1/Tc2转向架1制动风缸压力有效	BSR_PressBogie2Valid_Tc1/Tc2，Tc1/Tc2转向架2制动风缸压力有效	BSR_PressBogie1Valid_Mp1/Mp2，Mp1/Mp2转向架1制动风缸压力有效	BSR_PressBogie2Valid_Mp1/Mp2，Mp1/Mp2转向架2制动风缸压力有效
            BR1CT_BSRBog1Valid_M12_B1,BR1CT_BSRBog2Valid_M12_B1,BR1CT_BCPBog1Valid_Tc12_B1,BR1CT_BCPBog2Valid_Tc12_B1;//BSR_PressBogie1Valid_M1/M2，M1/M2转向架1制动风缸压力有效	BSR_PressBogie2Valid_M1/M2，M1/M2转向架2制动风缸压力有效	BCP_PressBogie1Valid_Tc1/Tc2，Tc1/Tc2转向架1制动缸压力有效	BCP_PressBogie2Valid_Tc1/Tc2，Tc1/Tc2转向架2制动缸压力有效

    bool BR1CT_BCPBog1Valid_Mp12_B1,BR1CT_BCPBog2Valid_Mp12_B1,BR1CT_BCPBog1Valid_M12_B1,BR1CT_BCPBog2Valid_M12_B1,//BCP_PressBogie1Valid_Mp1/Mp2，Mp1/Mp2转向架1制动缸压力有效	BCP_PressBogie2Valid_Mp1/Mp2，Mp1/Mp2转向架2制动缸压力有效	BCP_PressBogie1Valid_M1/M2，M1/M2转向架1制动缸压力有效	BCP_PressBogie2Valid_M1/M2，M1/M2转向架2制动缸压力有效
            BR1CT_PBPressValid_Tc12_B1,BR1CT_PBPressValid_Mp12_B1,BR1CT_PBPressValid_M12_B1;//ParkingbrakePressureValid_Tc1/Tc2，Tc1/Tc2车停放制动缸压力有效	ParkingbrakePressureValid_Mp1/Mp2，Mp1/Mp2车停放制动缸压力有效	ParkingbrakePressureValid_M1/M2，M1/M2车停放制动缸压力有效



    //BCU2-CCU
    //0x620
    short BR2CT_MassTc12Bog1_I16,BR2CT_MassTc12Bog2_I16,BR2CT_MassMp12Bog1_I16,BR2CT_MassMp12Bog2_I16,//MassTc1/Tc2Bogie1，Tc1/Tc2转向架1载荷 MassTc1/Tc2Bogie2，Tc1/Tc2转向架2载荷 MassMp1/Mp2Bogie1，Mp1/Mp2转向架1载荷 MassMp1/Mp2Bogie1，Mp1/Mp2转向架2载荷
            BR2CT_MassM12Bog1_I16, BR2CT_MassM12Bog2_I16;//MassM1/M2Bogie1，M1/M2转向架1载荷 MassM1/M2Bogie2，M1/M2转向架2载荷

    short BR2CT_ASPTc12Bog1_I16,BR2CT_ASPTc12Bog2_I16,BR2CT_ASPMp12Bog1_I16,BR2CT_ASPMp12Bog2_I16,//ASPTc1/Tc2Bogie1，Tc1/Tc2转向架1ASP压力值 ASPTc1/Tc2Bogie2，Tc1/Tc2转向架2ASP压力值 ASPMp1/Mp2Bogie1 , Mp1/Mp2转向架1ASP压力值 ASPMp1/Mp2Bogie2，Mp1/Mp2转向架2ASP压力值
            BR2CT_ASPM12Bog1_I16,BR2CT_ASPM12Bog2_I16;//ASPM1/M2Bogie1，M1/M2转向架1ASP压力值 ASPM1/M2Bogie2，M1/M2转向架2ASP压力值

    bool BR2CT_MassValidTc12Bog1_B1,BR2CT_MassValidTc12Bog2_B1,BR2CT_MassValidMp12Bog1_B1,BR2CT_MassValidMp12Bog2_B1,//MassTc1/Tc2Bogie1valid，Tc1/Tc2转向架1载荷值有效 MassTc1/Tc2Bogie2valid，Tc1/Tc2转向架2载荷值有效 MassMp1/Mp2Bogie1valid，Mp1/Mp2转向架1载荷值有效 MassMp1/Mp2Bogie2valid，Mp1/Mp2转向架2载荷值有效
            BR2CT_MassValidM12Bog1_B1,BR2CT_MassValidM12Bog2_B1;//MassM1/M2Bogie1valid，M1/M2转向架1载荷值有效 MassM1/M2Bogie2valid，M1/M2转向架2载荷值有效

    bool BR2CT_ASPValidTc12Bog1_B1,BR2CT_ASPValidTc12Bog2_B1,BR2CT_ASPValidMp12Bog1_B1,BR2CT_ASPValidMp12Bog2_B1,//ASPTc1/Tc2Bogie1valid，Tc1/Tc2转向架1空簧压力有效 ASPTc1/Tc2Bogie2valid，Tc1/Tc2转向架2空簧压力有效 ASPMp1/Mp2Bogie1valid，Mp1/Mp2向架1空簧压力有效 ASPMp1/Mp2Bogie2valid，Mp1/Mp2转向架2空簧压力有效
            BR2CT_ASPValidM12Bog1_B1,BR2CT_ASPValidM12Bog2_B1;//ASPM1/M2Bogie1valid，M1/M2转向架1空簧压力有效 ASPM1/M2Bogie2valid，M1/M2转向架2空簧压力有效

    //0x621
    short BR2CT_SpeedTc12Ax1_I16,BR2CT_SpeedTc12Ax2_I16,BR2CT_SpeedTc12Ax3_I16,BR2CT_SpeedTC12Ax4_I16,//Actualspeedofaxle1inCarTc1/Tc2，Tc1/Tc2车1轴线速度 Actualspeedofaxle2inCarTc1/Tc2，Tc1/Tc2车2轴线速度 Actualspeedofaxle3inCarTc1/Tc2，Tc1/Tc2车3轴线速度 Actualspeedofaxle4inCarTc1/Tc2，Tc1/Tc2车4轴线速度
            BR2CT_SpeedMp12Ax1_I16,BR2CT_SpeedMp12Ax2_I16,BR2CT_SpeedMp12Ax3_I16,BR2CT_SpeedMp12Ax4_I16,//Actualspeedofaxle1inCarMp1/Mp2，Mp1/Mp2车1轴线速度 Actualspeedofaxle2inCarMp1/Mp2，Mp1/Mp2车2轴线速度 Actualspeedofaxle3inCarMp1/Mp2，Mp1/Mp2车3轴线速度 Actualspeedofaxle4inCarMp1/Mp2，Mp1/Mp2车4轴线速度
            BR2CT_SpeedM12Ax1_I16,BR2CT_SpeedM12Ax2_I16,BR2CT_SpeedM12Ax3_I16,BR2CT_SpeedM12Ax4_I16,//Actualspeedofaxle1inCarM1/M2，M1/M2车1轴线速度 Actualspeedofaxle2inCarM1/M2，M1/M2车2轴线速度 Actualspeedofaxle3inCarM1/M2，M1/M2车3轴线速度 Actualspeedofaxle4inCarM1/M2，M1/M2车4轴线速度
            BR2CT_MRP_TC_I16,BR2CT_MRP_MP_I16,BR2CT_MRP_M_I16;//MRpressureInTCCar，TC车单元主风管压力 MRpressureInMPCar，MP车单元主风管压力 MRpressureInMCar，M车单元主风管压力

    bool BR2CT_SpeedValTc12Ax1_B1,BR2CT_SpeedValTc12Ax2_B1,BR2CT_SpeedValTc12Ax3_B1,BR2CT_SpeedValTc12Ax4_B1,//Actualspeedofaxle1validinCarTc1/Tc2，Tc1/Tc2车1轴线速度值有效 Actualspeedofaxle2validinCarTc1/Tc2，Tc1/Tc2车2轴线速度值有效 Actualspeedofaxle3validinCarTc1/Tc2，Tc1/Tc2车3轴线速度值有效 Actualspeedofaxle4validinCarTc1/Tc2，Tc1/Tc2车4轴线速度值有效
            BR2CT_SpeedValMp12Ax1_B1,BR2CT_SpeedValMp12Ax2_B1,BR2CT_SpeedValMp12Ax3_B1,BR2CT_SpeedValMp12Ax4_B1;//Actualspeedofaxle1validinCarMp1/Mp2，Mp1/Mp2车1轴线速度值有效  Actualspeedofaxle2validinCarMp1/Mp2，Mp1/Mp2车2轴线速度值有效 Actualspeedofaxle3validinCarMp1/Mp2，Mp1/Mp2车3轴线速度值有效  Actualspeedofaxle4validinCarMp1/Mp2，Mp1/Mp2车4轴线速度值有效

    bool BR2CT_SpeedValM12Ax1_B1,BR2CT_SpeedValM12Ax2_B1,BR2CT_SpeedValM12Ax3_B1,BR2CT_SpeedValM12Ax4_B1,//Actualspeedofaxle1validinCarM1/M2，M1/M2车1轴线速度值有效 Actualspeedofaxle2validinCarM1/M2，M1/M2车2轴线速度值有效 Actualspeedofaxle3validinCarM1/M2，M1/M2车3轴线速度值有效 Actualspeedofaxle4validinCarM1/M2，M1/M2车4轴线速度值有效
            BR2CT_MRPValTC_B1,BR2CT_MRPValMP_B1,BR2CT_MRPValM_B1;//MRpressureValidInTC，TC车主风管压力有效 MRpressureValidInMP，MP车主风管压力有效  MRpressureValidInM，M车主风管压力有效

    //0x622
    short BR2CT_LifeSgn_I16,BR2CT_EPForceTc12bog1_I16,BR2CT_EPForceTc12bog2_I16,BR2CT_EPForceMp12bog1_I16,//LifeSignal生命信号	TC1/TC2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,Tc1/Tc2转向架1可能施加的空气制动力	TC1/TC2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,Tc1/Tc2转向架2可能施加的空气制动力	MP1/MP2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,Mp1/Mp2转向架1可能施加的空气制动力
            BR2CT_EPForceMp12bog2_I16,BR2CT_EPForceM12bog1_I16,BR2CT_EPForceM12bog2_I16;//MP1/MP2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,Mp1/Mp2转向架2可能施加的空气制动力	M1/M2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,M1/M2转向架1可能施加的空气制动力	M1/M2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,M1/M2转向架2可能施加的空气制动力

    unsigned char BR2CT_GWSWVerBH_U8,BR2CT_GWSWVerBL_U8;//Gatewayvalveswversionbytehigh，网关阀软件版本byte高位   Gatewayvalveswversionbytelow，网关阀软件版本byte低位

    bool BR2CT_DiagOKTc12_Bogie1_B1,BR2CT_DiagOKTc12_Bogie2_B1,BR2CT_DiagOKMp12_Bogie1_B1, BR2CT_DiagOKMp12_Bogie2_B1,//Tc1/Tc2Bogie1BCUDiagOK，Tc1/Tc2转向架1状态及诊断数据有效	Tc1/Tc2Bogie2BCUDiagOK，Tc1/Tc2转向架2状态及诊断数据有效	Mp1/Mp2Bogie1BCUDiagOK，Mp1/Mp2转向架1状态及诊断数据有效	Mp1/Mp2Bogie2BCUDiagOK，Mp1/Mp2转向架2状态及诊断数据有效
            BR2CT_DiagOKM12_Bogie1_B1, BR2CT_DiagOKM12_Bogie2_B1,BR2CT_CanApplSBTc12Bog1_B1,BR2CT_CanApplSBTc12Bog2_B1;//M1/M2Bogie1BCUDiagOK，M1/M2转向架1状态及诊断数据有效	M1/M2Bogie2BCUDiagOK，M1/M2转向架2状态及诊断数据有效	Tc1/Tc2bogie1EP2002canapplyservicebrake，Tc1/Tc2车转向架1能施加常用制动	Tc1/Tc2bogie2EP2002canapplyservicebrake，Tc1/Tc2车转向架2能施加常用制动

    bool BR2CT_CanApplSBMp12Bog1_B1,BR2CT_CanApplSBMp12Bog2_B1,BR2CT_CanApplSBM12Bog1_B1,BR2CT_CanApplSBM12Bog2_B1,//Mp1/Mp2bogie1EP2002canapplyservicebrake，Mp1/Mp2车转向架1能施加常用制动	Mp1/Mp2bogie2EP2002canapplyservicebrake，Mp1/Mp2车转向架2能施加常用制动	M1/M2bogie1EP2002canapplyservicebrake，M1/M2车转向架1能施加常用制动	M1/M2bogie2EP2002canapplyservicebrake，M1/M2车转向架2能施加常用制动
            BR2CT_BrakeAppliedTC12Bog1_B1,BR2CT_BrakeAppliedTC12Bog2_B1,BR2CT_BrakeAppliedMp12Bog1_B1,BR2CT_BrakeAppliedMp12Bog2_B1;//Tc1/Tc2转向架1制动已经施加	Tc1/Tc2转向架2制动已经施加	Mp1/Mp2转向架1制动已经施加	Mp1/Mp2转向架2制动已经施加

    bool BR2CT_BrakeAppliedM12Bog1_B1,BR2CT_BrakeAppliedM12Bog2_B1,BR2CT_BrakeReleasedTC12Bog1_B1,BR2CT_BrakeReleasedTC12Bog2_B1,//M1/M2转向架1制动已经施加	M1/M2转向架2制动已经施加	Tc1/Tc2转向架1制动已经缓解	Tc1/Tc2转向架2制动已经缓解
            BR2CT_BrakeReleasedMp12Bog1_B1,BR2CT_BrakeReleasedMp12Bog2_B1,BR2CT_BrakeReleasedM12Bog1_B1, BR2CT_BrakeReleasedM12Bog2_B1;//Mp1/Mp2转向架1制动已经缓解	Mp1/Mp2转向架2制动已经缓解	M1/M2转向架1制动已经缓解	M1/M2转向架2制动已经缓解

    bool BR2CT_IsolTc12Bog1_B1,BR2CT_IsolTc12Bog2_B1, BR2CT_IsolMp12Bog1_B1,BR2CT_IsolMp12Bog2_B1,//isolatedTc1/Tc2Bogie1，Tc1/Tc2转向架1隔离	isolatedTc1/Tc2Bogie2，Tc1/Tc2转向架2隔离	isolatedMp1/Mp2Bogie1，Mp1/Mp2转向架1隔离	isolatedMp1/Mp2Bogie2，Mp1/Mp2转向架2隔离
            BR2CT_IsolM12Bog1_B1,BR2CT_IsolM12Bog2_B1, BR2CT_WSPTc12Bog1_B1,BR2CT_WSPTc12Bog2_B1;//isolatedM1/M2Bogie1，M1/M2转向架1隔离	isolatedM1/M2Bogie2，M1/M2转向架2隔离	Tc1/Tc2 Bog1 WSPDetected，检测到打滑	Tc1/Tc2 Bog2 WSPDetected，检测到打滑

    bool BR2CT_WSPMP12Bog1_B1,BR2CT_WSPMP12Bog2_B1,BR2CT_WSPM12Bog1_B1,BR2CT_WSPM12Bog2_B1,//MP1/MP2 Bog1 WSPDetected，检测到打滑	MP1/MP2 Bog2 WSPDetected，检测到打滑	M1/M2 Bog1 WSPDetected，检测到打滑	M1/M2 Bog2 WSPDetected，检测到打滑
            BR2CT_EBActiTc12Bog1_B1,BR2CT_EBActiTc12Bog2_B1,BR2CT_EBActiMp12Bog1_B1,BR2CT_EBActiMp12Bog2_B1;//EmergencybrakeActiveTc1/Tc2Bogie1，Tc1/Tc2车转向架1紧急制动激活	EmergencybrakeActiveTc1/Tc2Bogie2，Tc1/Tc2车转向架2紧急制动激活	EmergencybrakeActiveMp1/Mp2Bogie1，Mp1/Mp2车转向架1紧急制动激活	EmergencybrakeActiveMp1/Mp2Bogie2，Mp1/Mp2车转向架2紧急制动激活

    bool BR2CT_EBActiM12Bog1_B1,BR2CT_EBActiM12Bog2_B1,BR2CT_EBAvailTc12Bog1_B1,BR2CT_EBAvailTc12Bog2_B1,//EmergencybrakeActiveM1/M2Bogie1，M1/M2车转向架1紧急制动激活	EmergencybrakeActiveM1/M2Bogie2，M1/M2车转向架2紧急制动激活	EmergencybrakeAvailableTc1/Tc2Bogie1，Tc1/Tc2车转向1架紧急制动可用	EmergencybrakeAvailableTc1/Tc2Bogie2，Tc1/Tc2车转向2架紧急制动可用
            BR2CT_EBAvailMp12Bog1_B1,BR2CT_EBAvailMp12Bog2_B1,BR2CT_EBAvailM12Bog1_B1,BR2CT_EBAvailM12Bog2_B1;//EmergencybrakeAvailableMp1/Mp2Bogie1，Mp1/Mp2车转向1架紧急制动可用	EmergencybrakeAvailableMp1/Mp2Bogie2，Mp1/Mp2车转向2架紧急制动可用	EmergencybrakeAvailableM1/M2Bogie1，M1/M2车转向1架紧急制动可用	EmergencybrakeAvailableM1/M2Bogie2，M1/M2车转向2架紧急制动可用

    bool BR2CT_PBReleasedTc12_B1, BR2CT_PBReleasedMp12_B1,BR2CT_PBReleasedM12_B1,BR2CT_MGW_B1,//ParkingbrakeReleasedInTc1/Tc2，Tc1/Tc2车停放制动缓解	ParkingbrakeReleasedInMp1/Mp2，Mp1/Mp2车停放制动缓解	ParkingbrakeReleasedInM1/M2，M1/M2车停放制动缓解	Gatewayismaster，主网关阀
            BR2CT_DISEBMp12_B1,BR2CT_DISEBM12_B1,BR2CT_CAN1_B1,BR2CT_AllASPReady_B1;//Mp1/Mp2EdBrakeCutOff，制动系统要求牵引系统电制动切除	M1/M2EdBrakeCutOff，制动系统要求牵引系统电制动切除	cansegment1，can1网络	AllAspReady，所有空气悬挂系统压力达到正常值

    bool BR2CT_SelfTestConT_B1,BR2CT_RuningSelfTest_B1,BR2CT_SelfTestOK_B1,BR2CT_SelfTestFailed_B1,//SelftestConditionsTrue，自检测条件满足	SelftestRunning，自检测进行中	SelftestOk，自检ok	SelftestFailed自检失败
            BR2CT_LastSelfTestAborted_B1,BR2CT_DiameterInput_ready_B1, BR2CT_DiameterInput_status_B1,BR2CT_EBActiInCAN_B1;//SelftestAbort自检退出	轮径输入准备好	轮径输入成功	EmergencybrakeActive in CAN segment，紧急制动在CAN网中激活

    bool BR2CT_BrakeActInCAN_B1,BR2CT_DriveActInCAN_B1, BR2CT_FastBrakeActInCAN_B1,BR2CT_EDM_B1,//Hardwired brake is active in CAN segment， CAN单元中硬线制动激活	Hardwired drive is set in CAN segment，CAN单元中硬线牵引置位	Hardwired fastbrake is active in CAN segment，CAN单元中快速制动激活	Hardwired EDM is set in CAN segment, CAN单元中硬线紧急牵引指令置位
            BR2CT_ZeroSpeed_B1,BR2CT_HBBrakeApply_B1,BR2CT_30kphExceed_B1,BR2CT_80kphExceed_B1;//零速信号（<0.5kph）	Holding brake applied in CAN segment，保持制动已经施加	30km/h超速（硬线反馈）	88km/h超速（硬线反馈）

    bool BR2CT_MVBOK_B1;//MVB网络通讯正常


    //0x623
    short BR2CT_BSRTc12Bog1_I16,BR2CT_BSRTc12Bog2_I16,BR2CT_BSRMp12Bog1_I16,BR2CT_BSRMp12Bog2_I16,//BrakecySupplyReservoirPressBogie1Tc1/Tc2，Tc1/Tc2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2Tc1/Tc2，Tc1/Tc2转向架2制动风缸压力	BrakecySupplyReservoirPressBogie1Mp1/Mp2，Mp1/Mp2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2Mp1/Mp2，Mp1/Mp2转向架2制动风缸压力
            BR2CT_BSRM12Bog1_I16, BR2CT_BSRM12Bog2_I16,BR2CT_BCPTc12Bog1_I16,BR2CT_BCPTc12Bog2_I16;//BrakecySupplyReservoirPressBogie1M1/M2，M1/M2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2M1/M2，M1/M2转向架2制动风缸压力	BrakecyCylinderPressBogie1Tc1/Tc2，Tc1/Tc2转向架1制动缸压力	BrakecyCylinderPressBogie2Tc1/Tc2，Tc1/Tc2转向架2制动缸压力

    short BR2CT_BCPMp12Bog1_I16,BR2CT_BCPMp12Bog2_I16,BR2CT_BCPM12Bog1_I16,BR2CT_BCPM12Bog2_I16,//BrakecyCylinderPressBogie1Mp1/Mp2，Mp1/Mp2转向架1制动缸压力	BrakecyCylinderPressBogie2Mp1/Mp2，Mp1/Mp2转向架2制动缸压力	BrakecyCylinderPressBogie1M1/M2，M1/M2转向架1制动缸压力	BrakecyCylinderPressBogie2M1/M2，M1/M2转向架2制动缸压力
            BR2CT_PBPressureTc_I16,BR2CT_PBPressureMP_I16,BR2CT_PBPressureM_I16;//ParkingbrakePressureInTC, Tc车停放制动缸压力	ParkingbrakePressureInMP, MP车停放制动缸压力	ParkingbrakePressureInM, M车停放制动缸压力

    bool BR2CT_BSRBog1Valid_Tc12_B1,BR2CT_BSRBog2Valid_Tc12_B1,BR2CT_BSRBog1Valid_Mp12_B1,BR2CT_BSRBog2Valid_Mp12_B1,//BSR_PressBogie1Valid_Tc1/Tc2，Tc1/Tc2转向架1制动风缸压力有效	BSR_PressBogie2Valid_Tc1/Tc2，Tc1/Tc2转向架2制动风缸压力有效	BSR_PressBogie1Valid_Mp1/Mp2，Mp1/Mp2转向架1制动风缸压力有效	BSR_PressBogie2Valid_Mp1/Mp2，Mp1/Mp2转向架2制动风缸压力有效
            BR2CT_BSRBog1Valid_M12_B1,BR2CT_BSRBog2Valid_M12_B1,BR2CT_BCPBog1Valid_Tc12_B1,BR2CT_BCPBog2Valid_Tc12_B1;//BSR_PressBogie1Valid_M1/M2，M1/M2转向架1制动风缸压力有效	BSR_PressBogie2Valid_M1/M2，M1/M2转向架2制动风缸压力有效	BCP_PressBogie1Valid_Tc1/Tc2，Tc1/Tc2转向架1制动缸压力有效	BCP_PressBogie2Valid_Tc1/Tc2，Tc1/Tc2转向架2制动缸压力有效

    bool BR2CT_BCPBog1Valid_Mp12_B1,BR2CT_BCPBog2Valid_Mp12_B1,BR2CT_BCPBog1Valid_M12_B1,BR2CT_BCPBog2Valid_M12_B1,//BCP_PressBogie1Valid_Mp1/Mp2，Mp1/Mp2转向架1制动缸压力有效	BCP_PressBogie2Valid_Mp1/Mp2，Mp1/Mp2转向架2制动缸压力有效	BCP_PressBogie1Valid_M1/M2，M1/M2转向架1制动缸压力有效	BCP_PressBogie2Valid_M1/M2，M1/M2转向架2制动缸压力有效
            BR2CT_PBPressValid_Tc12_B1,BR2CT_PBPressValid_Mp12_B1,BR2CT_PBPressValid_M12_B1;//ParkingbrakePressureValid_Tc1/Tc2，Tc1/Tc2车停放制动缸压力有效	ParkingbrakePressureValid_Mp1/Mp2，Mp1/Mp2车停放制动缸压力有效	ParkingbrakePressureValid_M1/M2，M1/M2车停放制动缸压力有效


    //BCU3-CCU
    //0x630
    short BR3CT_MassTc12Bog1_I16,BR3CT_MassTc12Bog2_I16,BR3CT_MassMp12Bog1_I16,BR3CT_MassMp12Bog2_I16,//MassTc1/Tc2Bogie1，Tc1/Tc2转向架1载荷 MassTc1/Tc2Bogie2，Tc1/Tc2转向架2载荷 MassMp1/Mp2Bogie1，Mp1/Mp2转向架1载荷 MassMp1/Mp2Bogie1，Mp1/Mp2转向架2载荷
            BR3CT_MassM12Bog1_I16, BR3CT_MassM12Bog2_I16;//MassM1/M2Bogie1，M1/M2转向架1载荷 MassM1/M2Bogie2，M1/M2转向架2载荷

    short BR3CT_ASPTc12Bog1_I16,BR3CT_ASPTc12Bog2_I16,BR3CT_ASPMp12Bog1_I16,BR3CT_ASPMp12Bog2_I16,//ASPTc1/Tc2Bogie1，Tc1/Tc2转向架1ASP压力值 ASPTc1/Tc2Bogie2，Tc1/Tc2转向架2ASP压力值 ASPMp1/Mp2Bogie1 , Mp1/Mp2转向架1ASP压力值 ASPMp1/Mp2Bogie2，Mp1/Mp2转向架2ASP压力值
            BR3CT_ASPM12Bog1_I16,BR3CT_ASPM12Bog2_I16;//ASPM1/M2Bogie1，M1/M2转向架1ASP压力值 ASPM1/M2Bogie2，M1/M2转向架2ASP压力值

    bool BR3CT_MassValidTc12Bog1_B1,BR3CT_MassValidTc12Bog2_B1,BR3CT_MassValidMp12Bog1_B1,BR3CT_MassValidMp12Bog2_B1,//MassTc1/Tc2Bogie1valid，Tc1/Tc2转向架1载荷值有效 MassTc1/Tc2Bogie2valid，Tc1/Tc2转向架2载荷值有效 MassMp1/Mp2Bogie1valid，Mp1/Mp2转向架1载荷值有效 MassMp1/Mp2Bogie2valid，Mp1/Mp2转向架2载荷值有效
            BR3CT_MassValidM12Bog1_B1,BR3CT_MassValidM12Bog2_B1;//MassM1/M2Bogie1valid，M1/M2转向架1载荷值有效 MassM1/M2Bogie2valid，M1/M2转向架2载荷值有效

    bool BR3CT_ASPValidTc12Bog1_B1,BR3CT_ASPValidTc12Bog2_B1,BR3CT_ASPValidMp12Bog1_B1,BR3CT_ASPValidMp12Bog2_B1,//ASPTc1/Tc2Bogie1valid，Tc1/Tc2转向架1空簧压力有效 ASPTc1/Tc2Bogie2valid，Tc1/Tc2转向架2空簧压力有效 ASPMp1/Mp2Bogie1valid，Mp1/Mp2向架1空簧压力有效 ASPMp1/Mp2Bogie2valid，Mp1/Mp2转向架2空簧压力有效
            BR3CT_ASPValidM12Bog1_B1,BR3CT_ASPValidM12Bog2_B1;//ASPM1/M2Bogie1valid，M1/M2转向架1空簧压力有效 ASPM1/M2Bogie2valid，M1/M2转向架2空簧压力有效

    //0x631
    short BR3CT_SpeedTc12Ax1_I16,BR3CT_SpeedTc12Ax2_I16,BR3CT_SpeedTc12Ax3_I16,BR3CT_SpeedTC12Ax4_I16,//Actualspeedofaxle1inCarTc1/Tc2，Tc1/Tc2车1轴线速度 Actualspeedofaxle2inCarTc1/Tc2，Tc1/Tc2车2轴线速度 Actualspeedofaxle3inCarTc1/Tc2，Tc1/Tc2车3轴线速度 Actualspeedofaxle4inCarTc1/Tc2，Tc1/Tc2车4轴线速度
            BR3CT_SpeedMp12Ax1_I16,BR3CT_SpeedMp12Ax2_I16,BR3CT_SpeedMp12Ax3_I16,BR3CT_SpeedMp12Ax4_I16,//Actualspeedofaxle1inCarMp1/Mp2，Mp1/Mp2车1轴线速度 Actualspeedofaxle2inCarMp1/Mp2，Mp1/Mp2车2轴线速度 Actualspeedofaxle3inCarMp1/Mp2，Mp1/Mp2车3轴线速度 Actualspeedofaxle4inCarMp1/Mp2，Mp1/Mp2车4轴线速度
            BR3CT_SpeedM12Ax1_I16,BR3CT_SpeedM12Ax2_I16,BR3CT_SpeedM12Ax3_I16,BR3CT_SpeedM12Ax4_I16,//Actualspeedofaxle1inCarM1/M2，M1/M2车1轴线速度 Actualspeedofaxle2inCarM1/M2，M1/M2车2轴线速度 Actualspeedofaxle3inCarM1/M2，M1/M2车3轴线速度 Actualspeedofaxle4inCarM1/M2，M1/M2车4轴线速度
            BR3CT_MRP_TC_I16,BR3CT_MRP_MP_I16,BR3CT_MRP_M_I16;//MRpressureInTCCar，TC车单元主风管压力 MRpressureInMPCar，MP车单元主风管压力 MRpressureInMCar，M车单元主风管压力

    bool BR3CT_SpeedValTc12Ax1_B1,BR3CT_SpeedValTc12Ax2_B1,BR3CT_SpeedValTc12Ax3_B1,BR3CT_SpeedValTc12Ax4_B1,//Actualspeedofaxle1validinCarTc1/Tc2，Tc1/Tc2车1轴线速度值有效 Actualspeedofaxle2validinCarTc1/Tc2，Tc1/Tc2车2轴线速度值有效 Actualspeedofaxle3validinCarTc1/Tc2，Tc1/Tc2车3轴线速度值有效 Actualspeedofaxle4validinCarTc1/Tc2，Tc1/Tc2车4轴线速度值有效
            BR3CT_SpeedValMp12Ax1_B1,BR3CT_SpeedValMp12Ax2_B1,BR3CT_SpeedValMp12Ax3_B1,BR3CT_SpeedValMp12Ax4_B1;//Actualspeedofaxle1validinCarMp1/Mp2，Mp1/Mp2车1轴线速度值有效  Actualspeedofaxle2validinCarMp1/Mp2，Mp1/Mp2车2轴线速度值有效 Actualspeedofaxle3validinCarMp1/Mp2，Mp1/Mp2车3轴线速度值有效  Actualspeedofaxle4validinCarMp1/Mp2，Mp1/Mp2车4轴线速度值有效

    bool BR3CT_SpeedValM12Ax1_B1,BR3CT_SpeedValM12Ax2_B1,BR3CT_SpeedValM12Ax3_B1,BR3CT_SpeedValM12Ax4_B1,//Actualspeedofaxle1validinCarM1/M2，M1/M2车1轴线速度值有效 Actualspeedofaxle2validinCarM1/M2，M1/M2车2轴线速度值有效 Actualspeedofaxle3validinCarM1/M2，M1/M2车3轴线速度值有效 Actualspeedofaxle4validinCarM1/M2，M1/M2车4轴线速度值有效
            BR3CT_MRPValTC_B1,BR3CT_MRPValMP_B1,BR3CT_MRPValM_B1;//MRpressureValidInTC，TC车主风管压力有效 MRpressureValidInMP，MP车主风管压力有效  MRpressureValidInM，M车主风管压力有效

    //0x632
    short BR3CT_LifeSgn_I16,BR3CT_EPForceTc12bog1_I16,BR3CT_EPForceTc12bog2_I16,BR3CT_EPForceMp12bog1_I16,//LifeSignal生命信号	TC1/TC2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,Tc1/Tc2转向架1可能施加的空气制动力	TC1/TC2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,Tc1/Tc2转向架2可能施加的空气制动力	MP1/MP2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,Mp1/Mp2转向架1可能施加的空气制动力
            BR3CT_EPForceMp12bog2_I16,BR3CT_EPForceM12bog1_I16,BR3CT_EPForceM12bog2_I16;//MP1/MP2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,Mp1/Mp2转向架2可能施加的空气制动力	M1/M2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,M1/M2转向架1可能施加的空气制动力	M1/M2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,M1/M2转向架2可能施加的空气制动力

    unsigned char BR3CT_GWSWVerBH_U8,BR3CT_GWSWVerBL_U8;//Gatewayvalveswversionbytehigh，网关阀软件版本byte高位   Gatewayvalveswversionbytelow，网关阀软件版本byte低位

    bool BR3CT_DiagOKTc12_Bogie1_B1,BR3CT_DiagOKTc12_Bogie2_B1,BR3CT_DiagOKMp12_Bogie1_B1, BR3CT_DiagOKMp12_Bogie2_B1,//Tc1/Tc2Bogie1BCUDiagOK，Tc1/Tc2转向架1状态及诊断数据有效	Tc1/Tc2Bogie2BCUDiagOK，Tc1/Tc2转向架2状态及诊断数据有效	Mp1/Mp2Bogie1BCUDiagOK，Mp1/Mp2转向架1状态及诊断数据有效	Mp1/Mp2Bogie2BCUDiagOK，Mp1/Mp2转向架2状态及诊断数据有效
            BR3CT_DiagOKM12_Bogie1_B1, BR3CT_DiagOKM12_Bogie2_B1,BR3CT_CanApplSBTc12Bog1_B1,BR3CT_CanApplSBTc12Bog2_B1;//M1/M2Bogie1BCUDiagOK，M1/M2转向架1状态及诊断数据有效	M1/M2Bogie2BCUDiagOK，M1/M2转向架2状态及诊断数据有效	Tc1/Tc2bogie1EP2002canapplyservicebrake，Tc1/Tc2车转向架1能施加常用制动	Tc1/Tc2bogie2EP2002canapplyservicebrake，Tc1/Tc2车转向架2能施加常用制动

    bool BR3CT_CanApplSBMp12Bog1_B1,BR3CT_CanApplSBMp12Bog2_B1,BR3CT_CanApplSBM12Bog1_B1,BR3CT_CanApplSBM12Bog2_B1,//Mp1/Mp2bogie1EP2002canapplyservicebrake，Mp1/Mp2车转向架1能施加常用制动	Mp1/Mp2bogie2EP2002canapplyservicebrake，Mp1/Mp2车转向架2能施加常用制动	M1/M2bogie1EP2002canapplyservicebrake，M1/M2车转向架1能施加常用制动	M1/M2bogie2EP2002canapplyservicebrake，M1/M2车转向架2能施加常用制动
            BR3CT_BrakeAppliedTC12Bog1_B1,BR3CT_BrakeAppliedTC12Bog2_B1,BR3CT_BrakeAppliedMp12Bog1_B1,BR3CT_BrakeAppliedMp12Bog2_B1;//Tc1/Tc2转向架1制动已经施加	Tc1/Tc2转向架2制动已经施加	Mp1/Mp2转向架1制动已经施加	Mp1/Mp2转向架2制动已经施加

    bool BR3CT_BrakeAppliedM12Bog1_B1,BR3CT_BrakeAppliedM12Bog2_B1,BR3CT_BrakeReleasedTC12Bog1_B1,BR3CT_BrakeReleasedTC12Bog2_B1,//M1/M2转向架1制动已经施加	M1/M2转向架2制动已经施加	Tc1/Tc2转向架1制动已经缓解	Tc1/Tc2转向架2制动已经缓解
            BR3CT_BrakeReleasedMp12Bog1_B1,BR3CT_BrakeReleasedMp12Bog2_B1,BR3CT_BrakeReleasedM12Bog1_B1, BR3CT_BrakeReleasedM12Bog2_B1;//Mp1/Mp2转向架1制动已经缓解	Mp1/Mp2转向架2制动已经缓解	M1/M2转向架1制动已经缓解	M1/M2转向架2制动已经缓解

    bool BR3CT_IsolTc12Bog1_B1,BR3CT_IsolTc12Bog2_B1, BR3CT_IsolMp12Bog1_B1,BR3CT_IsolMp12Bog2_B1,//isolatedTc1/Tc2Bogie1，Tc1/Tc2转向架1隔离	isolatedTc1/Tc2Bogie2，Tc1/Tc2转向架2隔离	isolatedMp1/Mp2Bogie1，Mp1/Mp2转向架1隔离	isolatedMp1/Mp2Bogie2，Mp1/Mp2转向架2隔离
            BR3CT_IsolM12Bog1_B1,BR3CT_IsolM12Bog2_B1, BR3CT_WSPTc12Bog1_B1,BR3CT_WSPTc12Bog2_B1;//isolatedM1/M2Bogie1，M1/M2转向架1隔离	isolatedM1/M2Bogie2，M1/M2转向架2隔离	Tc1/Tc2 Bog1 WSPDetected，检测到打滑	Tc1/Tc2 Bog2 WSPDetected，检测到打滑

    bool BR3CT_WSPMP12Bog1_B1,BR3CT_WSPMP12Bog2_B1,BR3CT_WSPM12Bog1_B1,BR3CT_WSPM12Bog2_B1,//MP1/MP2 Bog1 WSPDetected，检测到打滑	MP1/MP2 Bog2 WSPDetected，检测到打滑	M1/M2 Bog1 WSPDetected，检测到打滑	M1/M2 Bog2 WSPDetected，检测到打滑
            BR3CT_EBActiTc12Bog1_B1,BR3CT_EBActiTc12Bog2_B1,BR3CT_EBActiMp12Bog1_B1,BR3CT_EBActiMp12Bog2_B1;//EmergencybrakeActiveTc1/Tc2Bogie1，Tc1/Tc2车转向架1紧急制动激活	EmergencybrakeActiveTc1/Tc2Bogie2，Tc1/Tc2车转向架2紧急制动激活	EmergencybrakeActiveMp1/Mp2Bogie1，Mp1/Mp2车转向架1紧急制动激活	EmergencybrakeActiveMp1/Mp2Bogie2，Mp1/Mp2车转向架2紧急制动激活

    bool BR3CT_EBActiM12Bog1_B1,BR3CT_EBActiM12Bog2_B1,BR3CT_EBAvailTc12Bog1_B1,BR3CT_EBAvailTc12Bog2_B1,//EmergencybrakeActiveM1/M2Bogie1，M1/M2车转向架1紧急制动激活	EmergencybrakeActiveM1/M2Bogie2，M1/M2车转向架2紧急制动激活	EmergencybrakeAvailableTc1/Tc2Bogie1，Tc1/Tc2车转向1架紧急制动可用	EmergencybrakeAvailableTc1/Tc2Bogie2，Tc1/Tc2车转向2架紧急制动可用
            BR3CT_EBAvailMp12Bog1_B1,BR3CT_EBAvailMp12Bog2_B1,BR3CT_EBAvailM12Bog1_B1,BR3CT_EBAvailM12Bog2_B1;//EmergencybrakeAvailableMp1/Mp2Bogie1，Mp1/Mp2车转向1架紧急制动可用	EmergencybrakeAvailableMp1/Mp2Bogie2，Mp1/Mp2车转向2架紧急制动可用	EmergencybrakeAvailableM1/M2Bogie1，M1/M2车转向1架紧急制动可用	EmergencybrakeAvailableM1/M2Bogie2，M1/M2车转向2架紧急制动可用

    bool BR3CT_PBReleasedTc12_B1, BR3CT_PBReleasedMp12_B1,BR3CT_PBReleasedM12_B1,BR3CT_MGW_B1,//ParkingbrakeReleasedInTc1/Tc2，Tc1/Tc2车停放制动缓解	ParkingbrakeReleasedInMp1/Mp2，Mp1/Mp2车停放制动缓解	ParkingbrakeReleasedInM1/M2，M1/M2车停放制动缓解	Gatewayismaster，主网关阀
            BR3CT_DISEBMp12_B1,BR3CT_DISEBM12_B1,BR3CT_CAN1_B1,BR3CT_AllASPReady_B1;//Mp1/Mp2EdBrakeCutOff，制动系统要求牵引系统电制动切除	M1/M2EdBrakeCutOff，制动系统要求牵引系统电制动切除	cansegment1，can1网络	AllAspReady，所有空气悬挂系统压力达到正常值

    bool BR3CT_SelfTestConT_B1,BR3CT_RuningSelfTest_B1,BR3CT_SelfTestOK_B1,BR3CT_SelfTestFailed_B1,//SelftestConditionsTrue，自检测条件满足	SelftestRunning，自检测进行中	SelftestOk，自检ok	SelftestFailed自检失败
            BR3CT_LastSelfTestAborted_B1,BR3CT_DiameterInput_ready_B1, BR3CT_DiameterInput_status_B1,BR3CT_EBActiInCAN_B1;//SelftestAbort自检退出	轮径输入准备好	轮径输入成功	EmergencybrakeActive in CAN segment，紧急制动在CAN网中激活

    bool BR3CT_BrakeActInCAN_B1,BR3CT_DriveActInCAN_B1, BR3CT_FastBrakeActInCAN_B1,BR3CT_EDM_B1,//Hardwired brake is active in CAN segment， CAN单元中硬线制动激活	Hardwired drive is set in CAN segment，CAN单元中硬线牵引置位	Hardwired fastbrake is active in CAN segment，CAN单元中快速制动激活	Hardwired EDM is set in CAN segment, CAN单元中硬线紧急牵引指令置位
            BR3CT_ZeroSpeed_B1,BR3CT_HBBrakeApply_B1,BR3CT_30kphExceed_B1,BR3CT_80kphExceed_B1;//零速信号（<0.5kph）	Holding brake applied in CAN segment，保持制动已经施加	30km/h超速（硬线反馈）	88km/h超速（硬线反馈）

    bool BR3CT_MVBOK_B1;//MVB网络通讯正常


    //0x633
    short BR3CT_BSRTc12Bog1_I16,BR3CT_BSRTc12Bog2_I16,BR3CT_BSRMp12Bog1_I16,BR3CT_BSRMp12Bog2_I16,//BrakecySupplyReservoirPressBogie1Tc1/Tc2，Tc1/Tc2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2Tc1/Tc2，Tc1/Tc2转向架2制动风缸压力	BrakecySupplyReservoirPressBogie1Mp1/Mp2，Mp1/Mp2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2Mp1/Mp2，Mp1/Mp2转向架2制动风缸压力
            BR3CT_BSRM12Bog1_I16, BR3CT_BSRM12Bog2_I16,BR3CT_BCPTc12Bog1_I16,BR3CT_BCPTc12Bog2_I16;//BrakecySupplyReservoirPressBogie1M1/M2，M1/M2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2M1/M2，M1/M2转向架2制动风缸压力	BrakecyCylinderPressBogie1Tc1/Tc2，Tc1/Tc2转向架1制动缸压力	BrakecyCylinderPressBogie2Tc1/Tc2，Tc1/Tc2转向架2制动缸压力

    short BR3CT_BCPMp12Bog1_I16,BR3CT_BCPMp12Bog2_I16,BR3CT_BCPM12Bog1_I16,BR3CT_BCPM12Bog2_I16,//BrakecyCylinderPressBogie1Mp1/Mp2，Mp1/Mp2转向架1制动缸压力	BrakecyCylinderPressBogie2Mp1/Mp2，Mp1/Mp2转向架2制动缸压力	BrakecyCylinderPressBogie1M1/M2，M1/M2转向架1制动缸压力	BrakecyCylinderPressBogie2M1/M2，M1/M2转向架2制动缸压力
            BR3CT_PBPressureTc_I16,BR3CT_PBPressureMP_I16,BR3CT_PBPressureM_I16;//ParkingbrakePressureInTC, Tc车停放制动缸压力	ParkingbrakePressureInMP, MP车停放制动缸压力	ParkingbrakePressureInM, M车停放制动缸压力

    bool BR3CT_BSRBog1Valid_Tc12_B1,BR3CT_BSRBog2Valid_Tc12_B1,BR3CT_BSRBog1Valid_Mp12_B1,BR3CT_BSRBog2Valid_Mp12_B1,//BSR_PressBogie1Valid_Tc1/Tc2，Tc1/Tc2转向架1制动风缸压力有效	BSR_PressBogie2Valid_Tc1/Tc2，Tc1/Tc2转向架2制动风缸压力有效	BSR_PressBogie1Valid_Mp1/Mp2，Mp1/Mp2转向架1制动风缸压力有效	BSR_PressBogie2Valid_Mp1/Mp2，Mp1/Mp2转向架2制动风缸压力有效
            BR3CT_BSRBog1Valid_M12_B1,BR3CT_BSRBog2Valid_M12_B1,BR3CT_BCPBog1Valid_Tc12_B1,BR3CT_BCPBog2Valid_Tc12_B1;//BSR_PressBogie1Valid_M1/M2，M1/M2转向架1制动风缸压力有效	BSR_PressBogie2Valid_M1/M2，M1/M2转向架2制动风缸压力有效	BCP_PressBogie1Valid_Tc1/Tc2，Tc1/Tc2转向架1制动缸压力有效	BCP_PressBogie2Valid_Tc1/Tc2，Tc1/Tc2转向架2制动缸压力有效

    bool BR3CT_BCPBog1Valid_Mp12_B1,BR3CT_BCPBog2Valid_Mp12_B1,BR3CT_BCPBog1Valid_M12_B1,BR3CT_BCPBog2Valid_M12_B1,//BCP_PressBogie1Valid_Mp1/Mp2，Mp1/Mp2转向架1制动缸压力有效	BCP_PressBogie2Valid_Mp1/Mp2，Mp1/Mp2转向架2制动缸压力有效	BCP_PressBogie1Valid_M1/M2，M1/M2转向架1制动缸压力有效	BCP_PressBogie2Valid_M1/M2，M1/M2转向架2制动缸压力有效
            BR3CT_PBPressValid_Tc12_B1,BR3CT_PBPressValid_Mp12_B1,BR3CT_PBPressValid_M12_B1;//ParkingbrakePressureValid_Tc1/Tc2，Tc1/Tc2车停放制动缸压力有效	ParkingbrakePressureValid_Mp1/Mp2，Mp1/Mp2车停放制动缸压力有效	ParkingbrakePressureValid_M1/M2，M1/M2车停放制动缸压力有效


    //BCU4-CCU
    //0x640
    short BR4CT_MassTc12Bog1_I16,BR4CT_MassTc12Bog2_I16,BR4CT_MassMp12Bog1_I16,BR4CT_MassMp12Bog2_I16,//MassTc1/Tc2Bogie1，Tc1/Tc2转向架1载荷 MassTc1/Tc2Bogie2，Tc1/Tc2转向架2载荷 MassMp1/Mp2Bogie1，Mp1/Mp2转向架1载荷 MassMp1/Mp2Bogie1，Mp1/Mp2转向架2载荷
            BR4CT_MassM12Bog1_I16, BR4CT_MassM12Bog2_I16;//MassM1/M2Bogie1，M1/M2转向架1载荷 MassM1/M2Bogie2，M1/M2转向架2载荷

    short BR4CT_ASPTc12Bog1_I16,BR4CT_ASPTc12Bog2_I16,BR4CT_ASPMp12Bog1_I16,BR4CT_ASPMp12Bog2_I16,//ASPTc1/Tc2Bogie1，Tc1/Tc2转向架1ASP压力值 ASPTc1/Tc2Bogie2，Tc1/Tc2转向架2ASP压力值 ASPMp1/Mp2Bogie1 , Mp1/Mp2转向架1ASP压力值 ASPMp1/Mp2Bogie2，Mp1/Mp2转向架2ASP压力值
            BR4CT_ASPM12Bog1_I16,BR4CT_ASPM12Bog2_I16;//ASPM1/M2Bogie1，M1/M2转向架1ASP压力值 ASPM1/M2Bogie2，M1/M2转向架2ASP压力值

    bool BR4CT_MassValidTc12Bog1_B1,BR4CT_MassValidTc12Bog2_B1,BR4CT_MassValidMp12Bog1_B1,BR4CT_MassValidMp12Bog2_B1,//MassTc1/Tc2Bogie1valid，Tc1/Tc2转向架1载荷值有效 MassTc1/Tc2Bogie2valid，Tc1/Tc2转向架2载荷值有效 MassMp1/Mp2Bogie1valid，Mp1/Mp2转向架1载荷值有效 MassMp1/Mp2Bogie2valid，Mp1/Mp2转向架2载荷值有效
            BR4CT_MassValidM12Bog1_B1,BR4CT_MassValidM12Bog2_B1;//MassM1/M2Bogie1valid，M1/M2转向架1载荷值有效 MassM1/M2Bogie2valid，M1/M2转向架2载荷值有效

    bool BR4CT_ASPValidTc12Bog1_B1,BR4CT_ASPValidTc12Bog2_B1,BR4CT_ASPValidMp12Bog1_B1,BR4CT_ASPValidMp12Bog2_B1,//ASPTc1/Tc2Bogie1valid，Tc1/Tc2转向架1空簧压力有效 ASPTc1/Tc2Bogie2valid，Tc1/Tc2转向架2空簧压力有效 ASPMp1/Mp2Bogie1valid，Mp1/Mp2向架1空簧压力有效 ASPMp1/Mp2Bogie2valid，Mp1/Mp2转向架2空簧压力有效
            BR4CT_ASPValidM12Bog1_B1,BR4CT_ASPValidM12Bog2_B1;//ASPM1/M2Bogie1valid，M1/M2转向架1空簧压力有效 ASPM1/M2Bogie2valid，M1/M2转向架2空簧压力有效

    //0x641
    short BR4CT_SpeedTc12Ax1_I16,BR4CT_SpeedTc12Ax2_I16,BR4CT_SpeedTc12Ax3_I16,BR4CT_SpeedTC12Ax4_I16,//Actualspeedofaxle1inCarTc1/Tc2，Tc1/Tc2车1轴线速度 Actualspeedofaxle2inCarTc1/Tc2，Tc1/Tc2车2轴线速度 Actualspeedofaxle3inCarTc1/Tc2，Tc1/Tc2车3轴线速度 Actualspeedofaxle4inCarTc1/Tc2，Tc1/Tc2车4轴线速度
            BR4CT_SpeedMp12Ax1_I16,BR4CT_SpeedMp12Ax2_I16,BR4CT_SpeedMp12Ax3_I16,BR4CT_SpeedMp12Ax4_I16,//Actualspeedofaxle1inCarMp1/Mp2，Mp1/Mp2车1轴线速度 Actualspeedofaxle2inCarMp1/Mp2，Mp1/Mp2车2轴线速度 Actualspeedofaxle3inCarMp1/Mp2，Mp1/Mp2车3轴线速度 Actualspeedofaxle4inCarMp1/Mp2，Mp1/Mp2车4轴线速度
            BR4CT_SpeedM12Ax1_I16,BR4CT_SpeedM12Ax2_I16,BR4CT_SpeedM12Ax3_I16,BR4CT_SpeedM12Ax4_I16,//Actualspeedofaxle1inCarM1/M2，M1/M2车1轴线速度 Actualspeedofaxle2inCarM1/M2，M1/M2车2轴线速度 Actualspeedofaxle3inCarM1/M2，M1/M2车3轴线速度 Actualspeedofaxle4inCarM1/M2，M1/M2车4轴线速度
            BR4CT_MRP_TC_I16,BR4CT_MRP_MP_I16,BR4CT_MRP_M_I16;//MRpressureInTCCar，TC车单元主风管压力 MRpressureInMPCar，MP车单元主风管压力 MRpressureInMCar，M车单元主风管压力

    bool BR4CT_SpeedValTc12Ax1_B1,BR4CT_SpeedValTc12Ax2_B1,BR4CT_SpeedValTc12Ax3_B1,BR4CT_SpeedValTc12Ax4_B1,//Actualspeedofaxle1validinCarTc1/Tc2，Tc1/Tc2车1轴线速度值有效 Actualspeedofaxle2validinCarTc1/Tc2，Tc1/Tc2车2轴线速度值有效 Actualspeedofaxle3validinCarTc1/Tc2，Tc1/Tc2车3轴线速度值有效 Actualspeedofaxle4validinCarTc1/Tc2，Tc1/Tc2车4轴线速度值有效
            BR4CT_SpeedValMp12Ax1_B1,BR4CT_SpeedValMp12Ax2_B1,BR4CT_SpeedValMp12Ax3_B1,BR4CT_SpeedValMp12Ax4_B1;//Actualspeedofaxle1validinCarMp1/Mp2，Mp1/Mp2车1轴线速度值有效  Actualspeedofaxle2validinCarMp1/Mp2，Mp1/Mp2车2轴线速度值有效 Actualspeedofaxle3validinCarMp1/Mp2，Mp1/Mp2车3轴线速度值有效  Actualspeedofaxle4validinCarMp1/Mp2，Mp1/Mp2车4轴线速度值有效

    bool BR4CT_SpeedValM12Ax1_B1,BR4CT_SpeedValM12Ax2_B1,BR4CT_SpeedValM12Ax3_B1,BR4CT_SpeedValM12Ax4_B1,//Actualspeedofaxle1validinCarM1/M2，M1/M2车1轴线速度值有效 Actualspeedofaxle2validinCarM1/M2，M1/M2车2轴线速度值有效 Actualspeedofaxle3validinCarM1/M2，M1/M2车3轴线速度值有效 Actualspeedofaxle4validinCarM1/M2，M1/M2车4轴线速度值有效
            BR4CT_MRPValTC_B1,BR4CT_MRPValMP_B1,BR4CT_MRPValM_B1;//MRpressureValidInTC，TC车主风管压力有效 MRpressureValidInMP，MP车主风管压力有效  MRpressureValidInM，M车主风管压力有效

    //0x642
    short BR4CT_LifeSgn_I16,BR4CT_EPForceTc12bog1_I16,BR4CT_EPForceTc12bog2_I16,BR4CT_EPForceMp12bog1_I16,//LifeSignal生命信号	TC1/TC2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,Tc1/Tc2转向架1可能施加的空气制动力	TC1/TC2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,Tc1/Tc2转向架2可能施加的空气制动力	MP1/MP2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,Mp1/Mp2转向架1可能施加的空气制动力
            BR4CT_EPForceMp12bog2_I16,BR4CT_EPForceM12bog1_I16,BR4CT_EPForceM12bog2_I16;//MP1/MP2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,Mp1/Mp2转向架2可能施加的空气制动力	M1/M2carbogie1possibleEPbrakeforcewhichcanbeappliedtoabogie,M1/M2转向架1可能施加的空气制动力	M1/M2carbogie2possibleEPbrakeforcewhichcanbeappliedtoabogie,M1/M2转向架2可能施加的空气制动力

    unsigned char BR4CT_GWSWVerBH_U8,BR4CT_GWSWVerBL_U8;//Gatewayvalveswversionbytehigh，网关阀软件版本byte高位   Gatewayvalveswversionbytelow，网关阀软件版本byte低位

    bool BR4CT_DiagOKTc12_Bogie1_B1,BR4CT_DiagOKTc12_Bogie2_B1,BR4CT_DiagOKMp12_Bogie1_B1, BR4CT_DiagOKMp12_Bogie2_B1,//Tc1/Tc2Bogie1BCUDiagOK，Tc1/Tc2转向架1状态及诊断数据有效	Tc1/Tc2Bogie2BCUDiagOK，Tc1/Tc2转向架2状态及诊断数据有效	Mp1/Mp2Bogie1BCUDiagOK，Mp1/Mp2转向架1状态及诊断数据有效	Mp1/Mp2Bogie2BCUDiagOK，Mp1/Mp2转向架2状态及诊断数据有效
            BR4CT_DiagOKM12_Bogie1_B1, BR4CT_DiagOKM12_Bogie2_B1,BR4CT_CanApplSBTc12Bog1_B1,BR4CT_CanApplSBTc12Bog2_B1;//M1/M2Bogie1BCUDiagOK，M1/M2转向架1状态及诊断数据有效	M1/M2Bogie2BCUDiagOK，M1/M2转向架2状态及诊断数据有效	Tc1/Tc2bogie1EP2002canapplyservicebrake，Tc1/Tc2车转向架1能施加常用制动	Tc1/Tc2bogie2EP2002canapplyservicebrake，Tc1/Tc2车转向架2能施加常用制动

    bool BR4CT_CanApplSBMp12Bog1_B1,BR4CT_CanApplSBMp12Bog2_B1,BR4CT_CanApplSBM12Bog1_B1,BR4CT_CanApplSBM12Bog2_B1,//Mp1/Mp2bogie1EP2002canapplyservicebrake，Mp1/Mp2车转向架1能施加常用制动	Mp1/Mp2bogie2EP2002canapplyservicebrake，Mp1/Mp2车转向架2能施加常用制动	M1/M2bogie1EP2002canapplyservicebrake，M1/M2车转向架1能施加常用制动	M1/M2bogie2EP2002canapplyservicebrake，M1/M2车转向架2能施加常用制动
            BR4CT_BrakeAppliedTC12Bog1_B1,BR4CT_BrakeAppliedTC12Bog2_B1,BR4CT_BrakeAppliedMp12Bog1_B1,BR4CT_BrakeAppliedMp12Bog2_B1;//Tc1/Tc2转向架1制动已经施加	Tc1/Tc2转向架2制动已经施加	Mp1/Mp2转向架1制动已经施加	Mp1/Mp2转向架2制动已经施加

    bool BR4CT_BrakeAppliedM12Bog1_B1,BR4CT_BrakeAppliedM12Bog2_B1,BR4CT_BrakeReleasedTC12Bog1_B1,BR4CT_BrakeReleasedTC12Bog2_B1,//M1/M2转向架1制动已经施加	M1/M2转向架2制动已经施加	Tc1/Tc2转向架1制动已经缓解	Tc1/Tc2转向架2制动已经缓解
            BR4CT_BrakeReleasedMp12Bog1_B1,BR4CT_BrakeReleasedMp12Bog2_B1,BR4CT_BrakeReleasedM12Bog1_B1, BR4CT_BrakeReleasedM12Bog2_B1;//Mp1/Mp2转向架1制动已经缓解	Mp1/Mp2转向架2制动已经缓解	M1/M2转向架1制动已经缓解	M1/M2转向架2制动已经缓解

    bool BR4CT_IsolTc12Bog1_B1,BR4CT_IsolTc12Bog2_B1, BR4CT_IsolMp12Bog1_B1,BR4CT_IsolMp12Bog2_B1,//isolatedTc1/Tc2Bogie1，Tc1/Tc2转向架1隔离	isolatedTc1/Tc2Bogie2，Tc1/Tc2转向架2隔离	isolatedMp1/Mp2Bogie1，Mp1/Mp2转向架1隔离	isolatedMp1/Mp2Bogie2，Mp1/Mp2转向架2隔离
            BR4CT_IsolM12Bog1_B1,BR4CT_IsolM12Bog2_B1, BR4CT_WSPTc12Bog1_B1,BR4CT_WSPTc12Bog2_B1;//isolatedM1/M2Bogie1，M1/M2转向架1隔离	isolatedM1/M2Bogie2，M1/M2转向架2隔离	Tc1/Tc2 Bog1 WSPDetected，检测到打滑	Tc1/Tc2 Bog2 WSPDetected，检测到打滑

    bool BR4CT_WSPMP12Bog1_B1,BR4CT_WSPMP12Bog2_B1,BR4CT_WSPM12Bog1_B1,BR4CT_WSPM12Bog2_B1,//MP1/MP2 Bog1 WSPDetected，检测到打滑	MP1/MP2 Bog2 WSPDetected，检测到打滑	M1/M2 Bog1 WSPDetected，检测到打滑	M1/M2 Bog2 WSPDetected，检测到打滑
            BR4CT_EBActiTc12Bog1_B1,BR4CT_EBActiTc12Bog2_B1,BR4CT_EBActiMp12Bog1_B1,BR4CT_EBActiMp12Bog2_B1;//EmergencybrakeActiveTc1/Tc2Bogie1，Tc1/Tc2车转向架1紧急制动激活	EmergencybrakeActiveTc1/Tc2Bogie2，Tc1/Tc2车转向架2紧急制动激活	EmergencybrakeActiveMp1/Mp2Bogie1，Mp1/Mp2车转向架1紧急制动激活	EmergencybrakeActiveMp1/Mp2Bogie2，Mp1/Mp2车转向架2紧急制动激活

    bool BR4CT_EBActiM12Bog1_B1,BR4CT_EBActiM12Bog2_B1,BR4CT_EBAvailTc12Bog1_B1,BR4CT_EBAvailTc12Bog2_B1,//EmergencybrakeActiveM1/M2Bogie1，M1/M2车转向架1紧急制动激活	EmergencybrakeActiveM1/M2Bogie2，M1/M2车转向架2紧急制动激活	EmergencybrakeAvailableTc1/Tc2Bogie1，Tc1/Tc2车转向1架紧急制动可用	EmergencybrakeAvailableTc1/Tc2Bogie2，Tc1/Tc2车转向2架紧急制动可用
            BR4CT_EBAvailMp12Bog1_B1,BR4CT_EBAvailMp12Bog2_B1,BR4CT_EBAvailM12Bog1_B1,BR4CT_EBAvailM12Bog2_B1;//EmergencybrakeAvailableMp1/Mp2Bogie1，Mp1/Mp2车转向1架紧急制动可用	EmergencybrakeAvailableMp1/Mp2Bogie2，Mp1/Mp2车转向2架紧急制动可用	EmergencybrakeAvailableM1/M2Bogie1，M1/M2车转向1架紧急制动可用	EmergencybrakeAvailableM1/M2Bogie2，M1/M2车转向2架紧急制动可用

    bool BR4CT_PBReleasedTc12_B1, BR4CT_PBReleasedMp12_B1,BR4CT_PBReleasedM12_B1,BR4CT_MGW_B1,//ParkingbrakeReleasedInTc1/Tc2，Tc1/Tc2车停放制动缓解	ParkingbrakeReleasedInMp1/Mp2，Mp1/Mp2车停放制动缓解	ParkingbrakeReleasedInM1/M2，M1/M2车停放制动缓解	Gatewayismaster，主网关阀
            BR4CT_DISEBMp12_B1,BR4CT_DISEBM12_B1,BR4CT_CAN1_B1,BR4CT_AllASPReady_B1;//Mp1/Mp2EdBrakeCutOff，制动系统要求牵引系统电制动切除	M1/M2EdBrakeCutOff，制动系统要求牵引系统电制动切除	cansegment1，can1网络	AllAspReady，所有空气悬挂系统压力达到正常值

    bool BR4CT_SelfTestConT_B1,BR4CT_RuningSelfTest_B1,BR4CT_SelfTestOK_B1,BR4CT_SelfTestFailed_B1,//SelftestConditionsTrue，自检测条件满足	SelftestRunning，自检测进行中	SelftestOk，自检ok	SelftestFailed自检失败
            BR4CT_LastSelfTestAborted_B1,BR4CT_DiameterInput_ready_B1, BR4CT_DiameterInput_status_B1,BR4CT_EBActiInCAN_B1;//SelftestAbort自检退出	轮径输入准备好	轮径输入成功	EmergencybrakeActive in CAN segment，紧急制动在CAN网中激活

    bool BR4CT_BrakeActInCAN_B1,BR4CT_DriveActInCAN_B1, BR4CT_FastBrakeActInCAN_B1,BR4CT_EDM_B1,//Hardwired brake is active in CAN segment， CAN单元中硬线制动激活	Hardwired drive is set in CAN segment，CAN单元中硬线牵引置位	Hardwired fastbrake is active in CAN segment，CAN单元中快速制动激活	Hardwired EDM is set in CAN segment, CAN单元中硬线紧急牵引指令置位
            BR4CT_ZeroSpeed_B1,BR4CT_HBBrakeApply_B1,BR4CT_30kphExceed_B1,BR4CT_80kphExceed_B1;//零速信号（<0.5kph）	Holding brake applied in CAN segment，保持制动已经施加	30km/h超速（硬线反馈）	88km/h超速（硬线反馈）

    bool BR4CT_MVBOK_B1;//MVB网络通讯正常


    //0x643
    short BR4CT_BSRTc12Bog1_I16,BR4CT_BSRTc12Bog2_I16,BR4CT_BSRMp12Bog1_I16,BR4CT_BSRMp12Bog2_I16,//BrakecySupplyReservoirPressBogie1Tc1/Tc2，Tc1/Tc2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2Tc1/Tc2，Tc1/Tc2转向架2制动风缸压力	BrakecySupplyReservoirPressBogie1Mp1/Mp2，Mp1/Mp2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2Mp1/Mp2，Mp1/Mp2转向架2制动风缸压力
            BR4CT_BSRM12Bog1_I16, BR4CT_BSRM12Bog2_I16,BR4CT_BCPTc12Bog1_I16,BR4CT_BCPTc12Bog2_I16;//BrakecySupplyReservoirPressBogie1M1/M2，M1/M2转向架1制动风缸压力	BrakecySupplyReservoirPressBogie2M1/M2，M1/M2转向架2制动风缸压力	BrakecyCylinderPressBogie1Tc1/Tc2，Tc1/Tc2转向架1制动缸压力	BrakecyCylinderPressBogie2Tc1/Tc2，Tc1/Tc2转向架2制动缸压力

    short BR4CT_BCPMp12Bog1_I16,BR4CT_BCPMp12Bog2_I16,BR4CT_BCPM12Bog1_I16,BR4CT_BCPM12Bog2_I16,//BrakecyCylinderPressBogie1Mp1/Mp2，Mp1/Mp2转向架1制动缸压力	BrakecyCylinderPressBogie2Mp1/Mp2，Mp1/Mp2转向架2制动缸压力	BrakecyCylinderPressBogie1M1/M2，M1/M2转向架1制动缸压力	BrakecyCylinderPressBogie2M1/M2，M1/M2转向架2制动缸压力
            BR4CT_PBPressureTc_I16,BR4CT_PBPressureMP_I16,BR4CT_PBPressureM_I16;//ParkingbrakePressureInTC, Tc车停放制动缸压力	ParkingbrakePressureInMP, MP车停放制动缸压力	ParkingbrakePressureInM, M车停放制动缸压力

    bool BR4CT_BSRBog1Valid_Tc12_B1,BR4CT_BSRBog2Valid_Tc12_B1,BR4CT_BSRBog1Valid_Mp12_B1,BR4CT_BSRBog2Valid_Mp12_B1,//BSR_PressBogie1Valid_Tc1/Tc2，Tc1/Tc2转向架1制动风缸压力有效	BSR_PressBogie2Valid_Tc1/Tc2，Tc1/Tc2转向架2制动风缸压力有效	BSR_PressBogie1Valid_Mp1/Mp2，Mp1/Mp2转向架1制动风缸压力有效	BSR_PressBogie2Valid_Mp1/Mp2，Mp1/Mp2转向架2制动风缸压力有效
            BR4CT_BSRBog1Valid_M12_B1,BR4CT_BSRBog2Valid_M12_B1,BR4CT_BCPBog1Valid_Tc12_B1,BR4CT_BCPBog2Valid_Tc12_B1;//BSR_PressBogie1Valid_M1/M2，M1/M2转向架1制动风缸压力有效	BSR_PressBogie2Valid_M1/M2，M1/M2转向架2制动风缸压力有效	BCP_PressBogie1Valid_Tc1/Tc2，Tc1/Tc2转向架1制动缸压力有效	BCP_PressBogie2Valid_Tc1/Tc2，Tc1/Tc2转向架2制动缸压力有效

    bool BR4CT_BCPBog1Valid_Mp12_B1,BR4CT_BCPBog2Valid_Mp12_B1,BR4CT_BCPBog1Valid_M12_B1,BR4CT_BCPBog2Valid_M12_B1,//BCP_PressBogie1Valid_Mp1/Mp2，Mp1/Mp2转向架1制动缸压力有效	BCP_PressBogie2Valid_Mp1/Mp2，Mp1/Mp2转向架2制动缸压力有效	BCP_PressBogie1Valid_M1/M2，M1/M2转向架1制动缸压力有效	BCP_PressBogie2Valid_M1/M2，M1/M2转向架2制动缸压力有效
            BR4CT_PBPressValid_Tc12_B1,BR4CT_PBPressValid_Mp12_B1,BR4CT_PBPressValid_M12_B1;//ParkingbrakePressureValid_Tc1/Tc2，Tc1/Tc2车停放制动缸压力有效	ParkingbrakePressureValid_Mp1/Mp2，Mp1/Mp2车停放制动缸压力有效	ParkingbrakePressureValid_M1/M2，M1/M2车停放制动缸压力有效


    //CCU-BCU
    //0x608
    short CTBR_Grade_I16;//级位信号

    bool CTBR_StartSelfTest_B1,CTBR_Brake_B1,CTBR_Drive_B1, CTBR_BrakeDemandValid_B1,//Start Selftest 开始自检测	Braking 制动指令	Motoring 牵引指令	BrakingDemand Valid制动级位有效位
            CTBR_ATOMod_B1,CTBR_HBRel_B1,CTBR_WheelDiameterInput_B1,CTBR_EBFaded_B1;//ATO Mode active，ATO模式激活	holding brake release，保持制动缓解	轮径设定需求有效	电制动衰减

    short CTBR_WheelSizeTC1_I16,CTBR_WheelSizeTC2_I16;//TC1车1架2轴基准轮径   TC2车1架2轴基准轮径


    //SIV1-CCU
    //0x501
    short AX1CT_DCUALifeSignal1_I16,AX1CT_DCVoltage_I16,AX1CT_AuxInvPower_I16,AX1CT_AuxInvStatus_I16,//DCUA生命信号   直流环节电压   辅逆功率   辅逆状态字
            AX1CT_AuxInvLoadVoltage_I16,AX1CT_SystemFeedback_I16,AX1CT_BatteryTemp_I16,AX1CT_AuxInvLoadCurrent_I16,//辅逆负载电压  系统反馈   蓄电池温度  辅逆负载电流
            AX1CT_BCGEnergy_I16,AX1CT_DCCurrent_I16;//充电机能耗   直流环节电流

    bool AX1CT_ACMSamePhaseActived_B1,AX1CT_BatteryStartLowVoltage_B1,AX1CT_AuxInvCutFeedback_B1,AX1CT_LineVoltageOk_B1;//ACM同相激活 蓄电池低压启动  辅逆切除反馈  线电压正常

    bool AX1CT_AuxInvLoadBreakerClose_B1,AX1CT_AuxInvVoltageValid_B1,AX1CT_ACMLineActived_B1;//辅逆负载接触器闭合	辅逆负载电压有效	ACM母线激活

    bool AX1CT_DCVoltageValid_B1, AX1CT_BCMFlt_B1,  AX1CT_BCMCharging_B1;//直流环节电压有效	BCM故障	BCM充电中

    bool AX1CT_BatteryTempValid_B1;//蓄电池温度有效

    bool AX1CT_BCGFlt_B1,AX1CT_PotentialInnerSC_B1,AX1CT_PotentialOuterSC_B1,AX1CT_DBreakerCloseFeedback_B1,//蓄电池充电机故障或负载接触器不能断开	潜在内部短路	潜在外部短路	分离接触器闭合反馈
            AX1CT_CBreakerCloseFeedback_B1;//充电接触器闭合反馈
    //0x502
    short AX1CT_DCUALifeSignal2_I16,AX1CT_BCGRadiatorTemp_I16, AX1CT_AuxInvRadiatorTemp_I16,AX1CT_AuxInvInnerAirTemp_I16,//DCUA生命信号	蓄电池充电机散热器温度	辅逆散热器温度	辅逆内部空气温度
            AX1CT_BatteryLineVoltage_I16,AX1CT_BatteryLineCurrent_I16,AX1CT_BatteryChargingCurrent_I16;//蓄电池母线电压	蓄电池母线电流	蓄电池充电机电流

    short AX1CT_AuxInvEnergy_I16,AX1CT_AuxInvWorkingTime_I16,AX1CT_SWVersion1_I16,AX1CT_SWVersion2_I16,//辅逆能耗	ACM运行时间	软件版本1字节	软件版本2字节
            AX1CT_SWVersion3_I16,AX1CT_SWVersion4_I16;//软件版本3字节	软件版本4字节

    bool AX1CT_PowerShieldClose_B1,AX1CT_IESQ2_B1,AX1CT_IESQ1_B1,AX1CT_WorkShopPowerMode_B1,//车间电源保护盖板闭合	IES接触器Q2在2位	IES接触器Q1在1位	车间电源模式
            AX1CT_PHFrontCoverClose_B1,AX1CT_OVPRTempHigh_B1;//PH箱前端舱盖闭合	OVP电阻温度高

    bool AX1CT_AuxInvOverPower_B1,AX1CT_AuxInvInnerTempValid_B1,AX1CT_OutsideFanFullSpeed_B1, AX1CT_OutsideFanHalfSpeed_B1,//辅逆功率过高	辅逆内部空气温度有效	外部风扇全速	外部风扇半速
            AX1CT_AuxInvRadiatorTempValid_B1, AX1CT_BCGRadiatorTempValid_B1;//辅逆散热器温度有效	蓄电池充电机散热器温度有效

    //SIV2-CCU
    //0x511
    short AX2CT_DCUALifeSignal1_I16,AX2CT_DCVoltage_I16,AX2CT_AuxInvPower_I16,AX2CT_AuxInvStatus_I16,//DCUA生命信号   直流环节电压   辅逆功率   辅逆状态字
            AX2CT_AuxInvLoadVoltage_I16,AX2CT_SystemFeedback_I16,AX2CT_BatteryTemp_I16,AX2CT_AuxInvLoadCurrent_I16,//辅逆负载电压  系统反馈   蓄电池温度  辅逆负载电流
            AX2CT_BCGEnergy_I16,AX2CT_DCCurrent_I16;//充电机能耗   直流环节电流

    bool AX2CT_ACMSamePhaseActived_B1,AX2CT_BatteryStartLowVoltage_B1,AX2CT_AuxInvCutFeedback_B1,AX2CT_LineVoltageOk_B1;//ACM同相激活 蓄电池低压启动  辅逆切除反馈  线电压正常

    bool AX2CT_AuxInvLoadBreakerClose_B1,AX2CT_AuxInvVoltageValid_B1,AX2CT_ACMLineActived_B1;//辅逆负载接触器闭合	辅逆负载电压有效	ACM母线激活

    bool AX2CT_DCVoltageValid_B1, AX2CT_BCMFlt_B1,  AX2CT_BCMCharging_B1;//直流环节电压有效	BCM故障	BCM充电中

    bool AX2CT_BatteryTempValid_B1;//蓄电池温度有效

    bool AX2CT_BCGFlt_B1,AX2CT_PotentialInnerSC_B1,AX2CT_PotentialOuterSC_B1,AX2CT_DBreakerCloseFeedback_B1,//蓄电池充电机故障或负载接触器不能断开	潜在内部短路	潜在外部短路	分离接触器闭合反馈
            AX2CT_CBreakerCloseFeedback_B1;//充电接触器闭合反馈
    //0x512
    short AX2CT_DCUALifeSignal2_I16,AX2CT_BCGRadiatorTemp_I16, AX2CT_AuxInvRadiatorTemp_I16,AX2CT_AuxInvInnerAirTemp_I16,//DCUA生命信号	蓄电池充电机散热器温度	辅逆散热器温度	辅逆内部空气温度
            AX2CT_BatteryLineVoltage_I16,AX2CT_BatteryLineCurrent_I16,AX2CT_BatteryChargingCurrent_I16;//蓄电池母线电压	蓄电池母线电流	蓄电池充电机电流

    short AX2CT_AuxInvEnergy_I16,AX2CT_AuxInvWorkingTime_I16,AX2CT_SWVersion1_I16,AX2CT_SWVersion2_I16,//辅逆能耗	ACM运行时间	软件版本1字节	软件版本2字节
            AX2CT_SWVersion3_I16,AX2CT_SWVersion4_I16;//软件版本3字节	软件版本4字节

    bool AX2CT_PowerShieldClose_B1,AX2CT_IESQ2_B1,AX2CT_IESQ1_B1,AX2CT_WorkShopPowerMode_B1,//车间电源保护盖板闭合	IES接触器Q2在2位	IES接触器Q1在1位	车间电源模式
            AX2CT_PHFrontCoverClose_B1,AX2CT_OVPRTempHigh_B1;//PH箱前端舱盖闭合	OVP电阻温度高

    bool AX2CT_AuxInvOverPower_B1,AX2CT_AuxInvInnerTempValid_B1,AX2CT_OutsideFanFullSpeed_B1, AX2CT_OutsideFanHalfSpeed_B1,//辅逆功率过高	辅逆内部空气温度有效	外部风扇全速	外部风扇半速
            AX2CT_AuxInvRadiatorTempValid_B1, AX2CT_BCGRadiatorTempValid_B1;//辅逆散热器温度有效	蓄电池充电机散热器温度有效


    //SIV3-CCU
    //0x531
    short AX3CT_DCUALifeSignal1_I16,AX3CT_DCVoltage_I16,AX3CT_AuxInvPower_I16,AX3CT_AuxInvStatus_I16,//DCUA生命信号   直流环节电压   辅逆功率   辅逆状态字
            AX3CT_AuxInvLoadVoltage_I16,AX3CT_SystemFeedback_I16,AX3CT_BatteryTemp_I16,AX3CT_AuxInvLoadCurrent_I16,//辅逆负载电压  系统反馈   蓄电池温度  辅逆负载电流
            AX3CT_BCGEnergy_I16,AX3CT_DCCurrent_I16;//充电机能耗   直流环节电流

    bool AX3CT_ACMSamePhaseActived_B1,AX3CT_BatteryStartLowVoltage_B1,AX3CT_AuxInvCutFeedback_B1,AX3CT_LineVoltageOk_B1;//ACM同相激活 蓄电池低压启动  辅逆切除反馈  线电压正常

    bool AX3CT_AuxInvLoadBreakerClose_B1,AX3CT_AuxInvVoltageValid_B1,AX3CT_ACMLineActived_B1;//辅逆负载接触器闭合	辅逆负载电压有效	ACM母线激活

    bool AX3CT_DCVoltageValid_B1, AX3CT_BCMFlt_B1,  AX3CT_BCMCharging_B1;//直流环节电压有效	BCM故障	BCM充电中

    bool AX3CT_BatteryTempValid_B1;//蓄电池温度有效

    bool AX3CT_BCGFlt_B1,AX3CT_PotentialInnerSC_B1,AX3CT_PotentialOuterSC_B1,AX3CT_DBreakerCloseFeedback_B1,//蓄电池充电机故障或负载接触器不能断开	潜在内部短路	潜在外部短路	分离接触器闭合反馈
            AX3CT_CBreakerCloseFeedback_B1;//充电接触器闭合反馈
    //0x532
    short AX3CT_DCUALifeSignal2_I16,AX3CT_BCGRadiatorTemp_I16, AX3CT_AuxInvRadiatorTemp_I16,AX3CT_AuxInvInnerAirTemp_I16,//DCUA生命信号	蓄电池充电机散热器温度	辅逆散热器温度	辅逆内部空气温度
            AX3CT_BatteryLineVoltage_I16,AX3CT_BatteryLineCurrent_I16,AX3CT_BatteryChargingCurrent_I16;//蓄电池母线电压	蓄电池母线电流	蓄电池充电机电流

    short AX3CT_AuxInvEnergy_I16,AX3CT_AuxInvWorkingTime_I16,AX3CT_SWVersion1_I16,AX3CT_SWVersion2_I16,//辅逆能耗	ACM运行时间	软件版本1字节	软件版本2字节
            AX3CT_SWVersion3_I16,AX3CT_SWVersion4_I16;//软件版本3字节	软件版本4字节

    bool AX3CT_PowerShieldClose_B1,AX3CT_IESQ2_B1,AX3CT_IESQ1_B1,AX3CT_WorkShopPowerMode_B1,//车间电源保护盖板闭合	IES接触器Q2在2位	IES接触器Q1在1位	车间电源模式
            AX3CT_PHFrontCoverClose_B1,AX3CT_OVPRTempHigh_B1;//PH箱前端舱盖闭合	OVP电阻温度高

    bool AX3CT_AuxInvOverPower_B1,AX3CT_AuxInvInnerTempValid_B1,AX3CT_OutsideFanFullSpeed_B1, AX3CT_OutsideFanHalfSpeed_B1,//辅逆功率过高	辅逆内部空气温度有效	外部风扇全速	外部风扇半速
            AX3CT_AuxInvRadiatorTempValid_B1, AX3CT_BCGRadiatorTempValid_B1;//辅逆散热器温度有效	蓄电池充电机散热器温度有效

    //SIV4-CCU
    //0x521
    short AX4CT_DCUALifeSignal1_I16,AX4CT_DCVoltage_I16,AX4CT_AuxInvPower_I16,AX4CT_AuxInvStatus_I16,//DCUA生命信号   直流环节电压   辅逆功率   辅逆状态字
            AX4CT_AuxInvLoadVoltage_I16,AX4CT_SystemFeedback_I16,AX4CT_BatteryTemp_I16,AX4CT_AuxInvLoadCurrent_I16,//辅逆负载电压  系统反馈   蓄电池温度  辅逆负载电流
            AX4CT_BCGEnergy_I16,AX4CT_DCCurrent_I16;//充电机能耗   直流环节电流

    bool AX4CT_ACMSamePhaseActived_B1,AX4CT_BatteryStartLowVoltage_B1,AX4CT_AuxInvCutFeedback_B1,AX4CT_LineVoltageOk_B1;//ACM同相激活 蓄电池低压启动  辅逆切除反馈  线电压正常

    bool AX4CT_AuxInvLoadBreakerClose_B1,AX4CT_AuxInvVoltageValid_B1,AX4CT_ACMLineActived_B1;//辅逆负载接触器闭合	辅逆负载电压有效	ACM母线激活

    bool AX4CT_DCVoltageValid_B1, AX4CT_BCMFlt_B1,  AX4CT_BCMCharging_B1;//直流环节电压有效	BCM故障	BCM充电中

    bool AX4CT_BatteryTempValid_B1;//蓄电池温度有效

    bool AX4CT_BCGFlt_B1,AX4CT_PotentialInnerSC_B1,AX4CT_PotentialOuterSC_B1,AX4CT_DBreakerCloseFeedback_B1,//蓄电池充电机故障或负载接触器不能断开	潜在内部短路	潜在外部短路	分离接触器闭合反馈
            AX4CT_CBreakerCloseFeedback_B1;//充电接触器闭合反馈
    //0x522
    short AX4CT_DCUALifeSignal2_I16,AX4CT_BCGRadiatorTemp_I16, AX4CT_AuxInvRadiatorTemp_I16,AX4CT_AuxInvInnerAirTemp_I16,//DCUA生命信号	蓄电池充电机散热器温度	辅逆散热器温度	辅逆内部空气温度
            AX4CT_BatteryLineVoltage_I16,AX4CT_BatteryLineCurrent_I16,AX4CT_BatteryChargingCurrent_I16;//蓄电池母线电压	蓄电池母线电流	蓄电池充电机电流

    short AX4CT_AuxInvEnergy_I16,AX4CT_AuxInvWorkingTime_I16,AX4CT_SWVersion1_I16,AX4CT_SWVersion2_I16,//辅逆能耗	ACM运行时间	软件版本1字节	软件版本2字节
            AX4CT_SWVersion3_I16,AX4CT_SWVersion4_I16;//软件版本3字节	软件版本4字节

    bool AX4CT_PowerShieldClose_B1,AX4CT_IESQ2_B1,AX4CT_IESQ1_B1,AX4CT_WorkShopPowerMode_B1,//车间电源保护盖板闭合	IES接触器Q2在2位	IES接触器Q1在1位	车间电源模式
            AX4CT_PHFrontCoverClose_B1,AX4CT_OVPRTempHigh_B1;//PH箱前端舱盖闭合	OVP电阻温度高

    bool AX4CT_AuxInvOverPower_B1,AX4CT_AuxInvInnerTempValid_B1,AX4CT_OutsideFanFullSpeed_B1, AX4CT_OutsideFanHalfSpeed_B1,//辅逆功率过高	辅逆内部空气温度有效	外部风扇全速	外部风扇半速
            AX4CT_AuxInvRadiatorTempValid_B1, AX4CT_BCGRadiatorTempValid_B1;//辅逆散热器温度有效	蓄电池充电机散热器温度有效

    //CCU-SIV1
    //0x508
    short CTAX1_CCULifeSignal0_I16,CTAX1_CCULifeSignal1_I16,CTAX1_TrainSpeed_I16,CTAX1_ACMChoice_I16;//CCU生命信号	CCU生命信号	列车速度	选择ACM系统

    bool CTAX1_ShortCurcuitCheck_B1,CTAX1_LinVoltageOK_B1, CTAX1_AuxInvIdleStartForbidden_B1,CTAX1_AuxInvCutOff_B1,//短路检测指令	线电压工作	禁止辅逆闲置启动指令	切除辅逆指令
    CTAX1_AuxInvStartForbidden_B1,CTAX1_ODBS2OK_B1, CTAX1_CCULifeSignal2_I16,CTAX1_EnvieronmetalTemp_I16,//禁止辅逆启动指令	ODBS2正常	CCU生命信号	环境温度
    CTAX1_ODBS1OK_B1,CTAX1_ClearDataCounter_B1,CTAX1_ResetAuxInv_B1;//ODBS1正常	清除条件数据计数器	 辅逆复位

    //CCU-SIV2
    //0x518
    short CTAX2_CCULifeSignal0_I16,CTAX2_CCULifeSignal1_I16,CTAX2_TrainSpeed_I16,CTAX2_ACMChoice_I16;//CCU生命信号	CCU生命信号	列车速度	选择ACM系统

    bool CTAX2_ShortCurcuitCheck_B1,CTAX2_LinVoltageOK_B1, CTAX2_AuxInvIdleStartForbidden_B1,CTAX2_AuxInvCutOff_B1,//短路检测指令	线电压工作	禁止辅逆闲置启动指令	切除辅逆指令
    CTAX2_AuxInvStartForbidden_B1,CTAX2_ODBS2OK_B1, CTAX2_CCULifeSignal2_I16,CTAX2_EnvieronmetalTemp_I16,//禁止辅逆启动指令	ODBS2正常	CCU生命信号	环境温度
    CTAX2_ODBS1OK_B1,CTAX2_ClearDataCounter_B1,CTAX2_ResetAuxInv_B1;//ODBS1正常	清除条件数据计数器	 辅逆复位

    //CCU-SIV3
    //0x538
    short CTAX3_CCULifeSignal0_I16,CTAX3_CCULifeSignal1_I16,CTAX3_TrainSpeed_I16,CTAX3_ACMChoice_I16;//CCU生命信号	CCU生命信号	列车速度	选择ACM系统

    bool CTAX3_ShortCurcuitCheck_B1,CTAX3_LinVoltageOK_B1, CTAX3_AuxInvIdleStartForbidden_B1,CTAX3_AuxInvCutOff_B1,//短路检测指令	线电压工作	禁止辅逆闲置启动指令	切除辅逆指令
    CTAX3_AuxInvStartForbidden_B1,CTAX3_ODBS2OK_B1, CTAX3_CCULifeSignal2_I16,CTAX3_EnvieronmetalTemp_I16,//禁止辅逆启动指令	ODBS2正常	CCU生命信号	环境温度
    CTAX3_ODBS1OK_B1,CTAX3_ClearDataCounter_B1,CTAX3_ResetAuxInv_B1;//ODBS1正常	清除条件数据计数器	 辅逆复位

    //CCU-SIV4
    //0x528
    short CTAX4_CCULifeSignal0_I16,CTAX4_CCULifeSignal1_I16,CTAX4_TrainSpeed_I16,CTAX4_ACMChoice_I16;//CCU生命信号	CCU生命信号	列车速度	选择ACM系统

    bool CTAX4_ShortCurcuitCheck_B1,CTAX4_LinVoltageOK_B1, CTAX4_AuxInvIdleStartForbidden_B1,CTAX4_AuxInvCutOff_B1,//短路检测指令	线电压工作	禁止辅逆闲置启动指令	切除辅逆指令
    CTAX4_AuxInvStartForbidden_B1,CTAX4_ODBS2OK_B1, CTAX4_CCULifeSignal2_I16,CTAX4_EnvieronmetalTemp_I16,//禁止辅逆启动指令	ODBS2正常	CCU生命信号	环境温度
    CTAX4_ODBS1OK_B1,CTAX4_ClearDataCounter_B1,CTAX4_ResetAuxInv_B1;//ODBS1正常	清除条件数据计数器	 辅逆复位

    //EDCU1-CCU
    //0x710
    bool DR1CT_Dr$8$2$Enable_B1,DR1CT_Dr$8$2$ZeroSpd_B1,DR1CT_Dr$8$2$Opn_B1,DR1CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR1CT_Dr$8$2$Cld_B1,DR1CT_Dr$8$2$OpenObstr_B1,DR1CT_Dr$8$2$SfLpPrt1_B1, DR1CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR1CT_Dr$8$2$CldLck_B1,DR1CT_Dr$8$2$OpnAll_B1,DR1CT_Dr$8$2$EmgUnlock_B1,DR1CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR1CT_Dr$8$2$ReOpnCld_B1,DR1CT_Dr$8$2$CtrlSel_B1,DR1CT_Dr$8$2$MajFlt_B1,DR1CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR1CT_OprSt_U16;//门操作状态

    bool DR1CT_EDCU1Vld_B1,DR1CT_EDCU2Vld_B1,DR1CT_EDCU3Vld_B1,DR1CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR1CT_EDCU5Vld_B1,DR1CT_EDCU6Vld_B1,DR1CT_EDCU7Vld_B1,DR1CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR1CT_TokenRing_U16,DR1CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR1CT_CanLineBreak_B1,DR1CT_MVBLAT_B1,DR1CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD

    //EDCU2-CCU
    //0x720
    bool DR2CT_Dr$8$2$Enable_B1,DR2CT_Dr$8$2$ZeroSpd_B1,DR2CT_Dr$8$2$Opn_B1,DR2CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR2CT_Dr$8$2$Cld_B1,DR2CT_Dr$8$2$OpenObstr_B1,DR2CT_Dr$8$2$SfLpPrt1_B1, DR2CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR2CT_Dr$8$2$CldLck_B1,DR2CT_Dr$8$2$OpnAll_B1,DR2CT_Dr$8$2$EmgUnlock_B1,DR2CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR2CT_Dr$8$2$ReOpnCld_B1,DR2CT_Dr$8$2$CtrlSel_B1,DR2CT_Dr$8$2$MajFlt_B1,DR2CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR2CT_OprSt_U16;//门操作状态

    bool DR2CT_EDCU1Vld_B1,DR2CT_EDCU2Vld_B1,DR2CT_EDCU3Vld_B1,DR2CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR2CT_EDCU5Vld_B1,DR2CT_EDCU6Vld_B1,DR2CT_EDCU7Vld_B1,DR2CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR2CT_TokenRing_U16,DR2CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR2CT_CanLineBreak_B1,DR2CT_MVBLAT_B1,DR2CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD

    //EDCU3-CCU
    //0x730
    bool DR3CT_Dr$8$2$Enable_B1,DR3CT_Dr$8$2$ZeroSpd_B1,DR3CT_Dr$8$2$Opn_B1,DR3CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR3CT_Dr$8$2$Cld_B1,DR3CT_Dr$8$2$OpenObstr_B1,DR3CT_Dr$8$2$SfLpPrt1_B1, DR3CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR3CT_Dr$8$2$CldLck_B1,DR3CT_Dr$8$2$OpnAll_B1,DR3CT_Dr$8$2$EmgUnlock_B1,DR3CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR3CT_Dr$8$2$ReOpnCld_B1,DR3CT_Dr$8$2$CtrlSel_B1,DR3CT_Dr$8$2$MajFlt_B1,DR3CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR3CT_OprSt_U16;//门操作状态

    bool DR3CT_EDCU1Vld_B1,DR3CT_EDCU2Vld_B1,DR3CT_EDCU3Vld_B1,DR3CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR3CT_EDCU5Vld_B1,DR3CT_EDCU6Vld_B1,DR3CT_EDCU7Vld_B1,DR3CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR3CT_TokenRing_U16,DR3CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR3CT_CanLineBreak_B1,DR3CT_MVBLAT_B1,DR3CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD

    //EDCU4-CCU
    //0x740
    bool DR4CT_Dr$8$2$Enable_B1,DR4CT_Dr$8$2$ZeroSpd_B1,DR4CT_Dr$8$2$Opn_B1,DR4CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR4CT_Dr$8$2$Cld_B1,DR4CT_Dr$8$2$OpenObstr_B1,DR4CT_Dr$8$2$SfLpPrt1_B1, DR4CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR4CT_Dr$8$2$CldLck_B1,DR4CT_Dr$8$2$OpnAll_B1,DR4CT_Dr$8$2$EmgUnlock_B1,DR4CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR4CT_Dr$8$2$ReOpnCld_B1,DR4CT_Dr$8$2$CtrlSel_B1,DR4CT_Dr$8$2$MajFlt_B1,DR4CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR4CT_OprSt_U16;//门操作状态

    bool DR4CT_EDCU1Vld_B1,DR4CT_EDCU2Vld_B1,DR4CT_EDCU3Vld_B1,DR4CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR4CT_EDCU5Vld_B1,DR4CT_EDCU6Vld_B1,DR4CT_EDCU7Vld_B1,DR4CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR4CT_TokenRing_U16,DR4CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR4CT_CanLineBreak_B1,DR4CT_MVBLAT_B1,DR4CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD

    //EDCU5-CCU
    //0x750
    bool DR5CT_Dr$8$2$Enable_B1,DR5CT_Dr$8$2$ZeroSpd_B1,DR5CT_Dr$8$2$Opn_B1,DR5CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR5CT_Dr$8$2$Cld_B1,DR5CT_Dr$8$2$OpenObstr_B1,DR5CT_Dr$8$2$SfLpPrt1_B1, DR5CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR5CT_Dr$8$2$CldLck_B1,DR5CT_Dr$8$2$OpnAll_B1,DR5CT_Dr$8$2$EmgUnlock_B1,DR5CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR5CT_Dr$8$2$ReOpnCld_B1,DR5CT_Dr$8$2$CtrlSel_B1,DR5CT_Dr$8$2$MajFlt_B1,DR5CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR5CT_OprSt_U16;//门操作状态

    bool DR5CT_EDCU1Vld_B1,DR5CT_EDCU2Vld_B1,DR5CT_EDCU3Vld_B1,DR5CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR5CT_EDCU5Vld_B1,DR5CT_EDCU6Vld_B1,DR5CT_EDCU7Vld_B1,DR5CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR5CT_TokenRing_U16,DR5CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR5CT_CanLineBreak_B1,DR5CT_MVBLAT_B1,DR5CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD

    //EDCU6-CCU
    //0x760
    bool DR6CT_Dr$8$2$Enable_B1,DR6CT_Dr$8$2$ZeroSpd_B1,DR6CT_Dr$8$2$Opn_B1,DR6CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR6CT_Dr$8$2$Cld_B1,DR6CT_Dr$8$2$OpenObstr_B1,DR6CT_Dr$8$2$SfLpPrt1_B1, DR6CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR6CT_Dr$8$2$CldLck_B1,DR6CT_Dr$8$2$OpnAll_B1,DR6CT_Dr$8$2$EmgUnlock_B1,DR6CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR6CT_Dr$8$2$ReOpnCld_B1,DR6CT_Dr$8$2$CtrlSel_B1,DR6CT_Dr$8$2$MajFlt_B1,DR6CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR6CT_OprSt_U16;//门操作状态

    bool DR6CT_EDCU1Vld_B1,DR6CT_EDCU2Vld_B1,DR6CT_EDCU3Vld_B1,DR6CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR6CT_EDCU5Vld_B1,DR6CT_EDCU6Vld_B1,DR6CT_EDCU7Vld_B1,DR6CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR6CT_TokenRing_U16,DR6CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR6CT_CanLineBreak_B1,DR6CT_MVBLAT_B1,DR6CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD

    //EDCU7-CCU
    //0x770
    bool DR7CT_Dr$8$2$Enable_B1,DR7CT_Dr$8$2$ZeroSpd_B1,DR7CT_Dr$8$2$Opn_B1,DR7CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR7CT_Dr$8$2$Cld_B1,DR7CT_Dr$8$2$OpenObstr_B1,DR7CT_Dr$8$2$SfLpPrt1_B1, DR7CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR7CT_Dr$8$2$CldLck_B1,DR7CT_Dr$8$2$OpnAll_B1,DR7CT_Dr$8$2$EmgUnlock_B1,DR7CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR7CT_Dr$8$2$ReOpnCld_B1,DR7CT_Dr$8$2$CtrlSel_B1,DR7CT_Dr$8$2$MajFlt_B1,DR7CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR7CT_OprSt_U16;//门操作状态

    bool DR7CT_EDCU1Vld_B1,DR7CT_EDCU2Vld_B1,DR7CT_EDCU3Vld_B1,DR7CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR7CT_EDCU5Vld_B1,DR7CT_EDCU6Vld_B1,DR7CT_EDCU7Vld_B1,DR7CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR7CT_TokenRing_U16,DR7CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR7CT_CanLineBreak_B1,DR7CT_MVBLAT_B1,DR7CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD

    //EDCU8-CCU
    //0x780
    bool DR8CT_Dr$8$2$Enable_B1,DR8CT_Dr$8$2$ZeroSpd_B1,DR8CT_Dr$8$2$Opn_B1,DR8CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR8CT_Dr$8$2$Cld_B1,DR8CT_Dr$8$2$OpenObstr_B1,DR8CT_Dr$8$2$SfLpPrt1_B1, DR8CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR8CT_Dr$8$2$CldLck_B1,DR8CT_Dr$8$2$OpnAll_B1,DR8CT_Dr$8$2$EmgUnlock_B1,DR8CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR8CT_Dr$8$2$ReOpnCld_B1,DR8CT_Dr$8$2$CtrlSel_B1,DR8CT_Dr$8$2$MajFlt_B1,DR8CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR8CT_OprSt_U16;//门操作状态

    bool DR8CT_EDCU1Vld_B1,DR8CT_EDCU2Vld_B1,DR8CT_EDCU3Vld_B1,DR8CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR8CT_EDCU5Vld_B1,DR8CT_EDCU6Vld_B1,DR8CT_EDCU7Vld_B1,DR8CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR8CT_TokenRing_U16,DR8CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR8CT_CanLineBreak_B1,DR8CT_MVBLAT_B1,DR8CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD

    //EDCU9-CCU
    //0x790
    bool DR9CT_Dr$8$2$Enable_B1,DR9CT_Dr$8$2$ZeroSpd_B1,DR9CT_Dr$8$2$Opn_B1,DR9CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR9CT_Dr$8$2$Cld_B1,DR9CT_Dr$8$2$OpenObstr_B1,DR9CT_Dr$8$2$SfLpPrt1_B1, DR9CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR9CT_Dr$8$2$CldLck_B1,DR9CT_Dr$8$2$OpnAll_B1,DR9CT_Dr$8$2$EmgUnlock_B1,DR9CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR9CT_Dr$8$2$ReOpnCld_B1,DR9CT_Dr$8$2$CtrlSel_B1,DR9CT_Dr$8$2$MajFlt_B1,DR9CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR9CT_OprSt_U16;//门操作状态

    bool DR9CT_EDCU1Vld_B1,DR9CT_EDCU2Vld_B1,DR9CT_EDCU3Vld_B1,DR9CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR9CT_EDCU5Vld_B1,DR9CT_EDCU6Vld_B1,DR9CT_EDCU7Vld_B1,DR9CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR9CT_TokenRing_U16,DR9CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR9CT_CanLineBreak_B1,DR9CT_MVBLAT_B1,DR9CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD

    //EDCU10-CCU
    //0x7A0
    bool DR10CT_Dr$8$2$Enable_B1,DR10CT_Dr$8$2$ZeroSpd_B1,DR10CT_Dr$8$2$Opn_B1,DR10CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR10CT_Dr$8$2$Cld_B1,DR10CT_Dr$8$2$OpenObstr_B1,DR10CT_Dr$8$2$SfLpPrt1_B1, DR10CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR10CT_Dr$8$2$CldLck_B1,DR10CT_Dr$8$2$OpnAll_B1,DR10CT_Dr$8$2$EmgUnlock_B1,DR10CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR10CT_Dr$8$2$ReOpnCld_B1,DR10CT_Dr$8$2$CtrlSel_B1,DR10CT_Dr$8$2$MajFlt_B1,DR10CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR10CT_OprSt_U16;//门操作状态

    bool DR10CT_EDCU1Vld_B1,DR10CT_EDCU2Vld_B1,DR10CT_EDCU3Vld_B1,DR10CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR10CT_EDCU5Vld_B1,DR10CT_EDCU6Vld_B1,DR10CT_EDCU7Vld_B1,DR10CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR10CT_TokenRing_U16,DR10CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR10CT_CanLineBreak_B1,DR10CT_MVBLAT_B1,DR10CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD

    //EDCU11-CCU
    //0x7B0
    bool DR11CT_Dr$8$2$Enable_B1,DR11CT_Dr$8$2$ZeroSpd_B1,DR11CT_Dr$8$2$Opn_B1,DR11CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR11CT_Dr$8$2$Cld_B1,DR11CT_Dr$8$2$OpenObstr_B1,DR11CT_Dr$8$2$SfLpPrt1_B1, DR11CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR11CT_Dr$8$2$CldLck_B1,DR11CT_Dr$8$2$OpnAll_B1,DR11CT_Dr$8$2$EmgUnlock_B1,DR11CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR11CT_Dr$8$2$ReOpnCld_B1,DR11CT_Dr$8$2$CtrlSel_B1,DR11CT_Dr$8$2$MajFlt_B1,DR11CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR11CT_OprSt_U16;//门操作状态

    bool DR11CT_EDCU1Vld_B1,DR11CT_EDCU2Vld_B1,DR11CT_EDCU3Vld_B1,DR11CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR11CT_EDCU5Vld_B1,DR11CT_EDCU6Vld_B1,DR11CT_EDCU7Vld_B1,DR11CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR11CT_TokenRing_U16,DR11CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR11CT_CanLineBreak_B1,DR11CT_MVBLAT_B1,DR11CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD


    //EDCU12-CCU
    //0x7C0
    bool DR12CT_Dr$8$2$Enable_B1,DR12CT_Dr$8$2$ZeroSpd_B1,DR12CT_Dr$8$2$Opn_B1,DR12CT_Dr$8$2$IsOpnCls_B1,//门使能反馈	 零速信号反馈	开门信号反馈	门未开到位且未关锁到位
            DR12CT_Dr$8$2$Cld_B1,DR12CT_Dr$8$2$OpenObstr_B1,DR12CT_Dr$8$2$SfLpPrt1_B1, DR12CT_Dr$8$2$SfLpPrt2_B1,//关门信号反馈	关门检测到障碍物	安全回路端口1反馈	安全回路端口2反馈
            DR12CT_Dr$8$2$CldLck_B1,DR12CT_Dr$8$2$OpnAll_B1,DR12CT_Dr$8$2$EmgUnlock_B1,DR12CT_Dr$8$2$CutOut_B1,//门关锁到位	门完全打开	门紧急解锁	门切除
            DR12CT_Dr$8$2$ReOpnCld_B1,DR12CT_Dr$8$2$CtrlSel_B1,DR12CT_Dr$8$2$MajFlt_B1,DR12CT_Dr$8$2$MinFlt_B1;//再开闭信号反馈	网络/硬线选择反馈	门存在严重故障	门存在轻微故障
    unsigned short DR12CT_OprSt_U16;//门操作状态

    bool DR12CT_EDCU1Vld_B1,DR12CT_EDCU2Vld_B1,DR12CT_EDCU3Vld_B1,DR12CT_EDCU4Vld_B1,//EDCU1状态数据有效 EDCU2状态数据有效 EDCU3状态数据有效 EDCU4状态数据有效
            DR12CT_EDCU5Vld_B1,DR12CT_EDCU6Vld_B1,DR12CT_EDCU7Vld_B1,DR12CT_EDCU8Vld_B1;//EDCU5状态数据有效	EDCU6状态数据有效	EDCU7状态数据有效	EDCU8状态数据有效

    unsigned short DR12CT_TokenRing_U16,DR12CT_LfSgn_U16;//门内部总线令牌  MDCU生命信号

    bool DR12CT_CanLineBreak_B1,DR12CT_MVBLAT_B1,DR12CT_MVBRLD_B1;//CAN网络断线事件	LAT	RLD


    //CCU-EDCU
    //0x708
    bool CTDR_OpenLeftDoor1_B1,CTDR_OpenLeftDoor2_B1,CTDR_OpenLeftDoor3_B1,//满足以上条件开左门
    CTDR_OpenRightDoor1_B1,CTDR_OpenRightDoor2_B1,CTDR_OpenRightDoor3_B1;//满足以上条件开右门

    bool CTDR_Tc2CabActive_B1,CTDR_Tc1CabActive_B1,//TC2端司机室占有 TC1端司机室占有
            CTDR_CloseRightDoor1_B1,CTDR_CloseLeftDoor1_B1,//满足以上条件关右门 满足以上条件关左门
            CTDR_ZeroSpeed1_B1;//零速信号
    bool CTDR_OpenRightDoor4_B1,CTDR_OpenRightDoor5_B1,CTDR_OpenRightDoor6_B1,//满足以上条件开右门
            CTDR_OpenLeftDoor4_B1,CTDR_OpenLeftDoor5_B1,CTDR_OpenLeftDoor6_B1;//满足以上条件开左门

    bool CTDR_CloseRightDoor2_B1, CTDR_CloseLeftDoor2_B1,//满足以上条件关右门  满足以上条件关左门
            CTDR_ZeroSpeed2_B1;//零速信号


    //HVAC1-CCU
    //0x910
    unsigned short AC1CT_LifeSignal_U16;//生命信号
    bool AC1CT_VentilatorOn_B1,AC1CT_Condenser1On_B1,AC1CT_Condenser2On_B1,AC1CT_Compressor1On_B1,//通风机工作	冷凝风机1工作	冷凝风机2工作	压缩机1工作
            AC1CT_Compressor2On_B1,AC1CT_Heater1On_B1, AC1CT_Heater2On_B1,AC1CT_Heater3On_B1;//压缩机2工作	电加热1工作	电加热2工作	电加热3工作

    bool AC1CT_Heater4On_B1,AC1CT_AutoHeat_B1,AC1CT_AutoCool_B1,AC1CT_Ventilation_B1,//电加热4工作	自动暖	自动冷	通风
            AC1CT_EmVentilation_B1,AC1CT_HVACStopped_B1,AC1CT_PreCool_B1,AC1CT_PreHeat_B1;//紧急通风	停止	预冷	预暖

    short AC1CT_ReturnAirTemp_I16,AC1CT_RoomTemp1_I16,AC1CT_RoomTemp2_I16,AC1CT_FreshAir1Temp_I16,//空调回风传感器	车厢温度传感器1	车厢温度传感器2	空调新风1传感器
            AC1CT_FreshAir2Temp_I16,AC1CT_OutRoomTemp_I16,AC1CT_TargetTemp_I16;//空调新风2传感器	室外温度	目标温度

    bool AC1CT_SIV1StatusFB_B1,AC1CT_SIV2StatusFB_B1,AC1CT_SIV3StatusFB_B1,AC1CT_SIV4StatusFB_B1,//辅逆1状态反馈	辅逆2状态反馈	辅逆3状态反馈	辅逆4状态反馈
            AC1CT_FreshAirOpen13_B1,AC1CT_FreshAirOpen23_B1,AC1CT_FreshAirOpenFull_B1,AC1CT_FreshAirClosed_B1;//新风阀1/3开	新风阀2/3开	新风阀全开	新风阀关

    bool AC1CT_ReturnAirOpen13_B1,AC1CT_ReturnAirOpen23_B1,AC1CT_ReturnAirOpenFull_B1,AC1CT_ReturnAirClosed_B1;//回风阀1/3开	回风阀2/3开	回风阀全开	回风阀关

    unsigned char AC1CT_SWVersionHighByteX_U8, AC1CT_SWVersionHighByteY_U8;//软件版本号-低位,软件版本号-高位

    bool AC1CT_MVBLAT_B1,AC1CT_MVBRLD_B1;//LAT  RLD

    //HVAC2-CCU
    //0x920
    unsigned short AC2CT_LifeSignal_U16;//生命信号
    bool AC2CT_VentilatorOn_B1,AC2CT_Condenser1On_B1,AC2CT_Condenser2On_B1,AC2CT_Compressor1On_B1,//通风机工作	冷凝风机1工作	冷凝风机2工作	压缩机1工作
            AC2CT_Compressor2On_B1,AC2CT_Heater1On_B1, AC2CT_Heater2On_B1,AC2CT_Heater3On_B1;//压缩机2工作	电加热1工作	电加热2工作	电加热3工作

    bool AC2CT_Heater4On_B1,AC2CT_AutoHeat_B1,AC2CT_AutoCool_B1,AC2CT_Ventilation_B1,//电加热4工作	自动暖	自动冷	通风
            AC2CT_EmVentilation_B1,AC2CT_HVACStopped_B1,AC2CT_PreCool_B1,AC2CT_PreHeat_B1;//紧急通风	停止	预冷	预暖

    short AC2CT_ReturnAirTemp_I16,AC2CT_RoomTemp1_I16,AC2CT_RoomTemp2_I16,AC2CT_FreshAir1Temp_I16,//空调回风传感器	车厢温度传感器1	车厢温度传感器2	空调新风1传感器
            AC2CT_FreshAir2Temp_I16,AC2CT_OutRoomTemp_I16,AC2CT_TargetTemp_I16;//空调新风2传感器	室外温度	目标温度

    bool AC2CT_SIV1StatusFB_B1,AC2CT_SIV2StatusFB_B1,AC2CT_SIV3StatusFB_B1,AC2CT_SIV4StatusFB_B1,//辅逆1状态反馈	辅逆2状态反馈	辅逆3状态反馈	辅逆4状态反馈
            AC2CT_FreshAirOpen13_B1,AC2CT_FreshAirOpen23_B1,AC2CT_FreshAirOpenFull_B1,AC2CT_FreshAirClosed_B1;//新风阀1/3开	新风阀2/3开	新风阀全开	新风阀关

    bool AC2CT_ReturnAirOpen13_B1,AC2CT_ReturnAirOpen23_B1,AC2CT_ReturnAirOpenFull_B1,AC2CT_ReturnAirClosed_B1;//回风阀1/3开	回风阀2/3开	回风阀全开	回风阀关

    unsigned char AC2CT_SWVersionHighByteX_U8, AC2CT_SWVersionHighByteY_U8;//软件版本号-低位,软件版本号-高位

    bool AC2CT_MVBLAT_B1,AC2CT_MVBRLD_B1;//LAT  RLD

    //HVAC3-CCU
    //0x930
    unsigned short AC3CT_LifeSignal_U16;//生命信号
    bool AC3CT_VentilatorOn_B1,AC3CT_Condenser1On_B1,AC3CT_Condenser2On_B1,AC3CT_Compressor1On_B1,//通风机工作	冷凝风机1工作	冷凝风机2工作	压缩机1工作
            AC3CT_Compressor2On_B1,AC3CT_Heater1On_B1, AC3CT_Heater2On_B1,AC3CT_Heater3On_B1;//压缩机2工作	电加热1工作	电加热2工作	电加热3工作

    bool AC3CT_Heater4On_B1,AC3CT_AutoHeat_B1,AC3CT_AutoCool_B1,AC3CT_Ventilation_B1,//电加热4工作	自动暖	自动冷	通风
            AC3CT_EmVentilation_B1,AC3CT_HVACStopped_B1,AC3CT_PreCool_B1,AC3CT_PreHeat_B1;//紧急通风	停止	预冷	预暖

    short AC3CT_ReturnAirTemp_I16,AC3CT_RoomTemp1_I16,AC3CT_RoomTemp2_I16,AC3CT_FreshAir1Temp_I16,//空调回风传感器	车厢温度传感器1	车厢温度传感器2	空调新风1传感器
            AC3CT_FreshAir2Temp_I16,AC3CT_OutRoomTemp_I16,AC3CT_TargetTemp_I16;//空调新风2传感器	室外温度	目标温度

    bool AC3CT_SIV1StatusFB_B1,AC3CT_SIV2StatusFB_B1,AC3CT_SIV3StatusFB_B1,AC3CT_SIV4StatusFB_B1,//辅逆1状态反馈	辅逆2状态反馈	辅逆3状态反馈	辅逆4状态反馈
            AC3CT_FreshAirOpen13_B1,AC3CT_FreshAirOpen23_B1,AC3CT_FreshAirOpenFull_B1,AC3CT_FreshAirClosed_B1;//新风阀1/3开	新风阀2/3开	新风阀全开	新风阀关

    bool AC3CT_ReturnAirOpen13_B1,AC3CT_ReturnAirOpen23_B1,AC3CT_ReturnAirOpenFull_B1,AC3CT_ReturnAirClosed_B1;//回风阀1/3开	回风阀2/3开	回风阀全开	回风阀关

    unsigned char AC3CT_SWVersionHighByteX_U8, AC3CT_SWVersionHighByteY_U8;//软件版本号-低位,软件版本号-高位

    bool AC3CT_MVBLAT_B1,AC3CT_MVBRLD_B1;//LAT  RLD

    //HVAC4-CCU
    //0x940
    unsigned short AC4CT_LifeSignal_U16;//生命信号
    bool AC4CT_VentilatorOn_B1,AC4CT_Condenser1On_B1,AC4CT_Condenser2On_B1,AC4CT_Compressor1On_B1,//通风机工作	冷凝风机1工作	冷凝风机2工作	压缩机1工作
            AC4CT_Compressor2On_B1,AC4CT_Heater1On_B1, AC4CT_Heater2On_B1,AC4CT_Heater3On_B1;//压缩机2工作	电加热1工作	电加热2工作	电加热3工作

    bool AC4CT_Heater4On_B1,AC4CT_AutoHeat_B1,AC4CT_AutoCool_B1,AC4CT_Ventilation_B1,//电加热4工作	自动暖	自动冷	通风
            AC4CT_EmVentilation_B1,AC4CT_HVACStopped_B1,AC4CT_PreCool_B1,AC4CT_PreHeat_B1;//紧急通风	停止	预冷	预暖

    short AC4CT_ReturnAirTemp_I16,AC4CT_RoomTemp1_I16,AC4CT_RoomTemp2_I16,AC4CT_FreshAir1Temp_I16,//空调回风传感器	车厢温度传感器1	车厢温度传感器2	空调新风1传感器
            AC4CT_FreshAir2Temp_I16,AC4CT_OutRoomTemp_I16,AC4CT_TargetTemp_I16;//空调新风2传感器	室外温度	目标温度

    bool AC4CT_SIV1StatusFB_B1,AC4CT_SIV2StatusFB_B1,AC4CT_SIV3StatusFB_B1,AC4CT_SIV4StatusFB_B1,//辅逆1状态反馈	辅逆2状态反馈	辅逆3状态反馈	辅逆4状态反馈
            AC4CT_FreshAirOpen13_B1,AC4CT_FreshAirOpen23_B1,AC4CT_FreshAirOpenFull_B1,AC4CT_FreshAirClosed_B1;//新风阀1/3开	新风阀2/3开	新风阀全开	新风阀关

    bool AC4CT_ReturnAirOpen13_B1,AC4CT_ReturnAirOpen23_B1,AC4CT_ReturnAirOpenFull_B1,AC4CT_ReturnAirClosed_B1;//回风阀1/3开	回风阀2/3开	回风阀全开	回风阀关

    unsigned char AC4CT_SWVersionHighByteX_U8, AC4CT_SWVersionHighByteY_U8;//软件版本号-低位,软件版本号-高位

    bool AC4CT_MVBLAT_B1,AC4CT_MVBRLD_B1;//LAT  RLD


    //HVAC5-CCU
    //0x950
    unsigned short AC5CT_LifeSignal_U16;//生命信号
    bool AC5CT_VentilatorOn_B1,AC5CT_Condenser1On_B1,AC5CT_Condenser2On_B1,AC5CT_Compressor1On_B1,//通风机工作	冷凝风机1工作	冷凝风机2工作	压缩机1工作
            AC5CT_Compressor2On_B1,AC5CT_Heater1On_B1, AC5CT_Heater2On_B1,AC5CT_Heater3On_B1;//压缩机2工作	电加热1工作	电加热2工作	电加热3工作

    bool AC5CT_Heater4On_B1,AC5CT_AutoHeat_B1,AC5CT_AutoCool_B1,AC5CT_Ventilation_B1,//电加热4工作	自动暖	自动冷	通风
            AC5CT_EmVentilation_B1,AC5CT_HVACStopped_B1,AC5CT_PreCool_B1,AC5CT_PreHeat_B1;//紧急通风	停止	预冷	预暖

    short AC5CT_ReturnAirTemp_I16,AC5CT_RoomTemp1_I16,AC5CT_RoomTemp2_I16,AC5CT_FreshAir1Temp_I16,//空调回风传感器	车厢温度传感器1	车厢温度传感器2	空调新风1传感器
            AC5CT_FreshAir2Temp_I16,AC5CT_OutRoomTemp_I16,AC5CT_TargetTemp_I16;//空调新风2传感器	室外温度	目标温度

    bool AC5CT_SIV1StatusFB_B1,AC5CT_SIV2StatusFB_B1,AC5CT_SIV3StatusFB_B1,AC5CT_SIV4StatusFB_B1,//辅逆1状态反馈	辅逆2状态反馈	辅逆3状态反馈	辅逆4状态反馈
            AC5CT_FreshAirOpen13_B1,AC5CT_FreshAirOpen23_B1,AC5CT_FreshAirOpenFull_B1,AC5CT_FreshAirClosed_B1;//新风阀1/3开	新风阀2/3开	新风阀全开	新风阀关

    bool AC5CT_ReturnAirOpen13_B1,AC5CT_ReturnAirOpen23_B1,AC5CT_ReturnAirOpenFull_B1,AC5CT_ReturnAirClosed_B1;//回风阀1/3开	回风阀2/3开	回风阀全开	回风阀关

    unsigned char AC5CT_SWVersionHighByteX_U8, AC5CT_SWVersionHighByteY_U8;//软件版本号-低位,软件版本号-高位

    bool AC5CT_MVBLAT_B1,AC5CT_MVBRLD_B1;//LAT  RLD

    //HVAC6-CCU
    //0x960
    unsigned short AC6CT_LifeSignal_U16;//生命信号
    bool AC6CT_VentilatorOn_B1,AC6CT_Condenser1On_B1,AC6CT_Condenser2On_B1,AC6CT_Compressor1On_B1,//通风机工作	冷凝风机1工作	冷凝风机2工作	压缩机1工作
            AC6CT_Compressor2On_B1,AC6CT_Heater1On_B1, AC6CT_Heater2On_B1,AC6CT_Heater3On_B1;//压缩机2工作	电加热1工作	电加热2工作	电加热3工作

    bool AC6CT_Heater4On_B1,AC6CT_AutoHeat_B1,AC6CT_AutoCool_B1,AC6CT_Ventilation_B1,//电加热4工作	自动暖	自动冷	通风
            AC6CT_EmVentilation_B1,AC6CT_HVACStopped_B1,AC6CT_PreCool_B1,AC6CT_PreHeat_B1;//紧急通风	停止	预冷	预暖

    short AC6CT_ReturnAirTemp_I16,AC6CT_RoomTemp1_I16,AC6CT_RoomTemp2_I16,AC6CT_FreshAir1Temp_I16,//空调回风传感器	车厢温度传感器1	车厢温度传感器2	空调新风1传感器
            AC6CT_FreshAir2Temp_I16,AC6CT_OutRoomTemp_I16,AC6CT_TargetTemp_I16;//空调新风2传感器	室外温度	目标温度

    bool AC6CT_SIV1StatusFB_B1,AC6CT_SIV2StatusFB_B1,AC6CT_SIV3StatusFB_B1,AC6CT_SIV4StatusFB_B1,//辅逆1状态反馈	辅逆2状态反馈	辅逆3状态反馈	辅逆4状态反馈
            AC6CT_FreshAirOpen13_B1,AC6CT_FreshAirOpen23_B1,AC6CT_FreshAirOpenFull_B1,AC6CT_FreshAirClosed_B1;//新风阀1/3开	新风阀2/3开	新风阀全开	新风阀关

    bool AC6CT_ReturnAirOpen13_B1,AC6CT_ReturnAirOpen23_B1,AC6CT_ReturnAirOpenFull_B1,AC6CT_ReturnAirClosed_B1;//回风阀1/3开	回风阀2/3开	回风阀全开	回风阀关

    unsigned char AC6CT_SWVersionHighByteX_U8, AC6CT_SWVersionHighByteY_U8;//软件版本号-低位,软件版本号-高位

    bool AC6CT_MVBLAT_B1,AC6CT_MVBRLD_B1;//LAT  RLD


    //CCU-HVAC1
    //0x918
    bool CTAC1_AutoHeat_B1,CTAC1_AutoCool_B1,CTAC1_Ventilation_B1,CTAC1_HVACStop_B1,//自动暖信号	自动冷信号	通风信号	停机信号
            CTAC1_EmergencyVentilation_B1,CTAC1_SIV1Status_B1,CTAC1_SIV2Status_B1,CTAC1_SIV3Status_B1;//紧急通风信号	辅逆1状态信号	辅逆2状态信号	辅逆3状态信号

    bool CTAC1_SIV4Status_B1,CTAC1_TempAdd0_B1, CTAC1_TempAdd0Point5_B1,//辅逆4状态信号	设定温度调整0℃	设定温度调整+0.5℃
            CTAC1_TempAdd1_B1,CTAC1_TempAdd1Point5_B1,CTAC1_TempAdd2_B1,CTAC1_TempAdd2Point5_B1;//设定温度调整+1℃	设定温度调整+1.5℃	设定温度调整+2℃	设定温度调整+2.5℃

    bool CTAC1_TempReduce0Point5_B1, CTAC1_TempReduce1_B1,CTAC1_TempReduce1Point5_B1,CTAC1_TempReduce2_B1,//设定温度调整-0.5℃	设定温度调整-1℃	设定温度调整-1.5℃	设定温度调整-2℃
            CTAC1_TempReduce2Point5_B1;//设定温度调整-2.5℃

    unsigned short CTAC1_LoadHighByte_U16,CTAC1_LoadLowByte_U16;//列车载荷量（低字）,列车载荷量（高字）

    //CCU-HVAC2
    //0x928
    bool CTAC2_AutoHeat_B1,CTAC2_AutoCool_B1,CTAC2_Ventilation_B1,CTAC2_HVACStop_B1,//自动暖信号	自动冷信号	通风信号	停机信号
            CTAC2_EmergencyVentilation_B1,CTAC2_SIV1Status_B1,CTAC2_SIV2Status_B1,CTAC2_SIV3Status_B1;//紧急通风信号	辅逆1状态信号	辅逆2状态信号	辅逆3状态信号

    bool CTAC2_SIV4Status_B1,CTAC2_TempAdd0_B1, CTAC2_TempAdd0Point5_B1,//辅逆4状态信号	设定温度调整0℃	设定温度调整+0.5℃
            CTAC2_TempAdd1_B1,CTAC2_TempAdd1Point5_B1,CTAC2_TempAdd2_B1,CTAC2_TempAdd2Point5_B1;//设定温度调整+1℃	设定温度调整+1.5℃	设定温度调整+2℃	设定温度调整+2.5℃

    bool CTAC2_TempReduce0Point5_B1, CTAC2_TempReduce1_B1,CTAC2_TempReduce1Point5_B1,CTAC2_TempReduce2_B1,//设定温度调整-0.5℃	设定温度调整-1℃	设定温度调整-1.5℃	设定温度调整-2℃
            CTAC2_TempReduce2Point5_B1;//设定温度调整-2.5℃

    unsigned short CTAC2_LoadHighByte_U16,CTAC2_LoadLowByte_U16;//列车载荷量（低字）,列车载荷量（高字）

    //CCU-HVAC3
    //0x938
    bool CTAC3_AutoHeat_B1,CTAC3_AutoCool_B1,CTAC3_Ventilation_B1,CTAC3_HVACStop_B1,//自动暖信号	自动冷信号	通风信号	停机信号
            CTAC3_EmergencyVentilation_B1,CTAC3_SIV1Status_B1,CTAC3_SIV2Status_B1,CTAC3_SIV3Status_B1;//紧急通风信号	辅逆1状态信号	辅逆2状态信号	辅逆3状态信号

    bool CTAC3_SIV4Status_B1,CTAC3_TempAdd0_B1, CTAC3_TempAdd0Point5_B1,//辅逆4状态信号	设定温度调整0℃	设定温度调整+0.5℃
            CTAC3_TempAdd1_B1,CTAC3_TempAdd1Point5_B1,CTAC3_TempAdd2_B1,CTAC3_TempAdd2Point5_B1;//设定温度调整+1℃	设定温度调整+1.5℃	设定温度调整+2℃	设定温度调整+2.5℃

    bool CTAC3_TempReduce0Point5_B1, CTAC3_TempReduce1_B1,CTAC3_TempReduce1Point5_B1,CTAC3_TempReduce2_B1,//设定温度调整-0.5℃	设定温度调整-1℃	设定温度调整-1.5℃	设定温度调整-2℃
            CTAC3_TempReduce2Point5_B1;//设定温度调整-2.5℃

    unsigned short CTAC3_LoadHighByte_U16,CTAC3_LoadLowByte_U16;//列车载荷量（低字）,列车载荷量（高字）

    //CCU-HVAC4
    //0x948
    bool CTAC4_AutoHeat_B1,CTAC4_AutoCool_B1,CTAC4_Ventilation_B1,CTAC4_HVACStop_B1,//自动暖信号	自动冷信号	通风信号	停机信号
            CTAC4_EmergencyVentilation_B1,CTAC4_SIV1Status_B1,CTAC4_SIV2Status_B1,CTAC4_SIV3Status_B1;//紧急通风信号	辅逆1状态信号	辅逆2状态信号	辅逆3状态信号

    bool CTAC4_SIV4Status_B1,CTAC4_TempAdd0_B1, CTAC4_TempAdd0Point5_B1,//辅逆4状态信号	设定温度调整0℃	设定温度调整+0.5℃
            CTAC4_TempAdd1_B1,CTAC4_TempAdd1Point5_B1,CTAC4_TempAdd2_B1,CTAC4_TempAdd2Point5_B1;//设定温度调整+1℃	设定温度调整+1.5℃	设定温度调整+2℃	设定温度调整+2.5℃

    bool CTAC4_TempReduce0Point5_B1, CTAC4_TempReduce1_B1,CTAC4_TempReduce1Point5_B1,CTAC4_TempReduce2_B1,//设定温度调整-0.5℃	设定温度调整-1℃	设定温度调整-1.5℃	设定温度调整-2℃
            CTAC4_TempReduce2Point5_B1;//设定温度调整-2.5℃

    unsigned short CTAC4_LoadHighByte_U16,CTAC4_LoadLowByte_U16;//列车载荷量（低字）,列车载荷量（高字）

    //CCU-HVAC5
    //0x958
    bool CTAC5_AutoHeat_B1,CTAC5_AutoCool_B1,CTAC5_Ventilation_B1,CTAC5_HVACStop_B1,//自动暖信号	自动冷信号	通风信号	停机信号
            CTAC5_EmergencyVentilation_B1,CTAC5_SIV1Status_B1,CTAC5_SIV2Status_B1,CTAC5_SIV3Status_B1;//紧急通风信号	辅逆1状态信号	辅逆2状态信号	辅逆3状态信号

    bool CTAC5_SIV4Status_B1,CTAC5_TempAdd0_B1, CTAC5_TempAdd0Point5_B1,//辅逆4状态信号	设定温度调整0℃	设定温度调整+0.5℃
            CTAC5_TempAdd1_B1,CTAC5_TempAdd1Point5_B1,CTAC5_TempAdd2_B1,CTAC5_TempAdd2Point5_B1;//设定温度调整+1℃	设定温度调整+1.5℃	设定温度调整+2℃	设定温度调整+2.5℃

    bool CTAC5_TempReduce0Point5_B1, CTAC5_TempReduce1_B1,CTAC5_TempReduce1Point5_B1,CTAC5_TempReduce2_B1,//设定温度调整-0.5℃	设定温度调整-1℃	设定温度调整-1.5℃	设定温度调整-2℃
            CTAC5_TempReduce2Point5_B1;//设定温度调整-2.5℃

    unsigned short CTAC5_LoadHighByte_U16,CTAC5_LoadLowByte_U16;//列车载荷量（低字）,列车载荷量（高字）

    //CCU-HVAC6
    //0x968
    bool CTAC6_AutoHeat_B1,CTAC6_AutoCool_B1,CTAC6_Ventilation_B1,CTAC6_HVACStop_B1,//自动暖信号	自动冷信号	通风信号	停机信号
            CTAC6_EmergencyVentilation_B1,CTAC6_SIV1Status_B1,CTAC6_SIV2Status_B1,CTAC6_SIV3Status_B1;//紧急通风信号	辅逆1状态信号	辅逆2状态信号	辅逆3状态信号

    bool CTAC6_SIV4Status_B1,CTAC6_TempAdd0_B1, CTAC6_TempAdd0Point5_B1,//辅逆4状态信号	设定温度调整0℃	设定温度调整+0.5℃
            CTAC6_TempAdd1_B1,CTAC6_TempAdd1Point5_B1,CTAC6_TempAdd2_B1,CTAC6_TempAdd2Point5_B1;//设定温度调整+1℃	设定温度调整+1.5℃	设定温度调整+2℃	设定温度调整+2.5℃

    bool CTAC6_TempReduce0Point5_B1, CTAC6_TempReduce1_B1,CTAC6_TempReduce1Point5_B1,CTAC6_TempReduce2_B1,//设定温度调整-0.5℃	设定温度调整-1℃	设定温度调整-1.5℃	设定温度调整-2℃
            CTAC6_TempReduce2Point5_B1;//设定温度调整-2.5℃

    unsigned short CTAC6_LoadHighByte_U16,CTAC6_LoadLowByte_U16;//列车载荷量（低字）,列车载荷量（高字）



    //ATC1-CCU
    //0xA10
    unsigned char AT1CT_SN1_U8,AT1CT_ATODOORCMD_U8,AT1CT_DOORTYPE_U8,AT1CT_TAB_U8,//序列号/生命信号	ATO门控指令	门控方式	VOBC牵引制动动作
            AT1CT_OPERATIONMODE_U8,AT1CT_CTRLSTATE_U8,AT1CT_STATE_U8,AT1CT_VOBCSPEED_U16,//VOBC运行模式	VOBC切除状态	VOBC故障状态	VOBC速度
            AT1CT_AUTOREVERSE_U8,AT1CT_VOBCLOC_U8;//无人折返状态	VOBC控制端

    bool AT1CT_MVBLAT_B1,AT1CT_MVBRLD_B1;//LAT  RLD

    bool AT1CT_DataValidbit15_B1,AT1CT_DataValidbit14_B1,AT1CT_DataValidbit13_B1,AT1CT_DataValidbit12_B1,//数据有效性：	数据有效性：	数据有效性：	数据有效性：广播测试信号
            AT1CT_DataValidbit11_B1,AT1CT_DataValidbit10_B1, AT1CT_DataValidbit9_B1,AT1CT_DataValidbit8_B1;//数据有效性：时间-秒	数据有效性：时间-分	数据有效性：时间-时	数据有效性：日期-日

    bool AT1CT_DataValidbit7_B1,AT1CT_DataValidbit6_B1,AT1CT_DataValidbit5_B1,AT1CT_DataValidbit4_B1,//数据有效性：日期-月	数据有效性：日期-年	数据有效性：起始距离	数据有效性：目标距离
            AT1CT_DataValidbit3_B1,AT1CT_DataValidbit2_B1,AT1CT_DataValidbit1_B1,AT1CT_DataValidbit0_B1;//数据有效性：当前站ID	数据有效性：下一站ID	数据有效性：终点站ID	数据有效性：下一站车门打开侧

    unsigned char AT1CT_SN2_U8,AT1CT_NEXTDOORDIR_U8;//序列号  下一站车门打开侧

    unsigned int  AT1CT_DESCODE_U32,AT1CT_NEXTSTATIONID_U32,AT1CT_CURRENTSTATIONID_U32;//终点站ID    下一站ID	当前站ID

    unsigned short AT1CT_TARGETDIS_U16, AT1CT_STARTINGDIS_U16;//目标距离	起始距离

    unsigned char AT1CT_YEAR_U8,AT1CT_MONTH_U8, AT1CT_DAY_U8, AT1CT_HOUR_U8,//日期-年	日期-月	日期-日	时间-时
            AT1CT_MINUTE_U8,AT1CT_SECOND_U8,AT1CT_PATEST_U8;//时间-分	时间-秒	广播测试信号

    //ATC2-CCU
    //0xA20
    unsigned char AT2CT_SN1_U8,AT2CT_ATODOORCMD_U8,AT2CT_DOORTYPE_U8,AT2CT_TAB_U8,//序列号/生命信号	ATO门控指令	门控方式	VOBC牵引制动动作
            AT2CT_OPERATIONMODE_U8,AT2CT_CTRLSTATE_U8,AT2CT_STATE_U8,AT2CT_VOBCSPEED_U16,//VOBC运行模式	VOBC切除状态	VOBC故障状态	VOBC速度
            AT2CT_AUTOREVERSE_U8,AT2CT_VOBCLOC_U8;//无人折返状态	VOBC控制端

    bool AT2CT_MVBLAT_B1,AT2CT_MVBRLD_B1;//LAT  RLD

    bool AT2CT_DataValidbit15_B1,AT2CT_DataValidbit14_B1,AT2CT_DataValidbit13_B1,AT2CT_DataValidbit12_B1,//数据有效性：	数据有效性：	数据有效性：	数据有效性：广播测试信号
            AT2CT_DataValidbit11_B1,AT2CT_DataValidbit10_B1, AT2CT_DataValidbit9_B1,AT2CT_DataValidbit8_B1;//数据有效性：时间-秒	数据有效性：时间-分	数据有效性：时间-时	数据有效性：日期-日

    bool AT2CT_DataValidbit7_B1,AT2CT_DataValidbit6_B1,AT2CT_DataValidbit5_B1,AT2CT_DataValidbit4_B1,//数据有效性：日期-月	数据有效性：日期-年	数据有效性：起始距离	数据有效性：目标距离
            AT2CT_DataValidbit3_B1,AT2CT_DataValidbit2_B1,AT2CT_DataValidbit1_B1,AT2CT_DataValidbit0_B1;//数据有效性：当前站ID	数据有效性：下一站ID	数据有效性：终点站ID	数据有效性：下一站车门打开侧

    unsigned char AT2CT_SN2_U8,AT2CT_NEXTDOORDIR_U8;//序列号  下一站车门打开侧

    unsigned int  AT2CT_DESCODE_U32,AT2CT_NEXTSTATIONID_U32,AT2CT_CURRENTSTATIONID_U32;//终点站ID    下一站ID	当前站ID

    unsigned short AT2CT_TARGETDIS_U16, AT2CT_STARTINGDIS_U16;//目标距离	起始距离

    unsigned char AT2CT_YEAR_U8,AT2CT_MONTH_U8, AT2CT_DAY_U8, AT2CT_HOUR_U8,//日期-年	日期-月	日期-日	时间-时
            AT2CT_MINUTE_U8,AT2CT_SECOND_U8,AT2CT_PATEST_U8;//时间-分	时间-秒	广播测试信号

    //CCU-ATC
    //0xA08
    unsigned short CTAT_TRAINSAFECTRL_U16;//用于开端转换
    unsigned char CTAT_DOORBUTTON_U8,CTAT_RATE_LIMITINGFAULT_U8;//车门控制按钮和锁闭状态  整车空气制动切除数量
    unsigned short CTAT_TRAINLOAD_U16;//列车载荷
    unsigned char CTAT_SERVISEBRAKEFAULT_U8,CTAT_SLIPSTATE_U8;//常用制动系统（空气）故障  空转/打滑状态
    unsigned short CTAT_NETVOL_U16, CTAT_NETCURRENT_U16;//网压 ,网流
    unsigned char CTAT_TABSTATE_U8,CTAT_DOORENABLE_U8;//车辆硬线牵引/制动指令,开门使能反馈
    unsigned short CTAT_TOTALBRAKE_U16, CTAT_ELECTRICBRAKE_U16;//空气制动力,电制动力
    unsigned short CTAT_ATOCURRENTOUTPUT_U16;//ATO输出模拟量反馈
    unsigned char CTAT_PATESTFEEDBACK_U8, CTAT_AtoOutputFeedback_U8, CTAT_MANZAI_U8;//信号广播测试信号反馈, ATO输出开关量反馈,  乘客满载率
    unsigned int CTAT_TOTALDIS_U32;//列车行驶的里程总数
    unsigned int  CTAT_DESCODEFEEDBACK_U32,CTAT_NEXTSTATIONIDFEEDBACK_U32,CTAT_CURRENTSTATIONIDFEEDBACK_U32;//信号终点站ID反馈	信号下一站ID反馈	信号当前站ID反馈
    unsigned char CTAT_NEXTSTATIONDOORDIRFEEDBACK_U8;//信号下一站开门侧反馈

    //PIS1-CCU
    //0xB10
    unsigned char PA1CT_LfSgn_U8, PA1CT_CCULifeSgn_U8;//生命信号  CCU生命信号反馈

    unsigned short PA1CT_EndSttnID_U16,PA1CT_CurrntSttnID_U16,PA1CT_NxtSttnID_U16;//终点站  当前站  下一站

    unsigned char PA1CT_SWVrsn_U8,PA1CT_PIDSOprtnMd_U8,PA1CT_RadioStt_U8,PA1CT_CabAnswerPECUNum_B1;//PIS软件版本号X.Y  工作模式  当前广播状态   司机当前紧急通话的乘客紧急报警的单元号

    bool PA1CT_TC1PECU1Alarm_B1,PA1CT_TC1PECU2Alarm_B1,PA1CT_Mp1PECU1Alarm_B1, PA1CT_Mp1PECU2Alarm_B1,//1车PECU1紧急报警	1车PECU2紧急报警	2车PECU1紧急报警	2车PECU2紧急报警
            PA1CT_M1PECU1Alarm_B1, PA1CT_M1PECU2Alarm_B1,PA1CT_Mp2PECU1Alarm_B1,PA1CT_Mp2PECU2Alarm_B1;//3车PECU1紧急报警	3车PECU2紧急报警	4车PECU1紧急报警	4车PECU2紧急报警

    bool PA1CT_M2PECU1Alarm_B1,PA1CT_M2PECU2Alarm_B1,PA1CT_M3PECU1Alarm_B1, PA1CT_M3PECU2Alarm_B1;//5车PECU1紧急报警	5车PECU2紧急报警	6车PECU1紧急报警	6车PECU2紧急报警

    bool PA1CT_PIDS1SgnlVld_B1,PA1CT_PIDS2SgnlVld_B1,PA1CT_PIDS3SgnlVld_B1, PA1CT_PIDS4SgnlVld_B1,//1车客室主机故障,2车客室主机故障,3车客室主机故障, 4车客室主机故障
            PA1CT_PIDS5SgnlVld_B1, PA1CT_PIDS6SgnlVld_B1;//5车客室主机故障	6车客室主机故障

    bool PA1CT_PECU1Fault_B1,PA1CT_PECU2Fault_B1,PA1CT_PECU3Fault_B1,PA1CT_PECU4Fault_B1,//乘客紧急报警单元1故障	乘客紧急报警单元2故障	乘客紧急报警单元3故障	乘客紧急报警单元4故障
            PA1CT_PECU5Fault_B1,PA1CT_PECU6Fault_B1,PA1CT_PECU7Fault_B1,PA1CT_PECU8Fault_B1;//乘客紧急报警单元5故障	乘客紧急报警单元6故障	乘客紧急报警单元7故障	乘客紧急报警单元8故障

    bool PA1CT_PECU9Fault_B1,PA1CT_PECU10Fault_B1,PA1CT_PECU11Fault_B1,PA1CT_PECU12Fault_B1;//乘客紧急报警单元9故障	乘客紧急报警单元10故障	乘客紧急报警单元11故障	乘客紧急报警单元12故障

    unsigned char PA1CT_LocationFB_U8,PA1CT_HMI_U8;//收到ATC位置信息实时反馈 HMI操作反馈

    bool PA1CT_PATestFB_B1,PA1CT_ABDrOpenAFB_B1,PA1CT_ABDrOpenBFB_B1,PA1CT_MVBLAT_B1,//ATC广播测试信号实时反馈	下一站开双侧门，且先开A侧门信号实时反馈	下一站开双侧门，且先开B侧门信号实时反馈	LAT
            PA1CT_MVBRLD_B1,PA1CT_Tc1Active_B1, PA1CT_Tc2Active_B1;//RLD   Tc1车司机室激活   Tc2车司机室激活

    bool PA1CT_CabToCab_B1, PA1CT_CabToPssngr_B1;//司机间通话    司机与乘客通话


    //PIS2-CCU
    //0xB20
    unsigned char PA2CT_LfSgn_U8, PA2CT_CCULifeSgn_U8;//生命信号  CCU生命信号反馈

    unsigned short PA2CT_EndSttnID_U16,PA2CT_CurrntSttnID_U16,PA2CT_NxtSttnID_U16;//终点站  当前站  下一站

    unsigned char PA2CT_SWVrsn_U8,PA2CT_PIDSOprtnMd_U8,PA2CT_RadioStt_U8,PA2CT_CabAnswerPECUNum_B1;//PIS软件版本号X.Y  工作模式  当前广播状态   司机当前紧急通话的乘客紧急报警的单元号

    bool PA2CT_TC1PECU1Alarm_B1,PA2CT_TC1PECU2Alarm_B1,PA2CT_Mp1PECU1Alarm_B1, PA2CT_Mp1PECU2Alarm_B1,//1车PECU1紧急报警	1车PECU2紧急报警	2车PECU1紧急报警	2车PECU2紧急报警
            PA2CT_M1PECU1Alarm_B1, PA2CT_M1PECU2Alarm_B1,PA2CT_Mp2PECU1Alarm_B1,PA2CT_Mp2PECU2Alarm_B1;//3车PECU1紧急报警	3车PECU2紧急报警	4车PECU1紧急报警	4车PECU2紧急报警

    bool PA2CT_M2PECU1Alarm_B1,PA2CT_M2PECU2Alarm_B1,PA2CT_M3PECU1Alarm_B1, PA2CT_M3PECU2Alarm_B1;//5车PECU1紧急报警	5车PECU2紧急报警	6车PECU1紧急报警	6车PECU2紧急报警

    bool PA2CT_PIDS1SgnlVld_B1,PA2CT_PIDS2SgnlVld_B1,PA2CT_PIDS3SgnlVld_B1, PA2CT_PIDS4SgnlVld_B1,//1车客室主机故障,2车客室主机故障,3车客室主机故障, 4车客室主机故障
            PA2CT_PIDS5SgnlVld_B1, PA2CT_PIDS6SgnlVld_B1;//5车客室主机故障	6车客室主机故障

    bool PA2CT_PECU1Fault_B1,PA2CT_PECU2Fault_B1,PA2CT_PECU3Fault_B1,PA2CT_PECU4Fault_B1,//乘客紧急报警单元1故障	乘客紧急报警单元2故障	乘客紧急报警单元3故障	乘客紧急报警单元4故障
            PA2CT_PECU5Fault_B1,PA2CT_PECU6Fault_B1,PA2CT_PECU7Fault_B1,PA2CT_PECU8Fault_B1;//乘客紧急报警单元5故障	乘客紧急报警单元6故障	乘客紧急报警单元7故障	乘客紧急报警单元8故障

    bool PA2CT_PECU9Fault_B1,PA2CT_PECU10Fault_B1,PA2CT_PECU11Fault_B1,PA2CT_PECU12Fault_B1;//乘客紧急报警单元9故障	乘客紧急报警单元10故障	乘客紧急报警单元11故障	乘客紧急报警单元12故障

    unsigned char PA2CT_LocationFB_U8,PA2CT_HMI_U8;//收到ATC位置信息实时反馈 HMI操作反馈

    bool PA2CT_PATestFB_B1,PA2CT_ABDrOpenAFB_B1,PA2CT_ABDrOpenBFB_B1,PA2CT_MVBLAT_B1,//ATC广播测试信号实时反馈	下一站开双侧门，且先开A侧门信号实时反馈	下一站开双侧门，且先开B侧门信号实时反馈	LAT
            PA2CT_MVBRLD_B1,PA2CT_Tc1Active_B1, PA2CT_Tc2Active_B1;//RLD   Tc1车司机室激活   Tc2车司机室激活

    bool PA2CT_CabToCab_B1, PA2CT_CabToPssngr_B1;//司机间通话    司机与乘客通话


    //CCU-PIS
    //0xB08
    unsigned int CTPA_CrrntPNO_U32,CTPA_NextPNO_U32,CTPA_DstntnPNO_U32;//当前站编码	下一站编码	目的（终点）站编码

    unsigned short CTPA_TARGETDIS_U16,CTPA_STARTINGDIS_U16;//目标距离   起始距离

    unsigned char CTPA_CTRLSTATE_U8, CTPA_STATE_U8,CTPA_ATCOnline_U8;//VOBC切除状态	VOBC故障状态	VOBC在线状态

    bool CTPA_NPSideADrOpn_B1,CTPA_NPSideBDrOpn_B1,CTPA_ABDrOpenA_B1,CTPA_ABDrOpenB_B1,//下一站开A侧门	下一站开B侧门	下一站开双侧门，且先开A侧门	下一站开双侧门，且先开B侧门
            CTPA_AllDrClsd_B1,CTPA_DrOpnd_B1,CTPA_AMMode_B1,CTPA_CMMode_B1;//所有门关闭并锁到位	门开到位	AM模式（自动驾驶模式）	CM模式（人工驾驶模式）

    bool CTPA_RMMode_B1,CTPA_AutoReverse_B1, CTPA_PATest_B1, CTPA_Tc1Active_B1,//RM模式（受限制的人工驾驶模式）	无人折返模式	广播测试信号	TC1车激活
            CTPA_Tc2Active_B1,CTPA_OpenLeft_B1,CTPA_OpenRight_B1;//TC2车激活	开左门指令	开右门指令

    bool CTPA_EEDIsActvtdTc1Dr1_B1,CTPA_EEDIsActvtdTc1Dr2_B1,CTPA_EEDIsActvtdTc1Dr3_B1,CTPA_EEDIsActvtdTc1Dr4_B1,//Tc1-1门紧急解锁	Tc1-2门紧急解锁	Tc1-3门紧急解锁	Tc1-4门紧急解锁
            CTPA_EEDIsActvtdTc1Dr5_B1, CTPA_EEDIsActvtdTc1Dr6_B1,CTPA_EEDIsActvtdTc1Dr7_B1,CTPA_EEDIsActvtdTc1Dr8_B1;//Tc1-5门紧急解锁	Tc1-6门紧急解锁	Tc1-7门紧急解锁	Tc1-8门紧急解锁

    bool CTPA_EEDIsActvtdMp1Dr1_B1, CTPA_EEDIsActvtdMp1Dr2_B1,CTPA_EEDIsActvtdMp1Dr3_B1, CTPA_EEDIsActvtdMp1Dr4_B1,//Mp1-1门紧急解锁	Mp1-2门紧急解锁	Mp1-3门紧急解锁	Mp1-4门紧急解锁
            CTPA_EEDIsActvtdMp1Dr5_B1,CTPA_EEDIsActvtdMp1Dr6_B1, CTPA_EEDIsActvtdMp1Dr7_B1,CTPA_EEDIsActvtdMp1Dr8_B1;//Mp1-5门紧急解锁	Mp1-6门紧急解锁	Mp1-7门紧急解锁	Mp1-8门紧急解锁

    bool CTPA_EEDIsActvtdM1Dr1_B1, CTPA_EEDIsActvtdM1Dr2_B1,CTPA_EEDIsActvtdM1Dr3_B1,CTPA_EEDIsActvtdM1Dr4_B1,//M1-1门紧急解锁	M1-2门紧急解锁	M1-3门紧急解锁	M1-4门紧急解锁
            CTPA_EEDIsActvtdM1Dr5_B1, CTPA_EEDIsActvtdM1Dr6_B1,CTPA_EEDIsActvtdM1Dr7_B1,CTPA_EEDIsActvtdM1Dr8_B1;//M1-5门紧急解锁	M1-6门紧急解锁	M1-7门紧急解锁	M1-8门紧急解锁

    bool CTPA_EEDIsActvtdM2Dr1_B1,CTPA_EEDIsActvtdM2Dr2_B1,CTPA_EEDIsActvtdM2Dr3_B1,CTPA_EEDIsActvtdM2Dr4_B1,//M2-1门紧急解锁	M2-2门紧急解锁	M2-3门紧急解锁	M2-4门紧急解锁
            CTPA_EEDIsActvtdM2Dr5_B1,CTPA_EEDIsActvtdM2Dr6_B1,CTPA_EEDIsActvtdM2Dr7_B1, CTPA_EEDIsActvtdM2Dr8_B1;//M2-5门紧急解锁	M2-6门紧急解锁	M2-7门紧急解锁	M2-8门紧急解锁

    bool CTPA_EEDIsActvtdMp2Dr1_B1,CTPA_EEDIsActvtdMp2Dr2_B1,CTPA_EEDIsActvtdMp2Dr3_B1,CTPA_EEDIsActvtdMp2Dr4_B1,//Mp2-1门紧急解锁	Mp2-2门紧急解锁	Mp2-3门紧急解锁	Mp2-4门紧急解锁
            CTPA_EEDIsActvtdMp2Dr5_B1, CTPA_EEDIsActvtdMp2Dr6_B1,CTPA_EEDIsActvtdMp2Dr7_B1,CTPA_EEDIsActvtdMp2Dr8_B1;//Mp2-5门紧急解锁	Mp2-6门紧急解锁	Mp2-7门紧急解锁	Mp2-8门紧急解锁

    bool CTPA_EEDIsActvtdTc2Dr1_B1,CTPA_EEDIsActvtdTc2Dr2_B1,CTPA_EEDIsActvtdTc2Dr3_B1,CTPA_EEDIsActvtdTc2Dr4_B1,//Tc2-1门紧急解锁	Tc2-2门紧急解锁	Tc2-3门紧急解锁	Tc2-4门紧急解锁
            CTPA_EEDIsActvtdTc2Dr5_B1,CTPA_EEDIsActvtdTc2Dr6_B1,CTPA_EEDIsActvtdTc2Dr7_B1,CTPA_EEDIsActvtdTc2Dr8_B1;//Tc2-5门紧急解锁	Tc2-6门紧急解锁	Tc2-7门紧急解锁	Tc2-8门紧急解锁

    bool CTPA_Tc1Fire1_B1, CTPA_Tc1Fire2_B1, CTPA_Tc1Fire3_B1,CTPA_Tc1Fire4_B1,//TC1车火警1	TC1车火警2	TC1车火警3	TC1车火警4
            CTPA_Tc1Fire5_B1, CTPA_Tc1Fire6_B1, CTPA_Mp1Fire1_B1,CTPA_Mp1Fire2_B1;//TC1车火警5	TC1车火警6	MP1车火警1	MP1车火警2

    bool CTPA_Mp1Fire3_B1,CTPA_Mp1Fire4_B1,CTPA_M1Fire1_B1,CTPA_M1Fire2_B1,//MP1车火警3	MP1车火警4	M1车火警1	M1车火警2
            CTPA_M1Fire3_B1, CTPA_M1Fire4_B1,CTPA_M2Fire1_B1, CTPA_M2Fire2_B1;//M1车火警3	M1车火警4	M2车火警1	M2车火警2

    bool CTPA_M2Fire3_B1,CTPA_M2Fire4_B1,CTPA_Mp2Fire1_B1,CTPA_Mp2Fire2_B1,//M2车火警3	M2车火警4	MP2车火警1	MP2车火警2
            CTPA_Mp2Fire3_B1,CTPA_Mp2Fire4_B1,CTPA_Tc2Fire1_B1,CTPA_Tc2Fire2_B1;//MP2车火警3	MP2车火警4	TC2车火警1	TC2车火警2

    bool CTPA_Tc2Fire3_B1,CTPA_Tc2Fire4_B1;//TC2车火警3  TC2车火警4

    bool CTPA_Tc2Fire5_B1,CTPA_Tc2Fire6_B1;//TC2车火警5  TC2车火警6

    unsigned char CTPA_QuitOperMode_U8;//退出运营状态


    //TDS1-CCU
    //0xC10
    unsigned short TD1CT_TDSlife_U16,TD1CT_SoftwareVersion_U16;//生命信号    软件版本

    bool TD1CT_TDSSlightFault_B1,TD1CT_TDSMediumFault_B1,TD1CT_TDSSeriousFault_B1,TD1CT_TDSMaster_B1,//RSFDS系统轻微故障	RSFDS系统中等故障	RSFDS系统严重故障	信号有效标识
            TD1CT_InternalBusFault_B1,TD1CT_MVBLAT_B1,TD1CT_MVBRLD_B1;//内部总线通信异常	LAT	RLD

    //0xC12
    char TD1CT_Car1No1Temp_I8,TD1CT_Car1No2Temp_I8,TD1CT_Car1No3Temp_I8,TD1CT_Car1No4Temp_I8,//1车1位轴端传感器温度	1车2位轴端传感器温度	1车3位轴端传感器温度	1车4位轴端传感器温度
            TD1CT_Car1No5Temp_I8, TD1CT_Car1No6Temp_I8,TD1CT_Car1No7Temp_I8,TD1CT_Car1No8Temp_I8;//1车5位轴端传感器温度	1车6位轴端传感器温度	1车7位轴端传感器温度	1车8位轴端传感器温度

    char TD1CT_Car2No1Temp_I8,TD1CT_Car2No2Temp_I8,TD1CT_Car2No3Temp_I8,TD1CT_Car2No4Temp_I8,//2车1位轴端传感器温度	2车2位轴端传感器温度	2车3位轴端传感器温度	2车4位轴端传感器温度
            TD1CT_Car2No5Temp_I8,TD1CT_Car2No6Temp_I8,TD1CT_Car2No7Temp_I8,TD1CT_Car2No8Temp_I8;//2车5位轴端传感器温度	2车6位轴端传感器温度	2车7位轴端传感器温度	2车8位轴端传感器温度

    char TD1CT_Car3No1Temp_I8,TD1CT_Car3No2Temp_I8,TD1CT_Car3No3Temp_I8,TD1CT_Car3No4Temp_I8,//3车1位轴端传感器温度	3车2位轴端传感器温度	3车3位轴端传感器温度	3车4位轴端传感器温度
            TD1CT_Car3No5Temp_I8,TD1CT_Car3No6Temp_I8,TD1CT_Car3No7Temp_I8,TD1CT_Car3No8Temp_I8;//3车5位轴端传感器温度	3车6位轴端传感器温度	3车7位轴端传感器温度	3车8位轴端传感器温度

    char TD1CT_Car4No1Temp_I8,TD1CT_Car4No2Temp_I8,TD1CT_Car4No3Temp_I8,TD1CT_Car4No4Temp_I8,//4车1位轴端传感器温度	4车2位轴端传感器温度	4车3位轴端传感器温度	4车4位轴端传感器温度
            TD1CT_Car4No5Temp_I8,TD1CT_Car4No6Temp_I8,TD1CT_Car4No7Temp_I8,TD1CT_Car4No8Temp_I8;//4车5位轴端传感器温度	4车6位轴端传感器温度	4车7位轴端传感器温度	4车8位轴端传感器温度

    //0xC13
    char TD1CT_Car5No1Temp_I8,  TD1CT_Car5No2Temp_I8,TD1CT_Car5No3Temp_I8, TD1CT_Car5No4Temp_I8,//5车1位轴端传感器温度	5车2位轴端传感器温度	5车3位轴端传感器温度	5车4位轴端传感器温度
            TD1CT_Car5No5Temp_I8,TD1CT_Car5No6Temp_I8,TD1CT_Car5No7Temp_I8,TD1CT_Car5No8Temp_I8;//5车5位轴端传感器温度	5车6位轴端传感器温度	5车7位轴端传感器温度	5车8位轴端传感器温度

    char TD1CT_Car6No1Temp_I8, TD1CT_Car6No2Temp_I8,TD1CT_Car6No3Temp_I8,TD1CT_Car6No4Temp_I8,//6车1位轴端传感器温度	6车2位轴端传感器温度	6车3位轴端传感器温度	6车4位轴端传感器温度
            TD1CT_Car6No5Temp_I8,TD1CT_Car6No6Temp_I8,TD1CT_Car6No7Temp_I8,TD1CT_Car6No8Temp_I8;//6车5位轴端传感器温度	6车6位轴端传感器温度	6车7位轴端传感器温度	6车8位轴端传感器温度


    //TDS2-CCU
    //0xC20
    unsigned short TD2CT_TDSlife_U16,TD2CT_SoftwareVersion_U16;//生命信号    软件版本

    bool TD2CT_TDSSlightFault_B1,TD2CT_TDSMediumFault_B1,TD2CT_TDSSeriousFault_B1,TD2CT_TDSMaster_B1,//RSFDS系统轻微故障	RSFDS系统中等故障	RSFDS系统严重故障	信号有效标识
            TD2CT_InternalBusFault_B1,TD2CT_MVBLAT_B1,TD2CT_MVBRLD_B1;//内部总线通信异常	LAT	RLD

    //0xC22
    char TD2CT_Car1No1Temp_I8,TD2CT_Car1No2Temp_I8,TD2CT_Car1No3Temp_I8,TD2CT_Car1No4Temp_I8,//1车1位轴端传感器温度	1车2位轴端传感器温度	1车3位轴端传感器温度	1车4位轴端传感器温度
            TD2CT_Car1No5Temp_I8, TD2CT_Car1No6Temp_I8,TD2CT_Car1No7Temp_I8,TD2CT_Car1No8Temp_I8;//1车5位轴端传感器温度	1车6位轴端传感器温度	1车7位轴端传感器温度	1车8位轴端传感器温度

    char TD2CT_Car2No1Temp_I8,TD2CT_Car2No2Temp_I8,TD2CT_Car2No3Temp_I8,TD2CT_Car2No4Temp_I8,//2车1位轴端传感器温度	2车2位轴端传感器温度	2车3位轴端传感器温度	2车4位轴端传感器温度
            TD2CT_Car2No5Temp_I8,TD2CT_Car2No6Temp_I8,TD2CT_Car2No7Temp_I8,TD2CT_Car2No8Temp_I8;//2车5位轴端传感器温度	2车6位轴端传感器温度	2车7位轴端传感器温度	2车8位轴端传感器温度

    char TD2CT_Car3No1Temp_I8,TD2CT_Car3No2Temp_I8,TD2CT_Car3No3Temp_I8,TD2CT_Car3No4Temp_I8,//3车1位轴端传感器温度	3车2位轴端传感器温度	3车3位轴端传感器温度	3车4位轴端传感器温度
            TD2CT_Car3No5Temp_I8,TD2CT_Car3No6Temp_I8,TD2CT_Car3No7Temp_I8,TD2CT_Car3No8Temp_I8;//3车5位轴端传感器温度	3车6位轴端传感器温度	3车7位轴端传感器温度	3车8位轴端传感器温度

    char TD2CT_Car4No1Temp_I8,TD2CT_Car4No2Temp_I8,TD2CT_Car4No3Temp_I8,TD2CT_Car4No4Temp_I8,//4车1位轴端传感器温度	4车2位轴端传感器温度	4车3位轴端传感器温度	4车4位轴端传感器温度
            TD2CT_Car4No5Temp_I8,TD2CT_Car4No6Temp_I8,TD2CT_Car4No7Temp_I8,TD2CT_Car4No8Temp_I8;//4车5位轴端传感器温度	4车6位轴端传感器温度	4车7位轴端传感器温度	4车8位轴端传感器温度

    //0xC23
    char TD2CT_Car5No1Temp_I8,  TD2CT_Car5No2Temp_I8,TD2CT_Car5No3Temp_I8, TD2CT_Car5No4Temp_I8,//5车1位轴端传感器温度	5车2位轴端传感器温度	5车3位轴端传感器温度	5车4位轴端传感器温度
            TD2CT_Car5No5Temp_I8,TD2CT_Car5No6Temp_I8,TD2CT_Car5No7Temp_I8,TD2CT_Car5No8Temp_I8;//5车5位轴端传感器温度	5车6位轴端传感器温度	5车7位轴端传感器温度	5车8位轴端传感器温度

    char TD2CT_Car6No1Temp_I8, TD2CT_Car6No2Temp_I8,TD2CT_Car6No3Temp_I8,TD2CT_Car6No4Temp_I8,//6车1位轴端传感器温度	6车2位轴端传感器温度	6车3位轴端传感器温度	6车4位轴端传感器温度
            TD2CT_Car6No5Temp_I8,TD2CT_Car6No6Temp_I8,TD2CT_Car6No7Temp_I8,TD2CT_Car6No8Temp_I8;//6车5位轴端传感器温度	6车6位轴端传感器温度	6车7位轴端传感器温度	6车8位轴端传感器温度


    //FAS1-CCU
    //0xE50
    unsigned char FS1CT_OverVolBattNum_U8;//超压电池数量

    //FAS2-CCU
    //0xE60
    unsigned char FS2CT_OverVolBattNum_U8;//超压电池数量

    //CCU-FAS1
    unsigned short CTFS1_NetVoltage_U16;//网压

    //CCU-FAS2
    unsigned short CTFS2_NetVoltage_U16;//网压


    //BMS1→CCU
    //0xE10
    unsigned char BM1CT_OverVolBattNum_U8, BM1CT_LowVolBattNum_U8,  BM1CT_OverTempBattNum_U8,  BM1CT_OverVolAlarmBatt_U8;//超压电池数量	低压电池数量	超温电池数量	超压报警电池

    unsigned short BM1CT_OverVolAlarmBattVal_U16;//超压报警电池电压值;

    unsigned char BM1CT_LowVolAlarmBatt_U8;//低压报警电池

    unsigned short BM1CT_LowVolAlarmBattVal_U16;//低压报警电池电压值

    unsigned char BM1CT_OverTempAlarmBatt_U8;//超温报警电池

    unsigned short BM1CT_OverTempAlarmBattVal_U16;//超温报警电池温度值

    bool BM1CT_OnlyOverVolAlarm_B1,BM1CT_OnlyLowVolAlarm_B1,BM1CT_OnlyOverTempAlarm_B1,BM1CT_WholeLowVolAlarm_B1,//单体电压超压报警	单体电压低压报警	单体温度过高报警	蓄电池组总电压低报警
            BM1CT_InsetOverTempAlarm_B1,BM1CT_OverChargeCurAlarm_B1, BM1CT_OverDischargeCurAlarm_B1,BM1CT_CapacityLeftLowAlarm_B1;//箱内温度过高报警	蓄电池充电电流超限报警	蓄电池放电电流超限报警	蓄电池剩余容量过低报警


    bool BM1CT_MonitorInitFaultAlarm_B1,BM1CT_MVBLAT_B1,BM1CT_MVBRLD_B1;//蓄电池监测初始化失败报警	LAT	RLD

    unsigned short BM1CT_SoftVersion_U16;//软件版本

    unsigned char BM1CT_LifeSignal_U8, BM1CT_AlarmLampSta_U8;//蓄电池生命信号   报警指示灯状态

    unsigned short BM1CT_ChargeVolVal_U16,BM1CT_DischargeVolVal_U16,BM1CT_InsetTempVal_U16,BM1CT_ChargeCurVal_U16,//蓄电池组充电电压值	蓄电池组放电电压值	蓄电池组箱内温度值	蓄电池组充电电流值
            BM1CT_DischargeCurVal_U16, BM1CT_CapacityLeft_U16;//蓄电池组放电电流值   蓄电池剩余容量


    //BMS2→CCU
    //0xE20
    unsigned char BM2CT_OverVolBattNum_U8, BM2CT_LowVolBattNum_U8,  BM2CT_OverTempBattNum_U8,  BM2CT_OverVolAlarmBatt_U8;//超压电池数量	低压电池数量	超温电池数量	超压报警电池

    unsigned short BM2CT_OverVolAlarmBattVal_U16;//超压报警电池电压值;

    unsigned char BM2CT_LowVolAlarmBatt_U8;//低压报警电池

    unsigned short BM2CT_LowVolAlarmBattVal_U16;//低压报警电池电压值

    unsigned char BM2CT_OverTempAlarmBatt_U8;//超温报警电池

    unsigned short BM2CT_OverTempAlarmBattVal_U16;//超温报警电池温度值

    bool BM2CT_OnlyOverVolAlarm_B1,BM2CT_OnlyLowVolAlarm_B1,BM2CT_OnlyOverTempAlarm_B1,BM2CT_WholeLowVolAlarm_B1,//单体电压超压报警	单体电压低压报警	单体温度过高报警	蓄电池组总电压低报警
            BM2CT_InsetOverTempAlarm_B1,BM2CT_OverChargeCurAlarm_B1, BM2CT_OverDischargeCurAlarm_B1,BM2CT_CapacityLeftLowAlarm_B1;//箱内温度过高报警	蓄电池充电电流超限报警	蓄电池放电电流超限报警	蓄电池剩余容量过低报警


    bool BM2CT_MonitorInitFaultAlarm_B1,BM2CT_MVBLAT_B1,BM2CT_MVBRLD_B1;//蓄电池监测初始化失败报警	LAT	RLD

    unsigned short BM2CT_SoftVersion_U16;//软件版本

    unsigned char BM2CT_LifeSignal_U8, BM2CT_AlarmLampSta_U8;//蓄电池生命信号   报警指示灯状态

    unsigned short BM2CT_ChargeVolVal_U16,BM2CT_DischargeVolVal_U16,BM2CT_InsetTempVal_U16,BM2CT_ChargeCurVal_U16,//蓄电池组充电电压值	蓄电池组放电电压值	蓄电池组箱内温度值	蓄电池组充电电流值
            BM2CT_DischargeCurVal_U16, BM2CT_CapacityLeft_U16;//蓄电池组放电电流值   蓄电池剩余容量


    //PCU1→CCU
    //0xF10
    unsigned short PN1CT_LfSgn_U16;//MDCU生命信号

    unsigned char PN1CT_ControllerStatus_B1;//控制器1状态

    bool PN1CT_MVBLAT_B1,PN1CT_MVBRLD_B1;//LAT   RLD

    unsigned char PN1CT_VersionX_U8,PN1CT_VersionY_U8;//软件版本号-低位   软件版本号-高位


    //PCU2→CCU
    //0xF20
    unsigned short PN2CT_LfSgn_U16;//MDCU生命信号

    unsigned char PN2CT_ControllerStatus_B1;//控制器1状态

    bool PN2CT_MVBLAT_B1,PN2CT_MVBRLD_B1;//LAT   RLD

    unsigned char PN2CT_VersionX_U8,PN2CT_VersionY_U8;//软件版本号-低位   软件版本号-高位


    //CCU→PCU
    //0xF08
    unsigned short CTPN_NetVoltage_U16;//网压

    unsigned int CTPN_CrrntPNO_U32, CTPN_NextPNO_U32,CTPN_DstntnPNO_U32;//当前站编码	下一站编码	目的（终点）站编码

    unsigned short CTPN_TARGETDIS_U16, CTPN_STARTINGDIS_U16;//目标距离 起始距离

    unsigned char CTPN_CTRLSTATE_U8, CTPN_STATE_U8, CTPN_ATCOnline_U8;//VOBC切除状态 VOBC故障状态  VOBC在线状态

    bool CTPN_AllDrClsd_B1, CTPN_DrOpnd_B1, CTPN_QuitOperMode_B1;//所有门关闭并锁到位 门开到位  退出运营状态
































private:
     CrrcMvb* crrcMvb;

};

#endif // DATABASE_H
