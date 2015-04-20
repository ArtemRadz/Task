#include <QApplication>
#include <QPushButton>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QPushButton *pb = new QPushButton("close");
    pb->show();
    QObject::connect(pb,SIGNAL(clicked()),&app,SLOT(quit()));
    return app.exec();
}
