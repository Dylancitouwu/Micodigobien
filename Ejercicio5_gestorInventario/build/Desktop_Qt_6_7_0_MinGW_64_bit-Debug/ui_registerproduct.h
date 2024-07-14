/********************************************************************************
** Form generated from reading UI file 'registerproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPRODUCT_H
#define UI_REGISTERPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerProduct
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QPushButton *btn_agregar;
    QLineEdit *txt_producto;
    QLineEdit *txt_unidades;
    QPushButton *btn_new;
    QLineEdit *txt_precio;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_previous;
    QPushButton *btn_next;

    void setupUi(QWidget *registerProduct)
    {
        if (registerProduct->objectName().isEmpty())
            registerProduct->setObjectName("registerProduct");
        registerProduct->resize(334, 235);
        gridLayoutWidget = new QWidget(registerProduct);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 311, 208));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        btn_agregar = new QPushButton(gridLayoutWidget);
        btn_agregar->setObjectName("btn_agregar");
        btn_agregar->setFont(font);

        gridLayout->addWidget(btn_agregar, 5, 1, 1, 1);

        txt_producto = new QLineEdit(gridLayoutWidget);
        txt_producto->setObjectName("txt_producto");
        txt_producto->setFont(font);

        gridLayout->addWidget(txt_producto, 1, 1, 1, 1);

        txt_unidades = new QLineEdit(gridLayoutWidget);
        txt_unidades->setObjectName("txt_unidades");
        txt_unidades->setFont(font);

        gridLayout->addWidget(txt_unidades, 2, 1, 1, 1);

        btn_new = new QPushButton(gridLayoutWidget);
        btn_new->setObjectName("btn_new");
        btn_new->setFont(font);

        gridLayout->addWidget(btn_new, 6, 1, 1, 1);

        txt_precio = new QLineEdit(gridLayoutWidget);
        txt_precio->setObjectName("txt_precio");
        txt_precio->setFont(font);

        gridLayout->addWidget(txt_precio, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_previous = new QPushButton(gridLayoutWidget);
        btn_previous->setObjectName("btn_previous");
        btn_previous->setFont(font);

        horizontalLayout->addWidget(btn_previous);

        btn_next = new QPushButton(gridLayoutWidget);
        btn_next->setObjectName("btn_next");
        btn_next->setFont(font);

        horizontalLayout->addWidget(btn_next);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);


        retranslateUi(registerProduct);

        QMetaObject::connectSlotsByName(registerProduct);
    } // setupUi

    void retranslateUi(QWidget *registerProduct)
    {
        registerProduct->setWindowTitle(QCoreApplication::translate("registerProduct", "REGISTRO DE PRODUCTOS", nullptr));
        label_3->setText(QCoreApplication::translate("registerProduct", "Precio:", nullptr));
        label->setText(QCoreApplication::translate("registerProduct", "Producto:", nullptr));
        btn_agregar->setText(QCoreApplication::translate("registerProduct", "Agregar", nullptr));
        btn_new->setText(QCoreApplication::translate("registerProduct", "Nuevo", nullptr));
        label_2->setText(QCoreApplication::translate("registerProduct", "Unidades:", nullptr));
        btn_previous->setText(QCoreApplication::translate("registerProduct", "<<", nullptr));
        btn_next->setText(QCoreApplication::translate("registerProduct", ">>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerProduct: public Ui_registerProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPRODUCT_H
