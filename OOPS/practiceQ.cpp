#include<iostream>
#include<string.h>
using namespace std;

class User {
private:
    int id;
    string password;

public: 
    string username;

    // parameterised constructor:
    User(int id){
        this->id = id;
    }

    // getter
    int getId(){
        return id;
    }

    string getPassword(){
        return password;
    }

    // setter:
    void setPassword(string password){
        this->password = password;
    }
};

int main() {
    User u1(101);
    u1.username = "devaki_patil";
    u1.setPassword("devaki@123");

    cout << "username : " << u1.username << endl;
    cout << "userId : " << u1.getId() << endl;
    cout << "password : " << u1.getPassword() << endl;
    return 0;
}