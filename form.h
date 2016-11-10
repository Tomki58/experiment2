#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QCursor>
#include <QPainter>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT
    
public:
    explicit Form(QRect, QWidget *parent = 0);
    ~Form();
    
private:
    Ui::Form *ui;

protected:
    void paintEvent(QPaintEvent *);
    QRect T;
};

#endif // FORM_H
