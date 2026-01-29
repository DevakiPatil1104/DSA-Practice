#include<iostream>
#include<string.h>
using namespace std;

class Car {
    string name;
    string color;

public:
    // non-parametrized constructor
    Car(){
        cout << "constructor without params\n";
    }

    // parameterized constructor
    Car(string nameVal, string colorVal){
        cout << "constructor with params is created.. object being created\n";
        name = nameVal;
        color = colorVal;
    }

    void start(){
        cout << "car is started..\n";
    }

    void stop(){
        cout << "car is stopped\n";
    }

    // Getter
    string getName(){
        return name;
    }
};

int main() {
    Car c0; // non-params

    Car c1("maruti 800", "white"); // params
    cout << "car name : " << c1.getName() << endl;
    return 0;
}