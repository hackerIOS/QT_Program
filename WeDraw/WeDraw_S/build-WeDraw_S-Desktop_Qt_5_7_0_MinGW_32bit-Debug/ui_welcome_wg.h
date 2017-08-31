/********************************************************************************
** Form generated from reading UI file 'welcome_wg.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_WG_H
#define UI_WELCOME_WG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome_WG
{
public:
    QLabel *label;

    void setupUi(QWidget *Welcome_WG)
    {
        if (Welcome_WG->objectName().isEmpty())
            Welcome_WG->setObjectName(QStringLiteral("Welcome_WG"));
        Welcome_WG->resize(346, 81);
        label = new QLabel(Welcome_WG);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, 0, 361, 81));
        QFont font;
        font.setPointSize(37);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Welcome_WG);

        QMetaObject::connectSlotsByName(Welcome_WG);
    } // setupUi

    void retranslateUi(QWidget *Welcome_WG)
    {
        Welcome_WG->setWindowTitle(QApplication::translate("Welcome_WG", "Welcome_WG", 0));
        label->setText(QApplication::translate("Welcome_WG", "WeDraw", 0));
    } // retranslateUi

};

namespace Ui {
    class Welcome_WG: public Ui_Welcome_WG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_WG_H
