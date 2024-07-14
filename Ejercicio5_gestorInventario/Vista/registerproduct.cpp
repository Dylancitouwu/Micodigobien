#include "registerProduct.h"
#include <QMessageBox>
#include "ui_registerproduct.h"

registerProduct::registerProduct(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerProduct)
    , index(0)
    , totalProducts(0)
{
    ui->setupUi(this);
    ui->btn_agregar->setEnabled(false);
    ptrLp = &lp;

    connect(ui->btn_agregar, SIGNAL(clicked()), this, SLOT(saveProduct()));
    connect(ui->btn_next, SIGNAL(clicked()), this, SLOT(next()));
    connect(ui->btn_previous, SIGNAL(clicked()), this, SLOT(prev()));
    connect(ui->btn_new, SIGNAL(clicked()), this, SLOT(newProduct()));

    // Cargar el primer producto al iniciar la interfaz
    totalProducts = ptrLp->loadTotalProducts();
    /*if (totalProducts > 0) {
        loadFields(index);
    } else {
        QMessageBox::information(this, "Registro de Productos", "No hay productos registrados.");
    }*/
}

registerProduct::~registerProduct()
{
    delete ui;
}

void registerProduct::saveProduct() {
    string nameProduct = ui->txt_producto->text().toStdString();
    int stock = ui->txt_unidades->text().toInt();
    double price = ui->txt_precio->text().toDouble();
    if (ptrLp->save(nameProduct, stock, price)) {
        QMessageBox::information(this, "Registro de productos", "Registro exitoso");
        clearFields();
        totalProducts++;
        index = totalProducts - 1;
    }
}

void registerProduct::clearFields() {
    ui->txt_producto->clear();
    ui->txt_precio->clear();
    ui->txt_unidades->clear();
}

void registerProduct::loadFields(int index) {
    ui->btn_agregar->setEnabled(false);
    std::vector<std::string> p = ptrLp->loadInfoProduct(index);
    if (p.size() > 0) {
        ui->txt_producto->setText(QString::fromStdString(p[0]));
        ui->txt_unidades->setText(QString::fromStdString(p[1]));
        ui->txt_precio->setText(QString::fromStdString(p[2]));
    } else {
        QMessageBox::information(this, "Registro de Productos", "No existen más productos.");
    }
}

void registerProduct::prev() {
    if (index > 0) {
        index--;
        loadFields(index);
    } else {
        QMessageBox::information(this, "Registro de Productos", "Este es el primer producto.");
    }
}

void registerProduct::next() {
    if (index < totalProducts - 1) {
        index++;
        loadFields(index);
    } else {
        QMessageBox::information(this, "Registro de Productos", "Este es el último producto.");
    }
}

void registerProduct::newProduct() {
    clearFields();
    ui->btn_agregar->setEnabled(true);
}
