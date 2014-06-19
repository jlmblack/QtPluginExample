#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if(!this->ui->mWidget->autoFillBackground()){
        qDebug() << "false!!";
        this->ui->mWidget->setAutoFillBackground(true);
    }
    this->ui->mWidget->setStyleSheet("background-color:white;");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bold_bar_valueChanged(int value)
{
    this->ui->mWidget->change_bold(value);
}

void MainWindow::on_black_button_clicked()
{
    this->ui->mWidget->change_color(QColor(0,0,0));
}

void MainWindow::on_blue_button_clicked()
{
    this->ui->mWidget->change_color(QColor(0,0,255));
}

void MainWindow::on_green_button_clicked()
{
    this->ui->mWidget->change_color(QColor(0,255,0));
}

void MainWindow::on_red_button_clicked()
{
    this->ui->mWidget->change_color(QColor(255,0,0));
}

void MainWindow::on_button_text_submit_text(const QString &str)
{
    this->ui->dislay_label->setText(str);
}
