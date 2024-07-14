#ifndef USERDAO_H
#define USERDAO_H
#include "Headers/user.h"
#include <vector>
#include<fstream>
class userDAO{
private:
    user usuario;
    fstream archivo;
public:
    userDAO();
    userDAO(const user& u);
    vector<string> loadUsers();//leer todos los registros del archivo y almarcenarlos en el vector
};

#endif // USERDAO_H
