#include "my_widget.h"
#include "ui_my_widget.h"
#include <QDebug>

my_widget::my_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::my_widget)
{
    ui->setupUi(this);
    this->draw_bold = 4;
    this->draw_color = QColor(0,0,0);
    this->qimg = new QImage(this->width(),this->height(),QImage::Format_RGB888);
    this->qimg->fill(QColor(255,255,255));
    this->pen = QPen();
    this->pen.setColor(this->draw_color);
    this->pen.setWidth(this->draw_bold);
    this->pen.setStyle(Qt::SolidLine);
    this->pre_pt = QPoint(-1,-1);
    this->button_flag = false;
}

my_widget::~my_widget()
{
    delete this->qimg;
    delete ui;
}


int my_widget::bold() const{
    return this->draw_bold;
}


void my_widget::setBold(int set_bold){
    this->draw_bold = set_bold;
    this->pen.setWidth(this->draw_bold);
}


void my_widget::change_bold(int b){
    this->draw_bold = b;
    this->pen.setWidth(this->draw_bold);
}


QColor my_widget::color() const{
    return this->draw_color;
}


void my_widget::setColor(QColor set_color){
    this->draw_color = set_color;
    this->pen.setColor(this->draw_color);
}


void my_widget::change_color(QColor c){
    this->draw_color = c;
    this->pen.setColor(this->draw_color);
}


void my_widget::paintEvent(QPaintEvent *){
    if(this->qimg != NULL){
        this->adjust_image();
        QPainter widgetPainter(this);
        widgetPainter.drawImage(0,0,*this->qimg);
    }
}



void my_widget::adjust_image(){
    QImage* sub = new QImage(this->width(),this->height(),QImage::Format_RGB888);
    sub->fill(QColor(255,255,255));
    QPainter painter(sub);
    int minh = this->qimg->height() < this->height() ? this->qimg->height() : this->height();
    int minw = this->qimg->width() < this->width() ? this->qimg->width() : this->width();
    painter.drawImage(QRect(0,0,minh,minw),*this->qimg);
    delete this->qimg;
    this->qimg = sub;
}



void my_widget::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton)
          this->button_flag = true;

}


void my_widget::mouseMoveEvent(QMouseEvent *event){
    QPoint pt = event->pos();
    if(this->button_flag){
        qDebug() << "yes";
        if(0 <= pt.x() && pt.x() <= this->width()){
            if(0 <= pt.y() && pt.y() <= this->height()){
                if(this->pre_pt.x() != -1 && this->pre_pt.y() != -1){
                    QPainter painter(this->qimg);
                    painter.setPen(this->pen);
                    painter.drawLine(pre_pt,pt);
                    qDebug() << pt.x() << "," << pt.y();
                    update();
                }
                this->pre_pt = pt;
            }
        }
    }
}


void my_widget::mouseReleaseEvent(QMouseEvent *event){
    this->button_flag = false;
    this->pre_pt = QPoint(-1,-1);
}
