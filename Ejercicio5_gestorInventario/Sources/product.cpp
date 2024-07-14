#include "Headers/product.h"
product::product(){
    this->name="";
    this->price=0;
    this->stock=0;
}
product::~product(){

}
product::product(string n,int s,double p){
    this->name=n;
    this->price=p;
    this->stock=s;
}
string product::getName()const{
    return name;
}
int product::getStock()const{
    return stock;
}
double product::getPrice()const{
    return price;
}
void product::setName(string n){
    this->name=n;
}
void product::setStock(int s){
     this->stock=s;
}
void product::setPrice(double p){
    this->price=p;
}
string product::information()const{
    return name+";"+to_string(stock)+";"+to_string(price)+"\n";
}
