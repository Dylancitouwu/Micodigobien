#ifndef CLIENT_H
#define CLIENT_H
#include<iostream>
using namespace std;

class Cliente{
private:
    string nombre, correo, dir;
    long id;
    int tel;
public:
    Cliente();
    ~Cliente();
    Cliente(string n, string c, string d, long i, int t);
    string getNombre()const;
    string getCorreo()const;
    string getDir()const;
    long getId()const;
    int getTelef()const;
    //set
    void setNombre(string n);
    void setCorreo(string c);
    void setDir(string d);
    void setId(long i);
    void setTelef(int t);

};


#endif // CLIENT_H
