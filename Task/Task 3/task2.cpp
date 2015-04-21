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
    connect(lineEdit1,SIGNAL(textChanged(QString)),this,SLOT(Zn1(QString&)));
    connect(lineEdit2,SIGNAL(textChanged(QString)),this,SLOT(Zn2(QString&)));
    connect(button,SIGNAL(clicked()),this,SLOT(Sum()));
    connect(this,SIGNAL(Sum1()),label,SLOT(setText(s)));
}
void MyWindow::setZn1(QString &str)
{
    zn1=str.toInt();
}
void MyWindow::setZn2(QString &str2)
{
    zn2=str2.toInt();
}
void MyWindow::Sum()
{
    sum = zn1+zn2;
}
void MyWindow::Sum1()
{
    s=(QString::number(sum));
    emit (label->setText(s));
}
