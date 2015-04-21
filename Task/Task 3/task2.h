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
    int zn1,zn2,sum;
    QString s;
private slots:
  void Sum();
  void setZn1(QString &str);
  void setZn2(QString &str);
  void Sum1();
};

#endif // TASK2

