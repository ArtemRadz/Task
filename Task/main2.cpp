#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QScrollBar>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel;
    QWidget *window = new QWidget;
    QSpinBox *spinBox = new QSpinBox();
    QScrollBar *scrollBar = new QScrollBar(Qt::Vertical);
    QSlider *slider = new QSlider(Qt::Horizontal);
    QHBoxLayout *hLayout = new QHBoxLayout;
    window->setFixedSize(500,300);
    scrollBar->setRange(0,100);
    spinBox->setRange(0,100);
    slider->setRange(0,100);
    window->setWindowTitle("Task 2");
    QObject::connect(spinBox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),spinBox,SLOT(setValue(int)));
    QObject::connect(scrollBar,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),scrollBar,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),label,SLOT(setNum(int)));
    hLayout->addWidget(label);
    hLayout->addWidget(slider);
    hLayout->addWidget(spinBox);
    hLayout->addWidget(scrollBar);;
    window->setLayout(hLayout);
    window->show();
    return app.exec();
}

