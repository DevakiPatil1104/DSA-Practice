#include<iostream>
using namespace std;

void swap(int* a, int* b) { // pass by refernce
    cout << *a << " " << *b << endl; // 10 20
    int temp = *a; // temp = 10
    *a = *b; 
    *b = temp;
    cout << *a << " " << *b << endl; // 20 10
}

int main() {
    // int x = 10;
    // int *ptr = &x;
    // cout << &x << " = " << ptr << endl;;
    // cout << x << " = " << *ptr << " = " << *(&x);

    int x=10, y=20;
    cout << x << " " << y << endl; // 10 20
    swap(&x, &y);
    cout << x << " " << y << endl; // 20 10
    return 0;
}