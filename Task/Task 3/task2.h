#ifndef TASK2
#define TASK2

#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QWidget>
#include <QDialog>
#include <QString>
#include <iostream>

class MyWindow : public QDialog
{
    Q_OBJECT
public:
    MyWindow(QWidget *parent=0);
private:
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QPushButton *button;
    QLabel *label;
    int zn1,zn2,sum1;
    QString s1,s2,sum2;
private slots:
  void Sum();
};

#endif // TASK2

