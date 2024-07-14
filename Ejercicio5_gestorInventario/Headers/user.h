#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
class user{
private:
    string nameUser, psw;
public:
    user();
    ~user();
    user(string u ,string p);
    string getUser()const;
    string getPSW()const;
    void setUser(string u);
    void setPSW(string p);
};

#endif // USER_H
