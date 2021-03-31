#include "mywidget.h"
#include <QPushButton>
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton * btn=new QPushButton;
    //btn->show();
    btn->setParent(this);

}

myWidget::~myWidget()
{
}

