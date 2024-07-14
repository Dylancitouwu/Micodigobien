/********************************************************************************
** Form generated from reading UI file 'viewproducts.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPRODUCTS_H
#define UI_VIEWPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewproducts
{
public:
    QTableWidget *table_view;

    void setupUi(QWidget *viewproducts)
    {
        if (viewproducts->objectName().isEmpty())
            viewproducts->setObjectName("viewproducts");
        viewproducts->resize(418, 351);
        table_view = new QTableWidget(viewproducts);
        if (table_view->columnCount() < 4)
            table_view->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_view->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_view->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_view->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_view->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_view->setObjectName("table_view");
        table_view->setGeometry(QRect(10, 10, 401, 331));

        retranslateUi(viewproducts);

        QMetaObject::connectSlotsByName(viewproducts);
    } // setupUi

    void retranslateUi(QWidget *viewproducts)
    {
        viewproducts->setWindowTitle(QCoreApplication::translate("viewproducts", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_view->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("viewproducts", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_view->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("viewproducts", "Stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_view->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("viewproducts", "Precio", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_view->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("viewproducts", "Total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewproducts: public Ui_viewproducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRODUCTS_H
