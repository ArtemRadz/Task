#include "task2.h"

MyWindow::MyWindow(QWidget *parent) : QDialog(parent)
{
    lineEdit1 = new QLineEdit;
    lineEdit2 = new QLineEdit;
    button = new QPushButton("Додати числа");
    label = new QLabel();
    setWindowTitle("Task 3");
    QHBoxLayout *hLayout = new QHBoxLayout;
    QVBoxLayout *vLayout = new QVBoxLayout;
    QVBoxLayout *mainLayout = new QVBoxLayout;
    button->setDefault(true);
    hLayout->addWidget(lineEdit1);
    hLayout->addWidget(lineEdit2);
    vLayout->addWidget(button);
    vLayout->addWidget(label);
    mainLayout->addLayout(hLayout);
    mainLayout->addLayout(vLayout);
    setLayout(mainLayout);
    connect(button,SIGNAL(clicked()),this,SLOT(Sum()));
}
void MyWindow::Sum()
{
    s1=lineEdit1->text();
    s2=lineEdit2->text();
    zn1=s1.toInt();
    zn2=s2.toInt();
    sum1=zn1-zn2;
    sum2=QString::number(sum1);
    button->setText(sum2);
}
