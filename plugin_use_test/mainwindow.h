#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_bold_bar_valueChanged(int value);

    void on_black_button_clicked();

    void on_blue_button_clicked();

    void on_green_button_clicked();

    void on_red_button_clicked();

    void on_button_text_submit_text(const QString &str);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
