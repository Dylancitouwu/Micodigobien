/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_usuarios;
    QPushButton *btn_registrar;
    QPushButton *btn_consultar;
    QPushButton *btn_cliente;

    void setupUi(QWidget *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(313, 187);
        gridLayoutWidget = new QWidget(Home);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 291, 167));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_usuarios = new QPushButton(gridLayoutWidget);
        btn_usuarios->setObjectName("btn_usuarios");
        QFont font;
        font.setPointSize(12);
        btn_usuarios->setFont(font);

        gridLayout->addWidget(btn_usuarios, 1, 0, 1, 1);

        btn_registrar = new QPushButton(gridLayoutWidget);
        btn_registrar->setObjectName("btn_registrar");
        btn_registrar->setFont(font);

        gridLayout->addWidget(btn_registrar, 0, 0, 1, 1);

        btn_consultar = new QPushButton(gridLayoutWidget);
        btn_consultar->setObjectName("btn_consultar");
        btn_consultar->setFont(font);

        gridLayout->addWidget(btn_consultar, 3, 0, 1, 1);

        btn_cliente = new QPushButton(gridLayoutWidget);
        btn_cliente->setObjectName("btn_cliente");
        btn_cliente->setFont(font);

        gridLayout->addWidget(btn_cliente, 2, 0, 1, 1);


        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QWidget *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Home", nullptr));
        btn_usuarios->setText(QCoreApplication::translate("Home", "Registrar Usuario", nullptr));
        btn_registrar->setText(QCoreApplication::translate("Home", "Registrar Producto", nullptr));
        btn_consultar->setText(QCoreApplication::translate("Home", "Consultar Productos", nullptr));
        btn_cliente->setText(QCoreApplication::translate("Home", "Registrar Cliente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
