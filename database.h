#ifndef DATABASE_H
#define DATABASE_H
#include "MainGetDefaultPara.h"
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
    unsigned int CTRM1_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM1_Check0_B1,CTRM1_Check1_B1;//校验位
    //0x168
    unsigned int CTRM6_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM6_Check0_B1,CTRM6_Check1_B1;//校验位

    //0x128
    unsigned int CTRM2_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM2_Check0_B1,CTRM2_Check1_B1;//校验位
    //0x158
    unsigned int CTRM5_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM5_Check0_B1,CTRM5_Check1_B1;//校验位

    //0x138
    unsigned int CTRM3_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM3_Check0_B1,CTRM3_Check1_B1;//校验位
    //0x148
    unsigned int CTRM4_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM4_Check0_B1,CTRM4_Check1_B1;//校验位

    //CCU-RIOM1R 0x178
    unsigned int CTRM7_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM7_Check0_B1,CTRM7_Check1_B1;//校验位,校验位

    //CCU-RIOM1R 0x188
    unsigned int CTRM8_CCUlifeSignal_U16;//CCU生命信号
    bool CTRM8_Check0_B1,CTRM8_Check1_B1;//校验位,校验位

    //HMI1-CCU
    //0x210
    unsigned int HM1CT_LifeSignal_U16;//显示屏生命信号

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
            HMiCT_HVACStop_B1;//空调停机设定
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
    unsigned int HM2CT_LifeSignal_U16;//显示屏生命信号

    unsigned char HM2CT_HMISWVerH_U8,HM2CT_HMISWVerL_U8,HM2CT_Year_U8,HM2CT_Month_U8,//软件版本-H, 软件版本-L,时间设定值-年,时间设定值-月
            HM2CT_Day_U8,HM2CT_Hour_U8,HM2CT_Minute_U8,HM2CT_Second_U8,//时间设定值-日,时间设定值-时,时间设定值-分,时间设定值-秒
            HM2CT_TrainNum_U8,HM2CT_LineNum_U8,HM2CT_WheelDia1_U8,HM2CT_WheelDia2_U8,//列车号,线路号,TC1车轮径设定值,MP1车轮径设定值
            HM2CT_WheelDia3_U8,HM2CT_WheelDia4_U8,HM2CT_WheelDia5_U8,HM2CT_WheelDia6_U8;//M1车轮径设定值,M2车轮径设定值,MP2车轮径设定值,TC2车轮径设定值

    bool HM2CT_SAVETime_B1,HM2CT_SAVETrainNum_B1,HM2CT_SAVELineNum_B1,HM2CT_SAVEWheelDig1_B1,//时间设定保存标志,列车号保存标志,线路号保存标志,车轴轮径保存标志1
            HM2CT_SAVEWheelDig2_B1,HM2CT_SAVEWheelDig3_B1,HM2CT_SAVEWheelDig4_B1,HM2CT_SAVEWheelDig5_B1,//车轴轮径保存标志2,车轴轮径保存标志3,车轴轮径保存标志4,车轴轮径保存标志5
            HM2CT_SAVEWheelDig6_B1;//车轴轮径保存标志6

    unsigned char HMiCT_SetFlagChecker_U8;//设定标志校验位

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

    unsigned int CTHM_TrainLimitSpeed_U16,CTHM_TrainSpeed_U16, CTHM_CatenaryVoltage_U16, CTHM_CatenaryCurrent_U16;//列车限速度,列车速度,网压,网流

    unsigned char CTHM_WheelDig1FedBk_U8,CTHM_WheelDig2FedBk_U8,CTHM_WheelDig3FedBk_U8,CTHM_WheelDig4FedBk_U8,//1车轮径设定值,2车轮径设定值,3车轮径设定值,4车轮径设定值
            CTHM_WheelDig5FedBk_U8,CTHM_WheelDig6FedBk_U8;//5车轮径设定值,6车轮径设定值


    //0x209
    unsigned char CTHM_CCU1SWVer_U8,CTHM_CCU1MVBVer_U8,CTHM_CCU1SDBVer_U8,CTHM_CCU1VxWorksVer_U8,//CCU1软件版本,CCU1的MVB软件版本,CCU1的SDB软件版本,CCU1的VxWorks软件版本
            CTHM_CCU1FPGAVer_U8,CTHM_CCU2SWVer_U8,CTHM_CCU2MVBVer_U8,CTHM_CCU2SDBVer_U8,//CCU1的FPGA软件版本,CCU2软件版本,CCU2的MVB软件版本,CCU2的SDB软件版本
            CTHM_CCU2VxWorksVer_U8,CTHM_CCU2FPGAVer_U8;//CCU2的VxWorks软件版本,CCU1的FPGA软件版本

    unsigned int CTHM_Acceleration_U16,CTHM_Acceleration40_U16,CTHM_Acceleration80_U16,CTHM_Deceleration_U16,//瞬时加速度值,0-40km/h，平均加速度,0-80km/h，平均加速度,减速度测试，平均加速度
            CTHM_AcDeStartVelocity_U16,CTHM_AcDeDistance_U16,CTHM_AcDeTime_U16;//减速度测试初速度,减速测试距离,减速测试时间

    unsigned int CTHM_TC1Load_U16,CTHM_MP1Load_U16,CTHM_M1Load_U16,CTHM_M2Load_U16,//TC1车载荷，含转动惯量  MP1车载荷，含转动惯量 M1车载荷，含转动惯量  M2车载荷，含转动惯量
            CTHM_MP2Load_U16,CTHM_TC2Load_U16;//MP2车载荷，含转动惯量 TC2车载荷，含转动惯量


     double CTHM_CurrentStation_U32,CTHM_NextStationID_U32,CTHM_LastStationID_U32;//当前站ID,下一站ID,终点站ID


    //ERM1-CCU
    //0x310
    unsigned char DT1CT_ERMLifeSign_U8,DT1CT_ERMSWVer_U8,DT1CT_ERMVxWorksVer_U8,DT1CT_ERMMVBSWVer_U8,//ERM生命信号,ERM软件版本(x.y.z),ERM的VxWorks版本(x.y),ERM的MVB版本(x.y)
            DT1CT_ERMSDBVer_U8,DT1CT_ERMFPGAVer_U8;//ERM的SDB版本(x.y) ,ERM的FPGA版本(x.y)

    //0x311
     double DT1CT_TCMSRunTime_U32,DT1CT_RunKilometers_U32,DT1CT_DCU1ConsEnergy_U32,DT1CT_DCU2ConsEnergy_U32;//数据记录时间；累计行驶距离；DCU1牵引能耗；DCU2牵引能耗；
    //0x312
     double DT1CT_DCU3ConsEnergy_U32,DT1CT_DCU4ConsEnergy_U32,DT1CT_ACM1ConsEnergy_U32,DT1CT_ACM2ConsEnergy_U32,//DCU3牵引能耗； DCU4牵引能耗；ACM1能耗；ACM2能耗；
            DT1CT_ACM3ConsEnergy_U32,DT1CT_ACM4ConsEnergy_U32,DT1CT_DCU1RhBrkConsEnergy_U32,DT1CT_DCU2RhBrkConsEnergy_U32;//ACM3能耗；ACM4能耗；DCU1电阻制动能耗；DCU2电阻制动能耗；
     double DT1CT_DCU3RhBrkConsEnergy_U32,DT1CT_DCU4RhBrkConsEnergy_U32,DT1CT_DCU1RegBrkEnergy_U32,DT1CT_DCU2RegBrkEnergy_U32,//DCU3电阻制动能耗；DCU4电阻制动能耗； DCU1再生制动能耗； DCU2再生制动能耗；
            DT1CT_DCU3RegBrkEnergy_U32,DT1CT_DCU4RegBrkEnergy_U32,DT1CT_TC1APRunTime_U32,DT1CT_TC2APRunTime_U32;//DCU3再生制动能耗；DCU4再生制动能耗；TC1空压机运行时间；TC2空压机运行时间；

    //ERM2-CCU
    //0x320
    unsigned char DT2CT_ERMLifeSign_U8,DT2CT_ERMSWVer_U8,DT2CT_ERMVxWorksVer_U8,DT2CT_ERMMVBSWVer_U8,//ERM生命信号,ERM软件版本(x.y.z),ERM的VxWorks版本(x.y),ERM的MVB版本(x.y)
            DT2CT_ERMSDBVer_U8,DT2CT_ERMFPGAVer_U8;//ERM的SDB版本(x.y) ,ERM的FPGA版本(x.y)

    //0x321
     double DT2CT_TCMSRunTime_U32,DT2CT_RunKilometers_U32,DT2CT_DCU1ConsEnergy_U32,DT2CT_DCU2ConsEnergy_U32;//数据记录时间；累计行驶距离；DCU1牵引能耗；DCU2牵引能耗；
    //0x322
     double DT2CT_DCU3ConsEnergy_U32,DT2CT_DCU4ConsEnergy_U32,DT2CT_ACM1ConsEnergy_U32,DT2CT_ACM2ConsEnergy_U32,//DCU3牵引能耗； DCU4牵引能耗；ACM1能耗；ACM2能耗；
            DT2CT_ACM3ConsEnergy_U32,DT2CT_ACM4ConsEnergy_U32,DT2CT_DCU1RhBrkConsEnergy_U32,DT2CT_DCU2RhBrkConsEnergy_U32;//ACM3能耗；ACM4能耗；DCU1电阻制动能耗；DCU2电阻制动能耗；
     double DT2CT_DCU3RhBrkConsEnergy_U32,DT2CT_DCU4RhBrkConsEnergy_U32,DT2CT_DCU1RegBrkEnergy_U32,DT2CT_DCU2RegBrkEnergy_U32,//DCU3电阻制动能耗；DCU4电阻制动能耗； DCU1再生制动能耗； DCU2再生制动能耗；
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
    int TR1CT_DCUMLifeSignal_I16,TR1CT_DCUMBrkForce_I16,TR1CT_Axis1Speed_I16,TR1CT_Axis2Speed_I16,//DCUM生命信号, 牵引制动力实际值,1轴速度,2轴速度
            TR1CT_Axis3Speed_I16,TR1CT_Axis4Speed_I16,TR1CT_BrkChopingCtrlRate_I16;//3轴速度,4轴速度,制动斩波控制率(保留)


    bool TR1CT_EBOK_B1,TR1CT_Slide_B1,TR1CT_Axis4SpeedValid_B1,TR1CT_Axis3SpeedValid_B1,TR1CT_Axis2SpeedValid_B1,//电制动可用,空转/滑行,4轴速度有效,3轴速度有效
            TR1CT_Axis1SpeedValid_B1,TR1CT_TBEValid_B1;//2轴速度有效,1轴速度有效,牵引/制动力有效

    //0x491
    int TR1CT_DCULifeSignal1_I16,TR1CT_ActualPower_I16,TR1CT_DCVoltage_I16,TR1CT_DCCurrent_I16,//DCU生命信号,实际电机功率,直流电压,直流电流
            TR1CT_EBVirtualValue_I16, TR1CT_TractionStatus_I16;//电制动力虚拟值,牵引状态字

    int TR1CT_MaxEBEffort_I16,TR1CT_BrkChopingActualRate_I16,TR1CT_MotorCurrent_I16,TR1CT_SystemFeedback_I16,//最大可用电制动力参考值,实际斩波功率,电机电流,系统反馈
            TR1CT_MaxAvailbleEB_I16;//最大可用电制动力

    bool TR1CT_AdjustActive_B1,TR1CT_Backward_B1,TR1CT_Forward_B1;//校正激活,方向向后,方向向前

    bool TR1CT_GroundingFlt_B1,TR1CT_ChoppingPowerValid_B1,TR1CT_MotorPowerValid_B1,TR1CT_MaxEBValid_B1,//接地故障,斩波功率有效,电机功率有效,最大可用电制动力有效
            TR1CT_TrcSaftyEnable_B1,TR1CT_DCCurrentValid_B1,TR1CT_DCVoltageValid_B1;//牵引安全使能,直流环节电流有效,直流环节电压有效

    bool TR1CT_LineVoltageOK_B1,TR1CT_OutsideFanFullSpeed_B1,TR1CT_OutsideFanHalfSpeed_B1;//线电压正常,外部风扇全速,外部风扇全速

    bool TR1CT_IESContacterQ2_B1,TR1CT_IESContacterQ1_B1,TR1CT_SupplyMode_B1,TR1CT_MotorCurrentValid_B1,//IES接触器Q2在2位,IES接触器Q1在1位,车间电源模式, 电机电流有效

            TR1CT_DivContacterClose_B1,TR1CT_HSCBClose_B1;//分离接触器闭合,高速断路器闭合


    //ox492
    int TR1CT_DCULifeSignal2_I16;//DCU生命信号

    int TR1CT_DCUMVersion_I16,TR1CT_TrcRadiatorTemp_I16,TR1CT_Motor1Temp_I16,TR1CT_Motor2Temp_I16,//DCU/M软件版本,牵引变流器散热器温度,电机1温度,电机2温度
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
    int TR2CT_DCUMLifeSignal_I16,TR2CT_DCUMBrkForce_I16,TR2CT_Axis1Speed_I16,TR2CT_Axis2Speed_I16,//DCUM生命信号, 牵引制动力实际值,1轴速度,2轴速度
            TR2CT_Axis3Speed_I16,TR2CT_Axis4Speed_I16,TR2CT_BrkChopingCtrlRate_I16;//3轴速度,4轴速度,制动斩波控制率(保留)


    bool TR2CT_EBOK_B1,TR2CT_Slide_B1,TR2CT_Axis4SpeedValid_B1,TR2CT_Axis3SpeedValid_B1,TR2CT_Axis2SpeedValid_B1,//电制动可用,空转/滑行,4轴速度有效,3轴速度有效
            TR2CT_Axis1SpeedValid_B1,TR2CT_TBEValid_B1;//2轴速度有效,1轴速度有效,牵引/制动力有效

    //0x4C1
    int TR2CT_DCULifeSignal1_I16,TR2CT_ActualPower_I16,TR2CT_DCVoltage_I16,TR2CT_DCCurrent_I16,//DCU生命信号,实际电机功率,直流电压,直流电流
            TR2CT_EBVirtualValue_I16, TR2CT_TractionStatus_I16;//电制动力虚拟值,牵引状态字

    int TR2CT_MaxEBEffort_I16,TR2CT_BrkChopingActualRate_I16,TR2CT_MotorCurrent_I16,TR2CT_SystemFeedback_I16,//最大可用电制动力参考值,实际斩波功率,电机电流,系统反馈
            TR2CT_MaxAvailbleEB_I16;//最大可用电制动力

    bool TR2CT_AdjustActive_B1,TR2CT_Backward_B1,TR2CT_Forward_B1;//校正激活,方向向后,方向向前

    bool TR2CT_GroundingFlt_B1,TR2CT_ChoppingPowerValid_B1,TR2CT_MotorPowerValid_B1,TR2CT_MaxEBValid_B1,//接地故障,斩波功率有效,电机功率有效,最大可用电制动力有效
            TR2CT_TrcSaftyEnable_B1,TR2CT_DCCurrentValid_B1,TR2CT_DCVoltageValid_B1;//牵引安全使能,直流环节电流有效,直流环节电压有效

    bool TR2CT_LineVoltageOK_B1,TR2CT_OutsideFanFullSpeed_B1,TR2CT_OutsideFanHalfSpeed_B1;//线电压正常,外部风扇全速,外部风扇全速

    bool TR2CT_IESContacterQ2_B1,TR2CT_IESContacterQ1_B1,TR2CT_SupplyMode_B1,TR2CT_MotorCurrentValid_B1,//IES接触器Q2在2位,IES接触器Q1在1位,车间电源模式, 电机电流有效

            TR2CT_DivContacterClose_B1,TR2CT_HSCBClose_B1;//分离接触器闭合,高速断路器闭合


    //ox4C2
    int TR2CT_DCULifeSignal2_I16;//DCU生命信号

    int TR2CT_DCUMVersion_I16,TR2CT_TrcRadiatorTemp_I16,TR2CT_Motor1Temp_I16,TR2CT_Motor2Temp_I16,//DCU/M软件版本,牵引变流器散热器温度,电机1温度,电机2温度
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
    int TR3CT_DCUMLifeSignal_I16,TR3CT_DCUMBrkForce_I16,TR3CT_Axis1Speed_I16,TR3CT_Axis2Speed_I16,//DCUM生命信号, 牵引制动力实际值,1轴速度,2轴速度
            TR3CT_Axis3Speed_I16,TR3CT_Axis4Speed_I16,TR3CT_BrkChopingCtrlRate_I16;//3轴速度,4轴速度,制动斩波控制率(保留)


    bool TR3CT_EBOK_B1,TR3CT_Slide_B1,TR3CT_Axis4SpeedValid_B1,TR3CT_Axis3SpeedValid_B1,TR3CT_Axis2SpeedValid_B1,//电制动可用,空转/滑行,4轴速度有效,3轴速度有效
            TR3CT_Axis1SpeedValid_B1,TR3CT_TBEValid_B1;//2轴速度有效,1轴速度有效,牵引/制动力有效

    //0x4D1
    int TR3CT_DCULifeSignal1_I16,TR3CT_ActualPower_I16,TR3CT_DCVoltage_I16,TR3CT_DCCurrent_I16,//DCU生命信号,实际电机功率,直流电压,直流电流
            TR3CT_EBVirtualValue_I16, TR3CT_TractionStatus_I16;//电制动力虚拟值,牵引状态字

    int TR3CT_MaxEBEffort_I16,TR3CT_BrkChopingActualRate_I16,TR3CT_MotorCurrent_I16,TR3CT_SystemFeedback_I16,//最大可用电制动力参考值,实际斩波功率,电机电流,系统反馈
            TR3CT_MaxAvailbleEB_I16;//最大可用电制动力

    bool TR3CT_AdjustActive_B1,TR3CT_Backward_B1,TR3CT_Forward_B1;//校正激活,方向向后,方向向前

    bool TR3CT_GroundingFlt_B1,TR3CT_ChoppingPowerValid_B1,TR3CT_MotorPowerValid_B1,TR3CT_MaxEBValid_B1,//接地故障,斩波功率有效,电机功率有效,最大可用电制动力有效
            TR3CT_TrcSaftyEnable_B1,TR3CT_DCCurrentValid_B1,TR3CT_DCVoltageValid_B1;//牵引安全使能,直流环节电流有效,直流环节电压有效

    bool TR3CT_LineVoltageOK_B1,TR3CT_OutsideFanFullSpeed_B1,TR3CT_OutsideFanHalfSpeed_B1;//线电压正常,外部风扇全速,外部风扇全速

    bool TR3CT_IESContacterQ2_B1,TR3CT_IESContacterQ1_B1,TR3CT_SupplyMode_B1,TR3CT_MotorCurrentValid_B1,//IES接触器Q2在2位,IES接触器Q1在1位,车间电源模式, 电机电流有效

            TR3CT_DivContacterClose_B1,TR3CT_HSCBClose_B1;//分离接触器闭合,高速断路器闭合


    //ox4D2
    int TR3CT_DCULifeSignal2_I16;//DCU生命信号

    int TR3CT_DCUMVersion_I16,TR3CT_TrcRadiatorTemp_I16,TR3CT_Motor1Temp_I16,TR3CT_Motor2Temp_I16,//DCU/M软件版本,牵引变流器散热器温度,电机1温度,电机2温度
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
    int TR4CT_DCUMLifeSignal_I16,TR4CT_DCUMBrkForce_I16,TR4CT_Axis1Speed_I16,TR4CT_Axis2Speed_I16,//DCUM生命信号, 牵引制动力实际值,1轴速度,2轴速度
            TR4CT_Axis3Speed_I16,TR4CT_Axis4Speed_I16,TR4CT_BrkChopingCtrlRate_I16;//3轴速度,4轴速度,制动斩波控制率(保留)


    bool TR4CT_EBOK_B1,TR4CT_Slide_B1,TR4CT_Axis4SpeedValid_B1,TR4CT_Axis3SpeedValid_B1,TR4CT_Axis2SpeedValid_B1,//电制动可用,空转/滑行,4轴速度有效,3轴速度有效
            TR4CT_Axis1SpeedValid_B1,TR4CT_TBEValid_B1;//2轴速度有效,1轴速度有效,牵引/制动力有效

    //0x481
    int TR4CT_DCULifeSignal1_I16,TR4CT_ActualPower_I16,TR4CT_DCVoltage_I16,TR4CT_DCCurrent_I16,//DCU生命信号,实际电机功率,直流电压,直流电流
            TR4CT_EBVirtualValue_I16, TR4CT_TractionStatus_I16;//电制动力虚拟值,牵引状态字

    int TR4CT_MaxEBEffort_I16,TR4CT_BrkChopingActualRate_I16,TR4CT_MotorCurrent_I16,TR4CT_SystemFeedback_I16,//最大可用电制动力参考值,实际斩波功率,电机电流,系统反馈
            TR4CT_MaxAvailbleEB_I16;//最大可用电制动力

    bool TR4CT_AdjustActive_B1,TR4CT_Backward_B1,TR4CT_Forward_B1;//校正激活,方向向后,方向向前

    bool TR4CT_GroundingFlt_B1,TR4CT_ChoppingPowerValid_B1,TR4CT_MotorPowerValid_B1,TR4CT_MaxEBValid_B1,//接地故障,斩波功率有效,电机功率有效,最大可用电制动力有效
            TR4CT_TrcSaftyEnable_B1,TR4CT_DCCurrentValid_B1,TR4CT_DCVoltageValid_B1;//牵引安全使能,直流环节电流有效,直流环节电压有效

    bool TR4CT_LineVoltageOK_B1,TR4CT_OutsideFanFullSpeed_B1,TR4CT_OutsideFanHalfSpeed_B1;//线电压正常,外部风扇全速,外部风扇全速

    bool TR4CT_IESContacterQ2_B1,TR4CT_IESContacterQ1_B1,TR4CT_SupplyMode_B1,TR4CT_MotorCurrentValid_B1,//IES接触器Q2在2位,IES接触器Q1在1位,车间电源模式, 电机电流有效

            TR4CT_DivContacterClose_B1,TR4CT_HSCBClose_B1;//分离接触器闭合,高速断路器闭合


    //ox482
    int TR4CT_DCULifeSignal2_I16;//DCU生命信号

    int TR4CT_DCUMVersion_I16,TR4CT_TrcRadiatorTemp_I16,TR4CT_Motor1Temp_I16,TR4CT_Motor2Temp_I16,//DCU/M软件版本,牵引变流器散热器温度,电机1温度,电机2温度
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
    int CTTR_SysTimeYearDCUM_I8,CTTR_SysTimeMonthDCUM_I8,CTTR_SysTimeDayDCUM_I8,CTTR_SysTimeHourDCUM_I8,//年,月,日,时
            CTTR_SysTimeMinuteDCUM_I8,CTTR_SysTimeSecondDCUM_I8;//分,秒
    //CCU-DCU1
    //0x498
    int CTTR1_CCULifeSignal1_I16,CTTR1_TractionEffortPercent_I16,CTTR1_TrainSpeed_I16,CTTR1_RefAxisSpeed_I16;//CCU生命信号,牵引力参考值（百分比）,列车速度,参考轴速度
    bool CTTR1_EACooperition_B1, CTTR1_TrcEffortValid_B1;//电空配合,牵引力参考值有效

    bool CTTR1_RefAxisSpeedValid_B1, CTTR1_Brake_B1,CTTR1_Traction_B1,CTTR1_SpeedValid_B1,//参考轴速度有效,制动指令,牵引指令,列车速度有效
            CTTR1_FastBrake_B1;//快速制动
    //0x499
    int CTTR1_CCULifeSignal2_I16,CTTR1_LoadAdjustParameter_I16,CTTR1_SystemChoise_I16;//CCU生命信号,载荷校正系数,系统选择

    bool CTTR1_LoadAdjustParaValid_B1,CTTR1_Backward_B1;//载荷校正系数有效,方向向后指令
    bool CTTR1_Forward_B1,CTTR1_EDCutOff_B1,CTTR1_3PhaseActived_B1;//方向向前指令,电制动切除,三相母线激活
    bool CTTR1_LineVoltageOn_B1,CTTR1_HighVoltageEnable_B1;//线电压工作,高压使能
    //0x49A
    int CTTR1_CCULifeSignal3_I16,CTTR1_RefDiameter_I16,CTTR1_RefAxisNumber_I16,CTTR1_EnvironmentTemp_I16,//CCU生命信号,参考轴轮径,参考轴轴号,环境温度
            CTTR1_SpeedLimit_I16;//限速值
    bool CTTR1_CCUD2OK_B1,CTTR1_SpeedLimitValid_B1,CTTR1_WashingMode_B1,CTTR1_VersionEnable_B1,//CCU-D2正常,限速有效,洗车模式,版本信息使能
            CTTR1_CounterClear_B1,CTTR1_RefDiameterValid_B1,CTTR1_CCUD1OK_B1,CTTR1_FltReset_B1,//清空条件计数器,参考轴轮径有效,CCU-D1正常,故障复位
            CTTR1_EBCutOff_B1;//试验切除电制动

    //CCU-DCU2
    //0x4C8
    int CTTR2_CCULifeSignal1_I16,CTTR2_TractionEffortPercent_I16,CTTR2_TrainSpeed_I16,CTTR2_RefAxisSpeed_I16;//CCU生命信号,牵引力参考值（百分比）,列车速度,参考轴速度
    bool CTTR2_EACooperition_B1, CTTR2_TrcEffortValid_B1;//电空配合,牵引力参考值有效

    bool CTTR2_RefAxisSpeedValid_B1, CTTR2_Brake_B1,CTTR2_Traction_B1,CTTR2_SpeedValid_B1,//参考轴速度有效,制动指令,牵引指令,列车速度有效
            CTTR2_FastBrake_B1;//快速制动
    //0x4C9
    int CTTR2_CCULifeSignal2_I16,CTTR2_LoadAdjustParameter_I16,CTTR2_SystemChoise_I16;//CCU生命信号,载荷校正系数,系统选择

    bool CTTR2_LoadAdjustParaValid_B1,CTTR2_Backward_B1;//载荷校正系数有效,方向向后指令
    bool CTTR2_Forward_B1,CTTR2_EDCutOff_B1,CTTR2_3PhaseActived_B1;//方向向前指令,电制动切除,三相母线激活
    bool CTTR2_LineVoltageOn_B1,CTTR2_HighVoltageEnable_B1;//线电压工作,高压使能
    //0x4CA
    int CTTR2_CCULifeSignal3_I16,CTTR2_RefDiameter_I16,CTTR2_RefAxisNumber_I16,CTTR2_EnvironmentTemp_I16,//CCU生命信号,参考轴轮径,参考轴轴号,环境温度
            CTTR2_SpeedLimit_I16;//限速值
    bool CTTR2_CCUD2OK_B1,CTTR2_SpeedLimitValid_B1,CTTR2_WashingMode_B1,CTTR2_VersionEnable_B1,//CCU-D2正常,限速有效,洗车模式,版本信息使能
            CTTR2_CounterClear_B1,CTTR2_RefDiameterValid_B1,CTTR2_CCUD1OK_B1,CTTR2_FltReset_B1,//清空条件计数器,参考轴轮径有效,CCU-D1正常,故障复位
            CTTR2_EBCutOff_B1;//试验切除电制动

    //CCU-DCU3
    //0x4D8
    int CTTR3_CCULifeSignal1_I16,CTTR3_TractionEffortPercent_I16,CTTR3_TrainSpeed_I16,CTTR3_RefAxisSpeed_I16;//CCU生命信号,牵引力参考值（百分比）,列车速度,参考轴速度
    bool CTTR3_EACooperition_B1, CTTR3_TrcEffortValid_B1;//电空配合,牵引力参考值有效

    bool CTTR3_RefAxisSpeedValid_B1, CTTR3_Brake_B1,CTTR3_Traction_B1,CTTR3_SpeedValid_B1,//参考轴速度有效,制动指令,牵引指令,列车速度有效
            CTTR3_FastBrake_B1;//快速制动
    //0x4D9
    int CTTR3_CCULifeSignal2_I16,CTTR3_LoadAdjustParameter_I16,CTTR3_SystemChoise_I16;//CCU生命信号,载荷校正系数,系统选择

    bool CTTR3_LoadAdjustParaValid_B1,CTTR3_Backward_B1;//载荷校正系数有效,方向向后指令
    bool CTTR3_Forward_B1,CTTR3_EDCutOff_B1,CTTR3_3PhaseActived_B1;//方向向前指令,电制动切除,三相母线激活
    bool CTTR3_LineVoltageOn_B1,CTTR3_HighVoltageEnable_B1;//线电压工作,高压使能
    //0x4DA
    int CTTR3_CCULifeSignal3_I16,CTTR3_RefDiameter_I16,CTTR3_RefAxisNumber_I16,CTTR3_EnvironmentTemp_I16,//CCU生命信号,参考轴轮径,参考轴轴号,环境温度
            CTTR3_SpeedLimit_I16;//限速值
    bool CTTR3_CCUD2OK_B1,CTTR3_SpeedLimitValid_B1,CTTR3_WashingMode_B1,CTTR3_VersionEnable_B1,//CCU-D2正常,限速有效,洗车模式,版本信息使能
            CTTR3_CounterClear_B1,CTTR3_RefDiameterValid_B1,CTTR3_CCUD1OK_B1,CTTR3_FltReset_B1,//清空条件计数器,参考轴轮径有效,CCU-D1正常,故障复位
            CTTR3_EBCutOff_B1;//试验切除电制动


    //CCU-DCU4
    //0x488
    int CTTR4_CCULifeSignal1_I16,CTTR4_TractionEffortPercent_I16,CTTR4_TrainSpeed_I16,CTTR4_RefAxisSpeed_I16;//CCU生命信号,牵引力参考值（百分比）,列车速度,参考轴速度
    bool CTTR4_EACooperition_B1, CTTR4_TrcEffortValid_B1;//电空配合,牵引力参考值有效

    bool CTTR4_RefAxisSpeedValid_B1, CTTR4_Brake_B1,CTTR4_Traction_B1,CTTR4_SpeedValid_B1,//参考轴速度有效,制动指令,牵引指令,列车速度有效
            CTTR4_FastBrake_B1;//快速制动
    //0x489
    int CTTR4_CCULifeSignal2_I16,CTTR4_LoadAdjustParameter_I16,CTTR4_SystemChoise_I16;//CCU生命信号,载荷校正系数,系统选择

    bool CTTR4_LoadAdjustParaValid_B1,CTTR4_Backward_B1;//载荷校正系数有效,方向向后指令
    bool CTTR4_Forward_B1,CTTR4_EDCutOff_B1,CTTR4_3PhaseActived_B1;//方向向前指令,电制动切除,三相母线激活
    bool CTTR4_LineVoltageOn_B1,CTTR4_HighVoltageEnable_B1;//线电压工作,高压使能
    //0x48A
    int CTTR4_CCULifeSignal3_I16,CTTR4_RefDiameter_I16,CTTR4_RefAxisNumber_I16,CTTR4_EnvironmentTemp_I16,//CCU生命信号,参考轴轮径,参考轴轴号,环境温度
            CTTR4_SpeedLimit_I16;//限速值
    bool CTTR4_CCUD2OK_B1,CTTR4_SpeedLimitValid_B1,CTTR4_WashingMode_B1,CTTR4_VersionEnable_B1,//CCU-D2正常,限速有效,洗车模式,版本信息使能
            CTTR4_CounterClear_B1,CTTR4_RefDiameterValid_B1,CTTR4_CCUD1OK_B1,CTTR4_FltReset_B1,//清空条件计数器,参考轴轮径有效,CCU-D1正常,故障复位
            CTTR4_EBCutOff_B1;//试验切除电制动


    //CCU-D1-CCU
    //0x818
    int CD1CT_DCUMLifeSignal_I16, CD1CT_SoftWareVersion1_I16,CD1CT_SoftWareVersion2_I16,CD1CT_SoftWareVersion3_I16,//DCUM生命信号, 软件版本号1,软件版本号2,软件版本号3
            CD1CT_SoftWareVersion4_I16;//软件版本号4
    bool CD1CT_CCUDLowVoltage_B1,CD1CT_ODBSOK_B1;//CCU-D电池低压,ODBS OK

    //CCU-D2-CCU
    //0x828
    int CD2CT_DCUMLifeSignal_I16, CD2CT_SoftWareVersion1_I16,CD2CT_SoftWareVersion2_I16,CD2CT_SoftWareVersion3_I16,//DCUM生命信号, 软件版本号1,软件版本号2,软件版本号3
            CD2CT_SoftWareVersion4_I16;//软件版本号4
    bool CD2CT_CCUDLowVoltage_B1,CD2CT_ODBSOK_B1;//CCU-D电池低压,ODBS OK

    //CCU-CCU-D
    //0x810
    int CTCD_CCULifeSignal_I16,CTCD_TrainNumber_I16;//CCU生命信号,列车号


    //BCU-CCU
    //0x610
    int BRiCT_MassTc12Bog1_I16,BRiCT_MassTc12Bog2_I16,BRiCT_MassMp12Bog1_I16,BRiCT_MassMp12Bog2_I16,//MassTc1/Tc2Bogie1，Tc1/Tc2转向架1载荷 MassTc1/Tc2Bogie2，Tc1/Tc2转向架2载荷 MassMp1/Mp2Bogie1，Mp1/Mp2转向架1载荷 MassMp1/Mp2Bogie1，Mp1/Mp2转向架2载荷
            BRiCT_MassM12Bog1_I16, BRiCT_MassM12Bog2_I16;//MassM1/M2Bogie1，M1/M2转向架1载荷 MassM1/M2Bogie2，M1/M2转向架2载荷

    int BRiCT_ASPTc12Bog1_I16,BRiCT_ASPTc12Bog2_I16,BRiCT_ASPMp12Bog1_I16,BRiCT_ASPMp12Bog2_I16,//ASPTc1/Tc2Bogie1，Tc1/Tc2转向架1ASP压力值 ASPTc1/Tc2Bogie2，Tc1/Tc2转向架2ASP压力值 ASPMp1/Mp2Bogie1 , Mp1/Mp2转向架1ASP压力值 ASPMp1/Mp2Bogie2，Mp1/Mp2转向架2ASP压力值
            BRiCT_ASPM12Bog1_I16,BRiCT_ASPM12Bog2_I16;//ASPM1/M2Bogie1，M1/M2转向架1ASP压力值 ASPM1/M2Bogie2，M1/M2转向架2ASP压力值

    bool BRiCT_MassValidTc12Bog1_B1,BRiCT_MassValidTc12Bog2_B1,BRiCT_MassValidMp12Bog1_B1,BRiCT_MassValidMp12Bog2_B1,//MassTc1/Tc2Bogie1valid，Tc1/Tc2转向架1载荷值有效 MassTc1/Tc2Bogie2valid，Tc1/Tc2转向架2载荷值有效 MassMp1/Mp2Bogie1valid，Mp1/Mp2转向架1载荷值有效 MassMp1/Mp2Bogie2valid，Mp1/Mp2转向架2载荷值有效
            BRiCT_MassValidM12Bog1_B1,BRiCT_MassValidM12Bog2_B1;//MassM1/M2Bogie1valid，M1/M2转向架1载荷值有效 MassM1/M2Bogie2valid，M1/M2转向架2载荷值有效

    bool BRiCT_ASPValidTc12Bog1_B1,BRiCT_ASPValidTc12Bog2_B1,BRiCT_ASPValidMp12Bog1_B1,BRiCT_ASPValidMp12Bog2_B1,//ASPTc1/Tc2Bogie1valid，Tc1/Tc2转向架1空簧压力有效 ASPTc1/Tc2Bogie2valid，Tc1/Tc2转向架2空簧压力有效 ASPMp1/Mp2Bogie1valid，Mp1/Mp2向架1空簧压力有效 ASPMp1/Mp2Bogie2valid，Mp1/Mp2转向架2空簧压力有效
            BRiCT_ASPValidM12Bog1_B1,BRiCT_ASPValidM12Bog2_B1;//ASPM1/M2Bogie1valid，M1/M2转向架1空簧压力有效 ASPM1/M2Bogie2valid，M1/M2转向架2空簧压力有效

    //0x611
    int BRiCT_SpeedTc12Ax1_I16,BRiCT_SpeedTc12Ax2_I16,BRiCT_SpeedTc12Ax3_I16,BRiCT_SpeedTC12Ax4_I16,//Actualspeedofaxle1inCarTc1/Tc2，Tc1/Tc2车1轴线速度 Actualspeedofaxle2inCarTc1/Tc2，Tc1/Tc2车2轴线速度 Actualspeedofaxle3inCarTc1/Tc2，Tc1/Tc2车3轴线速度 Actualspeedofaxle4inCarTc1/Tc2，Tc1/Tc2车4轴线速度
            BRiCT_SpeedMp12Ax1_I16,BRiCT_SpeedMp12Ax2_I16,BRiCT_SpeedMp12Ax3_I16,BRiCT_SpeedMp12Ax4_I16,//Actualspeedofaxle1inCarMp1/Mp2，Mp1/Mp2车1轴线速度 Actualspeedofaxle2inCarMp1/Mp2，Mp1/Mp2车2轴线速度 Actualspeedofaxle3inCarMp1/Mp2，Mp1/Mp2车3轴线速度 Actualspeedofaxle4inCarMp1/Mp2，Mp1/Mp2车4轴线速度
            BRiCT_SpeedM12Ax1_I16,BRiCT_SpeedM12Ax2_I16,BRiCT_SpeedM12Ax3_I16,BRiCT_SpeedM12Ax4_I16,//Actualspeedofaxle1inCarM1/M2，M1/M2车1轴线速度 Actualspeedofaxle2inCarM1/M2，M1/M2车2轴线速度 Actualspeedofaxle3inCarM1/M2，M1/M2车3轴线速度 Actualspeedofaxle4inCarM1/M2，M1/M2车4轴线速度
            BRiCT_MRP_TC_I16,BRiCT_MRP_MP_I16,BRiCT_MRP_M_I16;//MRpressureInTCCar，TC车单元主风管压力 MRpressureInMPCar，MP车单元主风管压力 MRpressureInMCar，M车单元主风管压力

    bool BRiCT_SpeedValTc12Ax1_B1,BRiCT_SpeedValTc12Ax2_B1,BRiCT_SpeedValTc12Ax3_B1,BRiCT_SpeedValTc12Ax4_B1,//Actualspeedofaxle1validinCarTc1/Tc2，Tc1/Tc2车1轴线速度值有效 Actualspeedofaxle2validinCarTc1/Tc2，Tc1/Tc2车2轴线速度值有效 Actualspeedofaxle3validinCarTc1/Tc2，Tc1/Tc2车3轴线速度值有效 Actualspeedofaxle4validinCarTc1/Tc2，Tc1/Tc2车4轴线速度值有效
            BRiCT_SpeedValMp12Ax1_B1,BRiCT_SpeedValMp12Ax2_B1,BRiCT_SpeedValMp12Ax3_B1,BRiCT_SpeedValMp12Ax4_B1;//Actualspeedofaxle1validinCarMp1/Mp2，Mp1/Mp2车1轴线速度值有效  Actualspeedofaxle2validinCarMp1/Mp2，Mp1/Mp2车2轴线速度值有效 Actualspeedofaxle3validinCarMp1/Mp2，Mp1/Mp2车3轴线速度值有效  Actualspeedofaxle4validinCarMp1/Mp2，Mp1/Mp2车4轴线速度值有效

    bool BRiCT_SpeedValM12Ax1_B1,BRiCT_SpeedValM12Ax2_B1,BRiCT_SpeedValM12Ax3_B1,BRiCT_SpeedValM12Ax4_B1,//Actualspeedofaxle1validinCarM1/M2，M1/M2车1轴线速度值有效 Actualspeedofaxle2validinCarM1/M2，M1/M2车2轴线速度值有效 Actualspeedofaxle3validinCarM1/M2，M1/M2车3轴线速度值有效 Actualspeedofaxle4validinCarM1/M2，M1/M2车4轴线速度值有效
            BRiCT_MRPValTC_B1,BRiCT_MRPValMP_B1,BRiCT_MRPValM_B1;//MRpressureValidInTC，TC车主风管压力有效 MRpressureValidInMP，MP车主风管压力有效  MRpressureValidInM，M车主风管压力有效
















private:
};

#endif // DATABASE_H
