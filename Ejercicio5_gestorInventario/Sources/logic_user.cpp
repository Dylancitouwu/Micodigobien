#include"Headers/logic_user.h"
bool logic_user::validar(string u,string p){
    bool access=false;
    vector<string> users=udao.loadUsers();//carga todos los usuarios
    for(const string & usuario:users){
        if(usuario==(u+";"+p)){
            access=true;
        }
    }

    return access;
}
