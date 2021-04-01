#include "mywidget.h"
#include <QPushButton>
#include <QDebug>
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton * btn=new QPushButton;
    //btn->show();
    qDebug("sssss");
    btn->setParent(this);
//
}

myWidget::~myWidget()
{
}

