/********************************************************************************
** Form generated from reading UI file 'sign_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_WIDGET_H
#define UI_SIGN_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_Widget
{
public:
    QPushButton *Sign_BTN;

    void setupUi(QWidget *Sign_Widget)
    {
        if (Sign_Widget->objectName().isEmpty())
            Sign_Widget->setObjectName(QStringLiteral("Sign_Widget"));
        Sign_Widget->resize(397, 156);
        Sign_BTN = new QPushButton(Sign_Widget);
        Sign_BTN->setObjectName(QStringLiteral("Sign_BTN"));
        Sign_BTN->setGeometry(QRect(140, 60, 111, 41));

        retranslateUi(Sign_Widget);

        QMetaObject::connectSlotsByName(Sign_Widget);
    } // setupUi

    void retranslateUi(QWidget *Sign_Widget)
    {
        Sign_Widget->setWindowTitle(QApplication::translate("Sign_Widget", "Form", 0));
        Sign_BTN->setText(QApplication::translate("Sign_Widget", "Sign in", 0));
    } // retranslateUi

};

namespace Ui {
    class Sign_Widget: public Ui_Sign_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_WIDGET_H
