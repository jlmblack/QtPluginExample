/********************************************************************************
** Form generated from reading UI file 'my_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY_WIDGET_H
#define UI_MY_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_my_widget
{
public:

    void setupUi(QWidget *my_widget)
    {
        if (my_widget->objectName().isEmpty())
            my_widget->setObjectName(QStringLiteral("my_widget"));
        my_widget->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(my_widget->sizePolicy().hasHeightForWidth());
        my_widget->setSizePolicy(sizePolicy);
        my_widget->setAutoFillBackground(false);
        my_widget->setStyleSheet(QStringLiteral("background-color:white;"));

        retranslateUi(my_widget);

        QMetaObject::connectSlotsByName(my_widget);
    } // setupUi

    void retranslateUi(QWidget *my_widget)
    {
        my_widget->setWindowTitle(QApplication::translate("my_widget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class my_widget: public Ui_my_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY_WIDGET_H
