#include "Task37_3.h"

Task37_3::Task37_3(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    timerClear = new QTimer();
    timerShow = new QTimer();
    timerClear->setInterval(4000);
   /* timerClear->setSingleShot(true);*/
    timerShow->setInterval(500);
    connect(timerClear, SIGNAL(timeout()), this, SLOT(timerClearLineEdit_3()));
    connect(timerShow, SIGNAL(timeout()), this, SLOT(shoWDisplay()));
    timerClear->start();
    timerShow->start();
}
void Task37_3::channelChange(QString &chanel,bool plus)
{
    QString temp = chanel;
    std::string tem = temp.toStdString();
    std::stringstream text(tem);
    int a;
    text >> a;
    (plus) ? a++ : a--;
    if (a > 99) a = 0;
    if (a < 0)a = 99;
    chanel=QString::fromStdString(std::to_string(a));
}
void Task37_3::volumeChange(QString &volume,bool plus)
{
    QString temp = volume;
    std::string tem = temp.toStdString();
    std::stringstream text(tem);
    int b;
    text >> b;
    
    (plus) ? b += 10 : b -= 10;
    if (b > 99) b = 100;
    if (b < 0) b = 0;
    volume = QString::fromStdString(std::to_string(b));
}

Task37_3::~Task37_3()
{}
