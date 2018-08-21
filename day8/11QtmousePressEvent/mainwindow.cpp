#include "mainwindow.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(500,300,600,400);
}

MainWindow::~MainWindow()
{
}
//  mousePressEvent
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        cout<<"("<<e->x()<<","<<e->y()<<")"<<endl;
        cout<<"("<<e->globalX()<<","<<e->globalY()<<")"<<endl;
    }
}
