#ifndef CLIENTDAO_H
#define CLIENTDAO_H
#include "Headers/client.h"
#include <vector>
#include <fstream>

class ClientDAO{
private:
    Cliente cliente;
    fstream archivo;
public:
    ClientDAO();
    ClientDAO(const Cliente& c);
    void writeClients(const vector<Cliente>& clients);
    vector<Cliente>readClients();
};


#endif // CLIENTDAO_H
