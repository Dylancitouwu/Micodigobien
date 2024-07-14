#include "Headers/logic_product.h"

logic_product::logic_product() {}

logic_product::~logic_product() {}

bool logic_product::save(std::string nameProduct, int stock, double price) {
    product p(nameProduct, stock, price);
    productDAO pdao(p);
    pdao.writeProducts();
    return true;
}

std::vector<std::string> logic_product::loadInfoProduct(int index) {
    std::vector<std::string> infoP;
    std::vector<product> products = pdao.readProducts();
    int size = products.size();
    if (index >= 0 && index < size) {
        infoP.push_back(products[index].getName());
        infoP.push_back(std::to_string(products[index].getStock()));
        infoP.push_back(std::to_string(products[index].getPrice()));
    }
    return infoP;
}

int logic_product::loadTotalProducts() {
    std::vector<product> products = pdao.readProducts();
    return products.size();
}
