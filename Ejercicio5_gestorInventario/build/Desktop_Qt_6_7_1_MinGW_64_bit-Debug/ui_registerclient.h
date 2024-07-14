/********************************************************************************
** Form generated from reading UI file 'registerclient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERCLIENT_H
#define UI_REGISTERCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerclient
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *txt_telefono;
    QLabel *label_5;
    QLineEdit *txt_nCliente;
    QLineEdit *txt_direccion;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *txt_correo;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *txt_id;
    QPushButton *btn_addclient;

    void setupUi(QWidget *registerclient)
    {
        if (registerclient->objectName().isEmpty())
            registerclient->setObjectName("registerclient");
        registerclient->resize(358, 241);
        gridLayoutWidget = new QWidget(registerclient);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 331, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        txt_telefono = new QLineEdit(gridLayoutWidget);
        txt_telefono->setObjectName("txt_telefono");

        gridLayout->addWidget(txt_telefono, 4, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        txt_nCliente = new QLineEdit(gridLayoutWidget);
        txt_nCliente->setObjectName("txt_nCliente");

        gridLayout->addWidget(txt_nCliente, 0, 1, 1, 1);

        txt_direccion = new QLineEdit(gridLayoutWidget);
        txt_direccion->setObjectName("txt_direccion");

        gridLayout->addWidget(txt_direccion, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txt_correo = new QLineEdit(gridLayoutWidget);
        txt_correo->setObjectName("txt_correo");

        gridLayout->addWidget(txt_correo, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txt_id = new QLineEdit(gridLayoutWidget);
        txt_id->setObjectName("txt_id");

        gridLayout->addWidget(txt_id, 3, 1, 1, 1);

        btn_addclient = new QPushButton(gridLayoutWidget);
        btn_addclient->setObjectName("btn_addclient");
        btn_addclient->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(btn_addclient, 5, 1, 1, 1, Qt::AlignRight);


        retranslateUi(registerclient);

        QMetaObject::connectSlotsByName(registerclient);
    } // setupUi

    void retranslateUi(QWidget *registerclient)
    {
        registerclient->setWindowTitle(QCoreApplication::translate("registerclient", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("registerclient", "Tel\303\251fono:", nullptr));
        label_4->setText(QCoreApplication::translate("registerclient", "C. I. :", nullptr));
        label_3->setText(QCoreApplication::translate("registerclient", "Direcci\303\263n:", nullptr));
        label_2->setText(QCoreApplication::translate("registerclient", "Correo:", nullptr));
        label->setText(QCoreApplication::translate("registerclient", "Nombre:", nullptr));
        btn_addclient->setText(QCoreApplication::translate("registerclient", "Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerclient: public Ui_registerclient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERCLIENT_H
