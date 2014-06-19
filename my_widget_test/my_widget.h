#ifndef MY_WIDGET_H
#define MY_WIDGET_H

#include <QtDesigner/QtDesigner>
#include <QWidget>
#include <QColor>
#include <QEvent>
#include <QPoint>
#include <QImage>
#include <QPixmap>
#include <QPen>

namespace Ui {
class my_widget;
}

class my_widget : public QWidget
{
    Q_OBJECT

    Q_PROPERTY(int bold READ bold WRITE setBold)
    Q_PROPERTY(QColor color READ color WRITE setColor)


    int bold() const;
    void setBold(int set_bold);

    QColor color() const;
    void setColor(QColor set_color);

public:
    explicit my_widget(QWidget *parent = 0);
    ~my_widget();

protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

public slots:
    void change_color(QColor c);
    void change_bold(int b);

private:
    Ui::my_widget *ui;
    QColor draw_color;
    int draw_bold;
    QImage* qimg;
    void adjust_image();
    QPoint pre_pt;
    QPen pen;
    bool button_flag;
};

#endif // MY_WIDGET_H
