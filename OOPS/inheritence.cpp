#include<iostream>
#include<string.h>
using namespace std;

class Animal {
    public:

    string color;

    void eat(){
        cout << "eats..\n";
    }

    void breathe(){
        cout << "breathes..\n";
    }
};

class Fish : protected Animal {
    public:

    int fins;

    void swim(){
        eat();
        cout << "swims..\n";
    }
};

int main() {
    Fish f1;
    f1.fins = 3;
    cout << "fins = " << f1.fins << endl;
    f1.swim();
// not possible in case of protected and private type
    // f1.eat();
    // f1.breathe();
    return 0;
}