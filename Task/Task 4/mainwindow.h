#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QDialog>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTimer>

class TrafficLight : public QDialog
{
     Q_OBJECT

public:
    TrafficLight(QWidget *parent=0);
private:
    QRadioButton *rButtonRed;
    QRadioButton *rButtonOrange;
    QRadioButton *rButtonGreen;
    QVBoxLayout *vLayout;
    QHBoxLayout *hLayout;
    QVBoxLayout *vMainLayout;
    QPushButton *buttonStart;
    QPushButton *buttonStop;
    QTimer *time;
    int count;
private slots:
    void onLight();
    void offLight();
    void changeLight();
};

#endif // MAINWINDOW_H
