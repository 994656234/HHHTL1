#include "maintaincewheeldiametersetpage.h"
#include "ui_maintaincewheeldiametersetpage.h"

#define BUTTONPRESS "color: rgb(255, 255, 255);font:20px \"微软雅黑\";background-color: rgb(193, 193, 193);border-right:2px solid rgb(170,170,170);border-bottom:2px solid rgb(170,170,170);border-radius:0px;"
#define BUTTONRELEASE "color: rgb(255, 255, 255);font:20px \"微软雅黑\";background-color: rgb(0, 0, 100);border-right:2px solid rgb(170,170,170);border-bottom:2px solid rgb(170,170,170);border-radius:0px;"

MaintainceWheelDiameterSetPage::MaintainceWheelDiameterSetPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceWheelDiameterSetPage)
{
    ui->setupUi(this);
    QList<QPushButton*> buttons;
    buttons<<ui->BTN1<<ui->BTN2<<ui->BTN3<<ui->BTN4<<ui->BTN5<<ui->BTN6<<ui->BTN7<<ui->BTN8<<ui->BTN9<<ui->BTNHome
            <<ui->BTNNum0<<ui->BTNNum1<<ui->BTNNum2<<ui->BTNNum3<<ui->BTNNum4<<ui->BTNNum5<<ui->BTNNum6<<ui->BTNNum7
            <<ui->BTNNum8<<ui->BTNNum9<<ui->BTNNumC<<ui->BTNNumClear<<ui->BTNM1SetValue<<ui->BTNM2SetValue<<ui->BTNMetroNumSet
            <<ui->BTNMP1SetValue<<ui->BTNMP2SetValue<<ui->BTNTC1SetValue<<ui->BTNTC2SetValue;

    foreach(QPushButton* button,buttons)
    {
        connect(button,SIGNAL(pressed()),this,SLOT(buttonPressEvent()));
    }

}

MaintainceWheelDiameterSetPage::~MaintainceWheelDiameterSetPage()
{
    delete ui;
}

