#ifndef LOGIC_PRODUCT_H
#define LOGIC_PRODUCT_H
#include "Headers/productDAO.h"
#include <vector>
#include <string>

class logic_product {
public:
    productDAO pdao;
    logic_product();
    ~logic_product();
    bool save(std::string, int, double);
    std::vector<std::string> loadInfoProduct(int); // Permite recorrer cada producto almacenado
    int loadTotalProducts(); // Nuevo método para obtener el total de productos
};

#endif // LOGIC_PRODUCT_H
