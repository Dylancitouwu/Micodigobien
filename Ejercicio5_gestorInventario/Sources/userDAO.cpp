#include "Headers/userDAO.h"
#include <iostream>
userDAO::userDAO(){

}
userDAO::userDAO(const user& u){
    this->usuario=u;
}
vector<string> userDAO::loadUsers(){
    vector<string> users;
    archivo.open("C://ejerciciosFS//users.txt",ios::in);
    if(archivo.is_open()){
        string linea="";
        while(getline(archivo,linea)){
            cout<<linea<<endl;
            users.push_back(linea);
        }
        archivo.close();
    }
    return users;
}
