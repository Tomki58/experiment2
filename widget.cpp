#include "widget.h"
#include "ui_widget.h"
#include <QList>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setMouseTracking(true);

}

Widget::~Widget()
{
    delete ui;
}

QPainter j;
QList<QPoint> mass;

void Widget::paintEvent(QPaintEvent *e)
{
    j.begin(this);
    if (!mass.empty())
    {
        j.setPen(Qt::red);
        j.setBrush(Qt::red);
        for (int i = 0; i < mass.size(); i++)
        {
            j.drawEllipse(mass.at(i), 10, 10);
        }
    }
    j.end();
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    mass << QCursor::pos();
    update();
}
