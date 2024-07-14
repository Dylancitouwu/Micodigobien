#include "Headers/clientDAO.h"
#include <iostream>
#include <sstream>

ClientDAO::ClientDAO(){}
ClientDAO::ClientDAO(const Cliente& c){
    this->cliente=c;
}
vector<string> split(string str, char delimitador) {
    vector<string> tokens;
    stringstream ss(str);
    string item;
    while (getline(ss, item, delimitador)) {
        tokens.push_back(item);
    }
    return tokens;
}
vector<Cliente> ClientDAO::readClients(){
    vector<Cliente> clients;
    vector <string> datafile;
    archivo.open("C://ejerciciosFS//clientes.txt",ios::in);
    if(archivo.is_open()){
        string linea;
        while(getline(archivo,linea)){
            datafile.push_back(linea);
        }
        archivo.close();
    }
    for (const auto &str : datafile) {
        vector<string> tokens = split(str, ';'); // separa por ;
        if (tokens.size() == 5) {
            Cliente c;
            c.setNombre(tokens[0]);
            c.setCorreo(tokens[1]);
            c.setDir(tokens[2]);
            c.setId(stoi(tokens[3]));
            c.setTelef(stod(tokens[4]));
            clients.push_back(c);
        }
    }
    return clients;
}
void ClientDAO::writeClients(const vector<Cliente>& clients) {
    archivo.open("C://ejerciciosFS//clientes.txt", ios::app);
    if (archivo.is_open()) {
        for (const auto& c : clients) {
            archivo << c.getNombre() << ";"
                    << c.getCorreo() << ";"
                    << c.getDir() << ";"
                    << c.getId() << ";"
                    << c.getTelef() << endl;
        }
        archivo.close();
    }
}
