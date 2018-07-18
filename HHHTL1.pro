#-------------------------------------------------
#
# Project created by QtCreator 2017-07-25T15:35:43
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += network
LIBS += -lPixyMvb
LIBS += -lsqlite3
TARGET = HHHTL1
TEMPLATE = app
DEPENDPATH += . log4qt log4qt/helpers log4qt/spi log4qt/varia
INCLUDEPATH += . log4qt log4qt/helpers log4qt/spi log4qt/varia

SOURCES += main.cpp\
        widget.cpp \
    mybase.cpp \
    database.cpp \
    header.cpp \
    MainGetDefaultPara.cpp \
    navigator.cpp \
    vehiclerunstatepage.cpp \
    log4qt/writerappender.cpp \
    log4qt/ttcclayout.cpp \
    log4qt/simplelayout.cpp \
    log4qt/rollingfileappender.cpp \
    log4qt/propertyconfigurator.cpp \
    log4qt/patternlayout.cpp \
    log4qt/ndc.cpp \
    log4qt/mdc.cpp \
    log4qt/logmanager.cpp \
    log4qt/loggingevent.cpp \
    log4qt/loggerrepository.cpp \
    log4qt/logger.cpp \
    log4qt/log4qt.cpp \
    log4qt/level.cpp \
    log4qt/layout.cpp \
    log4qt/hierarchy.cpp \
    log4qt/fileappender.cpp \
    log4qt/dailyrollingfileappender.cpp \
    log4qt/consoleappender.cpp \
    log4qt/basicconfigurator.cpp \
    log4qt/appenderskeleton.cpp \
    log4qt/helpers/properties.cpp \
    log4qt/helpers/patternformatter.cpp \
    log4qt/helpers/optionconverter.cpp \
    log4qt/helpers/logobjectptr.cpp \
    log4qt/helpers/logobject.cpp \
    log4qt/helpers/logerror.cpp \
    log4qt/helpers/initialisationhelper.cpp \
    log4qt/helpers/factory.cpp \
    log4qt/helpers/datetime.cpp \
    log4qt/helpers/configuratorhelper.cpp \
    log4qt/helpers/classlogger.cpp \
    log4qt/spi/filter.cpp \
    log4qt/varia/stringmatchfilter.cpp \
    log4qt/varia/nullappender.cpp \
    log4qt/varia/listappender.cpp \
    log4qt/varia/levelrangefilter.cpp \
    log4qt/varia/levelmatchfilter.cpp \
    log4qt/varia/denyallfilter.cpp \
    log4qt/varia/debugappender.cpp \
    crrcfaultmapper.cpp \
    crrcfault.cpp \
    crrcmvb.cpp \
    faulttypebean.cpp \
    faultbean.cpp \
    vehiclepasswordpage.cpp \
    vehiclestationbar.cpp \
    vehicletrainarea.cpp \
    vehiclestatusarea.cpp \
    vehicleinformationarea.cpp \
    vehicleairconditionerpage.cpp \
    vehicleauxiliarypage.cpp \
    vehiclelinecircuitbreakerpage.cpp \
    vehicledoorpage.cpp \
    vehiclepispage.cpp \
    vehiclebrakepage.cpp \
    vehicletractpage.cpp \
    vehiclefirewarningpage.cpp \
    vehicleaircompressorpage.cpp \
    vehicletopologypage.cpp \
    vehiclesetpage.cpp \
    vehiclesetstationpage.cpp \
    vehiclesetairconditionpage.cpp \
    vehiclemaintainpage.cpp \
    vehiclemthistoryfaultpage.cpp \
    vehiclemttimesetpage.cpp \
    maintainceallportspage.cpp \
    maintainceinitsetpage.cpp \
    dicontrol.cpp \
    docontrol.cpp \
    maintainceriompage.cpp \
    maintaincewheeldiametersetpage.cpp \
    maintaincesoftwareversionpage.cpp \
    maintaincedatamanagepage.cpp \
    maintainceresetexcisionpage.cpp \
    maintaincecommunicationstatepage.cpp \
    simulation.cpp

