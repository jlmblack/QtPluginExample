/********************************************************************************
** Form generated from reading UI file 'button_and_edit.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTON_AND_EDIT_H
#define UI_BUTTON_AND_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Button_and_Edit
{
public:
    QPushButton *submit;
    QLineEdit *InputText;

    void setupUi(QWidget *Button_and_Edit)
    {
        if (Button_and_Edit->objectName().isEmpty())
            Button_and_Edit->setObjectName(QStringLiteral("Button_and_Edit"));
        Button_and_Edit->resize(400, 56);
        submit = new QPushButton(Button_and_Edit);
        submit->setObjectName(QStringLiteral("submit"));
        submit->setGeometry(QRect(320, 10, 61, 34));
        InputText = new QLineEdit(Button_and_Edit);
        InputText->setObjectName(QStringLiteral("InputText"));
        InputText->setGeometry(QRect(20, 10, 281, 31));

        retranslateUi(Button_and_Edit);

        QMetaObject::connectSlotsByName(Button_and_Edit);
    } // setupUi

    void retranslateUi(QWidget *Button_and_Edit)
    {
        Button_and_Edit->setWindowTitle(QApplication::translate("Button_and_Edit", "Form", 0));
        submit->setText(QApplication::translate("Button_and_Edit", "\346\261\272\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Button_and_Edit: public Ui_Button_and_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTON_AND_EDIT_H
