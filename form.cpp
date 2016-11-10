#include "form.h"
#include "ui_form.h"

Form::Form(QRect ye, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    this->setGeometry(ye);
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

QPainter p;

void Form::paintEvent(QPaintEvent *)
{
    p.begin(this);
    p.setBrush(Qt::blue);
    p.drawLine(0,0,width(), height());
    p.end();
}
