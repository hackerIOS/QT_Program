/********************************************************************************
** Form generated from reading UI file 'draw_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_WIDGET_H
#define UI_DRAW_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Draw_Widget
{
public:

    void setupUi(QWidget *Draw_Widget)
    {
        if (Draw_Widget->objectName().isEmpty())
            Draw_Widget->setObjectName(QStringLiteral("Draw_Widget"));
        Draw_Widget->resize(1280, 720);

        retranslateUi(Draw_Widget);

        QMetaObject::connectSlotsByName(Draw_Widget);
    } // setupUi

    void retranslateUi(QWidget *Draw_Widget)
    {
        Draw_Widget->setWindowTitle(QApplication::translate("Draw_Widget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Draw_Widget: public Ui_Draw_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_WIDGET_H
