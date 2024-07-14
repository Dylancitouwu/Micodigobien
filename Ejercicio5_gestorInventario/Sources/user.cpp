#include "Headers/user.h"

user::user(){
    this->nameUser="";
    this->psw="";
}
user::~user(){}
user::user(string u,string p):nameUser(u),psw(p){}
string user::getUser()const{
    return nameUser;
}
string user::getPSW()const{
    return psw;
}
void user::setUser(string u){
    nameUser=u;
}
void user::setPSW(string p){
    psw=p;
}
