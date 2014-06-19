#include "button_and_edit.h"
#include "ui_button_and_edit.h"

Button_and_Edit::Button_and_Edit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Button_and_Edit)
{
    ui->setupUi(this);
}

Button_and_Edit::~Button_and_Edit()
{
    delete ui;
}

void Button_and_Edit::on_submit_clicked()
{
    if(!this->text_content.isEmpty() && this->text_content != NULL){
        emit submit_text(this->text_content);
    }
}

void Button_and_Edit::on_InputText_textChanged(const QString &arg1)
{
     this->text_content = arg1;
}

void Button_and_Edit::set_button_enble(bool flag){
    this->ui->submit->setEnabled(flag);
}
