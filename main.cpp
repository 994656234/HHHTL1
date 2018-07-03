#include <QApplication>
#include <QWSServer>
#include "widget.h"
#include <QTextCodec>
#include "log4qt/propertyconfigurator.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));

    QDir tempDir;
    if(!tempDir.exists("OperationRecord/"))
    {
        tempDir.mkpath("OperationRecord/");
    }

    Log4Qt::PropertyConfigurator::configure(a.applicationDirPath()+ "/log4j.properties");

    Widget w;
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.show();


    return a.exec();
}
