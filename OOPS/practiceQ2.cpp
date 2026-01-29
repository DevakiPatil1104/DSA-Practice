#include<iostream>
using namespace std;

class Parent {
public:

    Parent() {
        cout << "parent constructor" << endl;
    }

    ~Parent() {
        cout << "parent destructor" << endl;
    }
};

class Child : public Parent {  //inheritance
public:

    Child() {
        cout << "child constructor" << endl;
    }

    ~Child() {
        cout << "child destructor" << endl;
    }
};

// Q2
class Base {
public:

    virtual void print() {
        cout << "base class" << endl;
    }
};

class Derived : public Base{
public:

    void print() {
        cout << "derived class" << endl;
    }
};


int main() {
    // Child ch1;

    Base *b = new Derived();
    b->print();
    delete b;

    return 0;
}