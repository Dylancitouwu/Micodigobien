#include "Headers/productDAO.h"
#include <QDebug>
#include <string>
#include <sstream>
using namespace std;

vector<string> splitC(string str, char delimitador) {
    vector<string> tokens;
    stringstream ss(str);
    string item;
    while (getline(ss, item, delimitador)) {
        tokens.push_back(item);
    }
    return tokens;
}

productDAO::productDAO() {}

productDAO::~productDAO() {}

productDAO::productDAO(const product& p_) : p(p_) {}

void productDAO::writeProducts() {
    archivo.open(path, ios::app);
    if (archivo.is_open()) {
        archivo << p.information() << endl;
        archivo.close();
    }
}

vector<product> productDAO::readProducts() {
    vector<product> products;
    vector<string> datafile; // recupera el contenido del archivo
    archivo.open(path, ios::in);
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            datafile.push_back(linea);
        }
        archivo.close();
    }
    for (const auto &str : datafile) {
        vector<string> tokens = splitC(str, ';'); // separa por ;
        if (tokens.size() == 3) {
            product p;
            p.setName(tokens[0]);
            p.setStock(stoi(tokens[1]));
            p.setPrice(stod(tokens[2]));
            products.push_back(p);
        }
    }
    return products;
}
