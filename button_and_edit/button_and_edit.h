#ifndef BUTTON_AND_EDIT_H
#define BUTTON_AND_EDIT_H

#include <QWidget>
#include <QtDesigner/QtDesigner>
#include <QWidget>
#include <QString>


namespace Ui {
class Button_and_Edit;
}

class Button_and_Edit : public QWidget
{
    Q_OBJECT

public:
    explicit Button_and_Edit(QWidget *parent = 0);
    ~Button_and_Edit();

private:
    Ui::Button_and_Edit *ui;

signals:
    void submit_text(QString str);

public slots:
    void set_button_enble(bool flag);

private slots:
    void on_submit_clicked();

    void on_InputText_textChanged(const QString &arg1);

private:
    QString text_content;
};

#endif // BUTTON_AND_EDIT_H
