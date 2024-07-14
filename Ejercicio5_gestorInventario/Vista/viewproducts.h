#ifndef VIEWPRODUCTS_H
#define VIEWPRODUCTS_H

#include <QWidget>
#include <QTableWidget>
#include "Headers/logic_product.h"
namespace Ui {
class viewproducts;
}

class viewproducts : public QWidget
{
    Q_OBJECT

public:
    explicit viewproducts(QWidget *parent = nullptr);
    ~viewproducts();
    void loadProducts();

private:
    Ui::viewproducts *ui;
    logic_product lp;
    logic_product *ptrLp;
};

#endif // VIEWPRODUCTS_H
