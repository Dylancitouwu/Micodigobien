#include "viewproducts.h"
#include "ui_viewproducts.h"
#include <vector>
#include <string>

viewproducts::viewproducts(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::viewproducts)
    , ptrLp(&lp)
{
    ui->setupUi(this);
    loadProducts();
}

viewproducts::~viewproducts()
{
    delete ui;
}
void viewproducts::loadProducts()
{
    std::vector<product> products = ptrLp->pdao.readProducts(); // Asumiendo que readProducts es un método público de pdao
    ui->table_view->setRowCount(products.size());
    ui->table_view->setColumnCount(4); // Asumiendo 4 columnas: Name, Stock, Price, Total

    QStringList headers = {"Name", "Stock", "Price", "Total"};
    ui->table_view->setHorizontalHeaderLabels(headers);

    for (int i = 0; i < products.size(); ++i) {
        ui->table_view->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(products[i].getName())));
        ui->table_view->setItem(i, 1, new QTableWidgetItem(QString::number(products[i].getStock())));
        ui->table_view->setItem(i, 2, new QTableWidgetItem(QString::number(products[i].getPrice())));

        double total = products[i].getStock() * products[i].getPrice();
        ui->table_view->setItem(i, 3, new QTableWidgetItem(QString::number(total)));
    }
}
