/********************************************************************************
** Form generated from reading UI file 'welcome_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_WIDGET_H
#define UI_WELCOME_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome_Widget
{
public:

    void setupUi(QWidget *Welcome_Widget)
    {
        if (Welcome_Widget->objectName().isEmpty())
            Welcome_Widget->setObjectName(QStringLiteral("Welcome_Widget"));
        Welcome_Widget->resize(379, 86);

        retranslateUi(Welcome_Widget);

        QMetaObject::connectSlotsByName(Welcome_Widget);
    } // setupUi

    void retranslateUi(QWidget *Welcome_Widget)
    {
        Welcome_Widget->setWindowTitle(QApplication::translate("Welcome_Widget", "Welcome_Widget", 0));
    } // retranslateUi

};

namespace Ui {
    class Welcome_Widget: public Ui_Welcome_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_WIDGET_H
