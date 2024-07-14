#include "Headers/logic_client.h"

Logic_client::Logic_client(){}
Logic_client::~Logic_client(){}
bool Logic_client::guardar(string nombre, string correo, string dir, long id, int tel){
    Cliente c(nombre, correo, dir, id, tel);
    ClientDAO cdao(c);
    vector<Cliente>clients ={c};
    cdao.writeClients(clients);
    return true;
}
vector<string>Logic_client::loadClientes(int index){
    vector <string> infoC;
    vector <Cliente> clients =cdao.readClients();
    int size=clients.size();
    if(index>=0&& index<size){
        infoC.push_back(clients[index].getNombre());
        infoC.push_back(clients[index].getCorreo());
        infoC.push_back(clients[index].getDir());
        infoC.push_back(to_string(clients[index].getId()));
        infoC.push_back(to_string(clients[index].getTelef()));
    }
    return infoC;
}
int Logic_client::loadTotalClientes(){
    vector<Cliente>clients=cdao.readClients();
    return clients.size();
}
