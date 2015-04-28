#include "mainwindow.h"

TrafficLight::TrafficLight(QWidget *parent) : QDialog(parent)
{
    rButtonRed = new QRadioButton(tr("Red"));
    rButtonOrange = new QRadioButton(tr("Orange"));
    rButtonGreen = new QRadioButton(tr("Green"));
    buttonStart = new QPushButton(tr("Start"));
    buttonStop = new QPushButton(tr("Stop"));
    hLayout = new QHBoxLayout;
    vMainLayout = new QVBoxLayout;
    vLayout = new QVBoxLayout;
    time= new QTimer;
    rButtonRed->setChecked(true);
    //count = 3;
    vLayout->addWidget(rButtonRed);
    vLayout->addWidget(rButtonOrange);
    vLayout->addWidget(rButtonGreen);
    hLayout->addWidget(buttonStart);
    hLayout->addWidget(buttonStop);
    vMainLayout->addLayout(vLayout);
    vMainLayout->addLayout(hLayout);
    setLayout(vMainLayout);
    setWindowTitle(tr("Task4"));
    connect(buttonStart, SIGNAL(clicked()), this, SLOT(onLight()));
    connect(buttonStop, SIGNAL(clicked()), this, SLOT(offLight()));
}

void TrafficLight::onLight()
{
    time->start(1000);
    connect(time, SIGNAL(timeout()), this, SLOT(changeLight()));
}

void TrafficLight::offLight()
{
    time->stop();
}

void TrafficLight::changeLight()
{
    if(rButtonRed->isChecked())
    {
        rButtonOrange->setChecked(true);
        count = 1;
    }
    else if(rButtonOrange->isChecked())
    {
        if(count == 1)
        {
            rButtonGreen->setChecked(true);
        }
        else if(count == 2)
        {
            rButtonRed->setChecked(true);
        }
    }
    else if(rButtonGreen->isChecked())
    {
        rButtonOrange->setChecked(true);
        count = 2;
    }
}
