#ifndef REGISTERPRODUCT_H
#define REGISTERPRODUCT_H

#include "Headers/logic_product.h"
#include <QWidget>
#include <vector>
#include <string>

namespace Ui {
class registerProduct;
}

class registerProduct : public QWidget
{
    Q_OBJECT

public:
    explicit registerProduct(QWidget *parent = nullptr);
    ~registerProduct();

private:
    Ui::registerProduct *ui;
    logic_product lp;
    logic_product *ptrLp;
    void clearFields();
    void loadFields(int index); // cargar los campos del producto
    int index;
    int totalProducts;

private slots:
    void saveProduct();
    void prev();
    void next();
    void newProduct();
};

#endif // REGISTERPRODUCT_H
