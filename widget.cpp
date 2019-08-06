#include <QCloseEvent>
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowFlag( Qt::WindowStaysOnTopHint );
    this->setWindowTitle( "今日任务" );
}

Widget::~Widget()
{
    delete ui;
}
/*
void Widget::closeEvent( QCloseEvent *event )
{
    event->ignore();
}*/
