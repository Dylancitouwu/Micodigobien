#include "Headers/client.h"


Cliente::Cliente(){
    this->nombre="";
    this->correo="";
    this->dir="";
    this->id=0;
    this->tel=0;
}
Cliente::~Cliente(){}
Cliente::Cliente(string n, string c, string d, long i, int t):nombre(n),correo(c),dir(d),id(i),tel(t){}
string Cliente::getNombre()const{
    return nombre;
}
string Cliente::getCorreo()const{
    return correo;
}
string Cliente::getDir()const{
    return dir;
}
long Cliente::getId()const{
    return id;
}
int Cliente::getTelef()const{
    return tel;
}
//set
void Cliente::setNombre(string n){
    nombre=n;
}
void Cliente::setCorreo(string c){
    correo=c;
}
void Cliente::setDir(string d){
    dir=d;
}
void Cliente::setId(long i){
    id=i;
}
void Cliente::setTelef(int t){
    tel=t;
}
