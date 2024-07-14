#ifndef LOGIC_CLIENT_H
#define LOGIC_CLIENT_H
#include "Headers/clientDAO.h"
class Logic_client{
public:
    ClientDAO cdao;
    Cliente c;
    Logic_client();
    ~Logic_client();
    bool guardar(string, string, string, long, int);
    vector<string>loadClientes(int);
    int loadTotalClientes();
};

#endif // LOGIC_CLIENT_H
