#pragma once

#include <QtWidgets/QMainWindow>
#include <QTimer>
#include "ui_Task37_3.h"
#include<string>
#include<sstream>

class Task37_3 : public QMainWindow
{
    Q_OBJECT
private:
    Ui::Task37_3Class ui;
    QString volume="0";
    QString chanel;
    QTimer* timerClear;
    QTimer* timerShow;

public:
    QLineEdit* lineEdit = nullptr;
    Task37_3(QWidget* parent = nullptr);
    void channelChange(QString &chanel, bool plus);
    void volumeChange(QString &volume, bool plus);
    ~Task37_3();

public slots:
    void add0() { ui.lineEdit_3->setText(ui.lineEdit_3->text() + "0"); };
    void add1() { ui.lineEdit_3->setText(ui.lineEdit_3->text() + "1"); };
    void add2() { ui.lineEdit_3->setText(ui.lineEdit_3->text() + "2"); };
    void add3() { ui.lineEdit_3->setText(ui.lineEdit_3->text() + "3"); };
    void add4() { ui.lineEdit_3->setText(ui.lineEdit_3->text() + "4"); };
    void add5() { ui.lineEdit_3->setText(ui.lineEdit_3->text() + "5"); };
    void add6() { ui.lineEdit_3->setText(ui.lineEdit_3->text() + "6"); };
    void add7() { ui.lineEdit_3->setText(ui.lineEdit_3->text() + "7"); };
    void add8() { ui.lineEdit_3->setText(ui.lineEdit_3->text() + "8"); };
    void add9() { ui.lineEdit_3->setText(ui.lineEdit_3->text() + "9"); };
    void chanelPl() { channelChange(chanel, true); };
    void chanelMi() { channelChange(chanel, false); };
    void volPl() { volumeChange(volume,true); };
    void volMi() { volumeChange(volume,false); };
    void timerClearLineEdit_3() {
        if (!ui.lineEdit_3->displayText().isEmpty()) {
            chanel = ui.lineEdit_3->text();
        }  ui.lineEdit_3->clear();
    };
    void shoWDisplay() { ui.lineEdit->setText(chanel); ui.lineEdit_2->setText(volume+"%");
    };
};