void MaintainceWheelDiameterSetPage::buttonPressEvent()
{
    QString btnName=((QPushButton*)this->sender())->objectName();
    if(btnName=="BTN1")
    {
        changePage(uVehicleMaintainPage);
    }
    else if(btnName=="BTNHome")
    {
        changePage(uVehicleTrainArea);
    }
    else if(btnName=="BTNTC1SetValue")
    {
        allButtonRelease();
        ui->BTNTC1SetValue->setStyleSheet(BUTTONPRESS);
        currentType=TC1;
    }
    else if(btnName=="BTNMP1SetValue")
    {
        allButtonRelease();
        ui->BTNMP1SetValue->setStyleSheet(BUTTONPRESS);
        currentType=Mp1;
    }
    else if(btnName=="BTNM1SetValue")
    {
        allButtonRelease();
        ui->BTNM1SetValue->setStyleSheet(BUTTONPRESS);
        currentType=M1;
    }
    else if(btnName=="BTNM2SetValue")
    {
        allButtonRelease();
        ui->BTNM2SetValue->setStyleSheet(BUTTONPRESS);
        currentType=M2;
    }
    else if(btnName=="BTNMP2SetValue")
    {
        allButtonRelease();
        ui->BTNMP2SetValue->setStyleSheet(BUTTONPRESS);
        currentType=Mp2;
    }
    else if(btnName=="BTNTC2SetValue")
    {
        allButtonRelease();
        ui->BTNTC2SetValue->setStyleSheet(BUTTONPRESS);
        currentType=TC2;
    }
    else if(btnName=="BTNMetroNumSet")
    {
        allButtonRelease();
        ui->BTNMetroNumSet->setStyleSheet(BUTTONPRESS);
        currentType=MetroType;
    }
    else if(btnName=="BTNNum0")
    {
        switch(currentType)
        {
        case TC1:
            if(ui->BTNTC1SetValue->text().length()<3)
            {
                ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text()+"0");
            }
            else
            {}
            break;
         case Mp1:
            if(ui->BTNMP1SetValue->text().length()<3)
            {
                ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text()+"0");
            }
            else
            {}
            break;
         case M1:
            if(ui->BTNM1SetValue->text().length()<3)
            {
                ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text()+"0");
            }
            else
            {}
            break;
         case M2:
            if(ui->BTNM2SetValue->text().length()<3)
            {
                ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text()+"0");
            }
            else
            {}
            break;
         case Mp2:
            if(ui->BTNMP2SetValue->text().length()<3)
            {
                ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text()+"0");
            }
            else
            {}
            break;
         case TC2:
            if(ui->BTNTC2SetValue->text().length()<3)
            {
                ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text()+"0");
            }
            else
            {}
            break;
         case MetroType:
            if(ui->BTNMetroNumSet->text().length()<3)
            {
                ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text()+"0");
            }
            else
            {}
            break;
        }
    }
    else if(btnName=="BTNNum1")
    {
        switch(currentType)
        {
        case TC1:
            if(ui->BTNTC1SetValue->text().length()<3)
            {
                ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text()+"1");
            }
            else
            {}
            break;
         case Mp1:
            if(ui->BTNMP1SetValue->text().length()<3)
            {
                ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text()+"1");
            }
            else
            {}
            break;
         case M1:
            if(ui->BTNM1SetValue->text().length()<3)
            {
                ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text()+"1");
            }
            else
            {}
            break;
         case M2:
            if(ui->BTNM2SetValue->text().length()<3)
            {
                ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text()+"1");
            }
            else
            {}
            break;
         case Mp2:
            if(ui->BTNMP2SetValue->text().length()<3)
            {
                ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text()+"1");
            }
            else
            {}
            break;
         case TC2:
            if(ui->BTNTC2SetValue->text().length()<3)
            {
                ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text()+"1");
            }
            else
            {}
            break;
         case MetroType:
            if(ui->BTNMetroNumSet->text().length()<3)
            {
                ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text()+"1");
            }
            else
            {}
            break;
        }
    }
    else if(btnName=="BTNNum2")
    {
        switch(currentType)
        {
        case TC1:
            if(ui->BTNTC1SetValue->text().length()<3)
            {
                ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text()+"2");
            }
            else
            {}
            break;
         case Mp1:
            if(ui->BTNMP1SetValue->text().length()<3)
            {
                ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text()+"2");
            }
            else
            {}
            break;
         case M1:
            if(ui->BTNM1SetValue->text().length()<3)
            {
                ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text()+"2");
            }
            else
            {}
            break;
         case M2:
            if(ui->BTNM2SetValue->text().length()<3)
            {
                ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text()+"2");
            }
            else
            {}
            break;
         case Mp2:
            if(ui->BTNMP2SetValue->text().length()<3)
            {
                ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text()+"2");
            }
            else
            {}
            break;
         case TC2:
            if(ui->BTNTC2SetValue->text().length()<3)
            {
                ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text()+"2");
            }
            else
            {}
            break;
         case MetroType:
            if(ui->BTNMetroNumSet->text().length()<3)
            {
                ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text()+"2");
            }
            else
            {}
            break;
        }
    }
    else if(btnName=="BTNNum3")
    {
        switch(currentType)
        {
        case TC1:
            if(ui->BTNTC1SetValue->text().length()<3)
            {
                ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text()+"3");
            }
            else
            {}
            break;
         case Mp1:
            if(ui->BTNMP1SetValue->text().length()<3)
            {
                ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text()+"3");
            }
            else
            {}
            break;
         case M1:
            if(ui->BTNM1SetValue->text().length()<3)
            {
                ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text()+"3");
            }
            else
            {}
            break;
         case M2:
            if(ui->BTNM2SetValue->text().length()<3)
            {
                ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text()+"3");
            }
            else
            {}
            break;
         case Mp2:
            if(ui->BTNMP2SetValue->text().length()<3)
            {
                ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text()+"3");
            }
            else
            {}
            break;
         case TC2:
            if(ui->BTNTC2SetValue->text().length()<3)
            {
                ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text()+"3");
            }
            else
            {}
            break;
         case MetroType:
            if(ui->BTNMetroNumSet->text().length()<3)
            {
                ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text()+"3");
            }
            else
            {}
            break;
        }
    }
        else if(btnName=="BTNNum4")
        {
            switch(currentType)
            {
            case TC1:
                if(ui->BTNTC1SetValue->text().length()<3)
                {
                    ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text()+"4");
                }
                else
                {}
                break;
             case Mp1:
                if(ui->BTNMP1SetValue->text().length()<3)
                {
                    ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text()+"4");
                }
                else
                {}
                break;
             case M1:
                if(ui->BTNM1SetValue->text().length()<3)
                {
                    ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text()+"4");
                }
                else
                {}
                break;
             case M2:
                if(ui->BTNM2SetValue->text().length()<3)
                {
                    ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text()+"4");
                }
                else
                {}
                break;
             case Mp2:
                if(ui->BTNMP2SetValue->text().length()<3)
                {
                    ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text()+"4");
                }
                else
                {}
                break;
             case TC2:
                if(ui->BTNTC2SetValue->text().length()<3)
                {
                    ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text()+"4");
                }
                else
                {}
                break;
             case MetroType:
                if(ui->BTNMetroNumSet->text().length()<3)
                {
                    ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text()+"4");
                }
                else
                {}
                break;
               }
         }
         else if(btnName=="BTNNum5")
        {
             switch(currentType)
             {
             case TC1:
                 if(ui->BTNTC1SetValue->text().length()<3)
                 {
                     ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text()+"5");
                 }
                 else
                 {}
                 break;
              case Mp1:
                 if(ui->BTNMP1SetValue->text().length()<3)
                 {
                     ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text()+"5");
                 }
                 else
                 {}
                 break;
              case M1:
                 if(ui->BTNM1SetValue->text().length()<3)
                 {
                     ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text()+"5");
                 }
                 else
                 {}
                 break;
              case M2:
                 if(ui->BTNM2SetValue->text().length()<3)
                 {
                     ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text()+"5");
                 }
                 else
                 {}
                 break;
              case Mp2:
                 if(ui->BTNMP2SetValue->text().length()<3)
                 {
                     ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text()+"5");
                 }
                 else
                 {}
                 break;
              case TC2:
                 if(ui->BTNTC2SetValue->text().length()<3)
                 {
                     ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text()+"5");
                 }
                 else
                 {}
                 break;
              case MetroType:
                 if(ui->BTNMetroNumSet->text().length()<3)
                 {
                     ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text()+"5");
                 }
                 else
                 {}
                 break;
                }
            }
            else if(btnName=="BTNNum6")
         {
                switch(currentType)
                {
                case TC1:
                    if(ui->BTNTC1SetValue->text().length()<3)
                    {
                        ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text()+"6");
                    }
                    else
                    {}
                    break;
                 case Mp1:
                    if(ui->BTNMP1SetValue->text().length()<3)
                    {
                        ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text()+"6");
                    }
                    else
                    {}
                    break;
                 case M1:
                    if(ui->BTNM1SetValue->text().length()<3)
                    {
                        ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text()+"6");
                    }
                    else
                    {}
                    break;
                 case M2:
                    if(ui->BTNM2SetValue->text().length()<3)
                    {
                        ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text()+"6");
                    }
                    else
                    {}
                    break;
                 case Mp2:
                    if(ui->BTNMP2SetValue->text().length()<3)
                    {
                        ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text()+"6");
                    }
                    else
                    {}
                    break;
                 case TC2:
                    if(ui->BTNTC2SetValue->text().length()<3)
                    {
                        ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text()+"6");
                    }
                    else
                    {}
                    break;
                 case MetroType:
                    if(ui->BTNMetroNumSet->text().length()<3)
                    {
                        ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text()+"6");
                    }
                    else
                    {}
                    break;
                   }
            }
            else if(btnName=="BTNNum7")
            {
                switch(currentType)
                {
                case TC1:
                    if(ui->BTNTC1SetValue->text().length()<3)
                    {
                        ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text()+"7");
                    }
                    else
                    {}
                    break;
                 case Mp1:
                    if(ui->BTNMP1SetValue->text().length()<3)
                    {
                        ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text()+"7");
                    }
                    else
                    {}
                    break;
                 case M1:
                    if(ui->BTNM1SetValue->text().length()<3)
                    {
                        ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text()+"7");
                    }
                    else
                    {}
                    break;
                 case M2:
                    if(ui->BTNM2SetValue->text().length()<3)
                    {
                        ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text()+"7");
                    }
                    else
                    {}
                    break;
                 case Mp2:
                    if(ui->BTNMP2SetValue->text().length()<3)
                    {
                        ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text()+"7");
                    }
                    else
                    {}
                    break;
                 case TC2:
                    if(ui->BTNTC2SetValue->text().length()<3)
                    {
                        ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text()+"7");
                    }
                    else
                    {}
                    break;
                 case MetroType:
                    if(ui->BTNMetroNumSet->text().length()<3)
                    {
                        ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text()+"7");
                    }
                    else
                    {}
                    break;
                   }
            }
            else if(btnName=="BTNNum8")
            {
                switch(currentType)
                {
                case TC1:
                    if(ui->BTNTC1SetValue->text().length()<3)
                    {
                        ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text()+"8");
                    }
                    else
                    {}
                    break;
                 case Mp1:
                    if(ui->BTNMP1SetValue->text().length()<3)
                    {
                        ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text()+"8");
                    }
                    else
                    {}
                    break;
                 case M1:
                    if(ui->BTNM1SetValue->text().length()<3)
                    {
                        ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text()+"8");
                    }
                    else
                    {}
                    break;
                 case M2:
                    if(ui->BTNM2SetValue->text().length()<3)
                    {
                        ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text()+"8");
                    }
                    else
                    {}
                    break;
                 case Mp2:
                    if(ui->BTNMP2SetValue->text().length()<3)
                    {
                        ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text()+"8");
                    }
                    else
                    {}
                    break;
                 case TC2:
                    if(ui->BTNTC2SetValue->text().length()<3)
                    {
                        ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text()+"8");
                    }
                    else
                    {}
                    break;
                 case MetroType:
                    if(ui->BTNMetroNumSet->text().length()<3)
                    {
                        ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text()+"8");
                    }
                    else
                    {}
                    break;
                   }
            }
            else if(btnName=="BTNNum9")
            {
                switch(currentType)
                {
                case TC1:
                    if(ui->BTNTC1SetValue->text().length()<3)
                    {
                        ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text()+"9");
                    }
                    else
                    {}
                    break;
                 case Mp1:
                    if(ui->BTNMP1SetValue->text().length()<3)
                    {
                        ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text()+"9");
                    }
                    else
                    {}
                    break;
                 case M1:
                    if(ui->BTNM1SetValue->text().length()<3)
                    {
                        ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text()+"9");
                    }
                    else
                    {}
                    break;
                 case M2:
                    if(ui->BTNM2SetValue->text().length()<3)
                    {
                        ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text()+"9");
                    }
                    else
                    {}
                    break;
                 case Mp2:
                    if(ui->BTNMP2SetValue->text().length()<3)
                    {
                        ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text()+"9");
                    }
                    else
                    {}
                    break;
                 case TC2:
                    if(ui->BTNTC2SetValue->text().length()<3)
                    {
                        ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text()+"9");
                    }
                    else
                    {}
                    break;
                 case MetroType:
                    if(ui->BTNMetroNumSet->text().length()<3)
                    {
                        ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text()+"9");
                    }
                    else
                    {}
                    break;
                   }
            }
            else if(btnName=="BTNNumC")
            {
                switch(currentType)
                {
                case TC1:
                    ui->BTNTC1SetValue->setText(ui->BTNTC1SetValue->text().left(ui->BTNTC1SetValue->text().length()-1));
                    break;
                 case Mp1:
                    ui->BTNMP1SetValue->setText(ui->BTNMP1SetValue->text().left(ui->BTNMP1SetValue->text().length()-1));
                    break;
                 case M1:
                    ui->BTNM1SetValue->setText(ui->BTNM1SetValue->text().left(ui->BTNM1SetValue->text().length()-1));
                    break;
                 case M2:
                    ui->BTNM2SetValue->setText(ui->BTNM2SetValue->text().left(ui->BTNM2SetValue->text().length()-1));
                    break;
                 case Mp2:
                    ui->BTNMP2SetValue->setText(ui->BTNMP2SetValue->text().left(ui->BTNMP2SetValue->text().length()-1));
                    break;
                 case TC2:
                    ui->BTNTC2SetValue->setText(ui->BTNTC2SetValue->text().left(ui->BTNTC2SetValue->text().length()-1));
                    break;
                 case MetroType:
                    ui->BTNMetroNumSet->setText(ui->BTNMetroNumSet->text().left(ui->BTNMetroNumSet->text().length()-1));
                    break;
                   }
            }
            else if(btnName=="BTNNumClear")
            {
                switch(currentType)
                {
                case TC1:
                    ui->BTNTC1SetValue->setText("");
                    break;
                 case Mp1:
                    ui->BTNMP1SetValue->setText("");
                    break;
                 case M1:
                    ui->BTNM1SetValue->setText("");
                    break;
                 case M2:
                    ui->BTNM2SetValue->setText("");
                    break;
                 case Mp2:
                    ui->BTNMP2SetValue->setText("");
                    break;
                 case TC2:
                    ui->BTNTC2SetValue->setText("");
                    break;
                 case MetroType:
                    ui->BTNMetroNumSet->setText("");
                    break;
                   }
            }
            else if(btnName=="BTN9")
            {

            }
}

