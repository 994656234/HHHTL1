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

    //HMI




















private:
};

#endif // DATABASE_H