HEADERS  += widget.h \
    mybase.h \
    database.h \
    global.h \
    header.h \
    MainGetDefaultPara.h \
    navigator.h \
    vehiclerunstatepage.h \
    log4qt/writerappender.h \
    log4qt/ttcclayout.h \
    log4qt/simplelayout.h \
    log4qt/rollingfileappender.h \
    log4qt/propertyconfigurator.h \
    log4qt/patternlayout.h \
    log4qt/ndc.h \
    log4qt/mdc.h \
    log4qt/logmanager.h \
    log4qt/loggingevent.h \
    log4qt/loggerrepository.h \
    log4qt/logger.h \
    log4qt/log4qt.h \
    log4qt/level.h \
    log4qt/layout.h \
    log4qt/hierarchy.h \
    log4qt/fileappender.h \
    log4qt/dailyrollingfileappender.h \
    log4qt/consoleappender.h \
    log4qt/basicconfigurator.h \
    log4qt/appenderskeleton.h \
    log4qt/appender.h \
    log4qt/helpers/properties.h \
    log4qt/helpers/patternformatter.h \
    log4qt/helpers/optionconverter.h \
    log4qt/helpers/logobjectptr.h \
    log4qt/helpers/logobject.h \
    log4qt/helpers/logerror.h \
    log4qt/helpers/initialisationhelper.h \
    log4qt/helpers/factory.h \
    log4qt/helpers/datetime.h \
    log4qt/helpers/configuratorhelper.h \
    log4qt/helpers/classlogger.h \
    log4qt/spi/filter.h \
    log4qt/varia/stringmatchfilter.h \
    log4qt/varia/nullappender.h \
    log4qt/varia/listappender.h \
    log4qt/varia/levelrangefilter.h \
    log4qt/varia/levelmatchfilter.h \
    log4qt/varia/denyallfilter.h \
    log4qt/varia/debugappender.h \
    crrcfaultmapper.h \
    crrcfault.h \
    crrcmvb.h \
    faulttypebean.h \
    faultbean.h \
    vehiclepasswordpage.h \
    vehiclestationbar.h \
    vehicletrainarea.h \
    vehiclestatusarea.h \
    vehicleinformationarea.h \
    vehicleairconditionerpage.h \
    vehicleauxiliarypage.h \
    vehiclelinecircuitbreakerpage.h \
    vehicledoorpage.h \
    vehiclepispage.h \
    vehiclebrakepage.h \
    vehicletractpage.h \
    vehiclefirewarningpage.h \
    vehicleaircompressorpage.h \
    vehicletopologypage.h \
    vehiclesetpage.h \
    vehiclesetstationpage.h \
    vehiclesetairconditionpage.h \
    vehiclemaintainpage.h \
    vehiclemthistoryfaultpage.h \
    vehiclemttimesetpage.h \
    maintainceallportspage.h \
    maintainceinitsetpage.h \
    dicontrol.h \
    docontrol.h \
    maintainceriompage.h \
    PixyTypes.h \
    PixyMvbLib.h \
    maintaincewheeldiametersetpage.h \
    maintaincesoftwareversionpage.h \
    maintaincedatamanagepage.h \
    maintainceresetexcisionpage.h \
    maintaincecommunicationstatepage.h \
    simulation.h

FORMS    += widget.ui \
    header.ui \
    navigator.ui \
    vehiclerunstatepage.ui \
    vehiclepasswordpage.ui \
    vehiclestationbar.ui \
    vehicletrainarea.ui \
    vehiclestatusarea.ui \
    vehicleinformationarea.ui \
    vehicleairconditionerpage.ui \
    vehicleauxiliarypage.ui \
    vehiclelinecircuitbreakerpage.ui \
    vehicledoorpage.ui \
    vehiclepispage.ui \
    vehiclebrakepage.ui \
    vehicletractpage.ui \
    vehiclefirewarningpage.ui \
    vehicleaircompressorpage.ui \
    vehicletopologypage.ui \
    vehiclesetpage.ui \
    vehiclesetstationpage.ui \
    vehiclesetairconditionpage.ui \
    vehiclemaintainpage.ui \
    vehiclemthistoryfaultpage.ui \
    vehiclemttimesetpage.ui \
    maintainceallportspage.ui \
    maintainceinitsetpage.ui \
    dicontrol.ui \
    docontrol.ui \
    maintainceriompage.ui \
    maintaincewheeldiametersetpage.ui \
    maintaincesoftwareversionpage.ui \
    maintaincedatamanagepage.ui \
    maintainceresetexcisionpage.ui \
    maintaincecommunicationstatepage.ui \
    simulation.ui

RESOURCES += \
    Resource.qrc

OTHER_FILES += \
    log4qt/log4qt.pri