void MaintainceWheelDiameterSetPage::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); //消除锯齿效果

    //构造painterpath
    QPainterPath path;
    //司机室1
    path.moveTo(75,31);
    path.lineTo(101,31);
    path.lineTo(101,100);
    path.lineTo(75,100);
    path.lineTo(70,96);
    path.lineTo(70,34);
    path.lineTo(75,30);

    //司机室2
    path.moveTo(939,31);
    path.lineTo(965,31);
    path.lineTo(970,34);
    path.lineTo(970,96);
    path.lineTo(965,100);
    path.lineTo(939,100);
    path.lineTo(939,31);

    //path->setFillRule(Qt::WindingFill);
    //设置无画笔，避免边框出现一条黑线
    painter.setPen(Qt::NoPen);
    //设置画刷
    painter.setBrush(QBrush(QColor(170,170,170), Qt::SolidPattern));
    //绘制背景
    painter.drawPath(path);
    // event->accept();//不再向父类传递消息
}

void MaintainceWheelDiameterSetPage::allButtonRelease()
{
    ui->BTNM1SetValue->setStyleSheet(BUTTONRELEASE);
    ui->BTNM2SetValue->setStyleSheet(BUTTONRELEASE);
    ui->BTNTC1SetValue->setStyleSheet(BUTTONRELEASE);
    ui->BTNTC2SetValue->setStyleSheet(BUTTONRELEASE);
    ui->BTNMP1SetValue->setStyleSheet(BUTTONRELEASE);
    ui->BTNMP2SetValue->setStyleSheet(BUTTONRELEASE);
    ui->BTNMetroNumSet->setStyleSheet(BUTTONRELEASE);
}
