#ifndef LOGIC_USER_H
#define LOGIC_USER_H
#include "Headers/userDAO.h"
class logic_user{
private:
    userDAO udao;
    user u;
public:
    bool validar(string u,string p);
};

#endif // LOGIC_USER_H
