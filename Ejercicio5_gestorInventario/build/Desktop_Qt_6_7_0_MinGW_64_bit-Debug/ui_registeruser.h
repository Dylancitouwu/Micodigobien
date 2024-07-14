/********************************************************************************
** Form generated from reading UI file 'registeruser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERUSER_H
#define UI_REGISTERUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registeruser
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *txt_user;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txt_psw;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_confirmarpsw;
    QPushButton *btn_add;

    void setupUi(QWidget *registeruser)
    {
        if (registeruser->objectName().isEmpty())
            registeruser->setObjectName("registeruser");
        registeruser->resize(359, 206);
        verticalLayoutWidget = new QWidget(registeruser);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 341, 184));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        txt_user = new QLineEdit(verticalLayoutWidget);
        txt_user->setObjectName("txt_user");

        horizontalLayout_2->addWidget(txt_user);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        txt_psw = new QLineEdit(verticalLayoutWidget);
        txt_psw->setObjectName("txt_psw");
        QFont font;
        font.setHintingPreference(QFont::PreferDefaultHinting);
        txt_psw->setFont(font);
        txt_psw->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(txt_psw);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        txt_confirmarpsw = new QLineEdit(verticalLayoutWidget);
        txt_confirmarpsw->setObjectName("txt_confirmarpsw");
        txt_confirmarpsw->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(txt_confirmarpsw);


        verticalLayout->addLayout(horizontalLayout_3);

        btn_add = new QPushButton(verticalLayoutWidget);
        btn_add->setObjectName("btn_add");

        verticalLayout->addWidget(btn_add);


        retranslateUi(registeruser);

        QMetaObject::connectSlotsByName(registeruser);
    } // setupUi

    void retranslateUi(QWidget *registeruser)
    {
        registeruser->setWindowTitle(QCoreApplication::translate("registeruser", "Form", nullptr));
        label->setText(QCoreApplication::translate("registeruser", "Usuario:", nullptr));
        label_2->setText(QCoreApplication::translate("registeruser", "Clave:", nullptr));
        label_3->setText(QCoreApplication::translate("registeruser", "Confirmar", nullptr));
        btn_add->setText(QCoreApplication::translate("registeruser", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registeruser: public Ui_registeruser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERUSER_H
