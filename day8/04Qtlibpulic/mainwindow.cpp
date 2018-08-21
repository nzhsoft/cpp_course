#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      _pushBt(new QPushButton(this))
{
    _pushBt->setGeometry(200,200,50,50);

    connect(_pushBt,SIGNAL(clicked(bool)),this,SLOT(close()));
}

MainWindow::~MainWindow()
{

}
