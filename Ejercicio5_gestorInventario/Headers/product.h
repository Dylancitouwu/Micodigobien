#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class product{
private:
    string name;
    int stock;
    double price;
public:
    product();
    ~product();
    product(string,int,double);
    string getName()const;
    int getStock()const;
    double getPrice()const;
    void setName(string);
    void setStock(int);
    void setPrice(double);
    string information()const;
};


#endif // PRODUCT_H
