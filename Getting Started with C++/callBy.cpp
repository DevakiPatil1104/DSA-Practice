#include<bits/stdc++.h>
using namespace std;

// Call by value and call by reference:-

// call by value
// void doSomething(int num) { //performs modification on copy of num
//     cout << num << endl; // 10
//     num += 5;
//     cout << num << endl; // 15
//     num += 5;
//     cout << num << endl; // 20
// }

// call by reference
void doSomething(int &num) {  //performs modification on original num at its address
    cout << num << endl; // 10
    num += 5;
    cout << num << endl; // 15
    num += 5;
    cout << num << endl; // 20
}


//call by value
// void change(string s){
//     cout << s << endl; // raj
//     s[0] = 't';
//     cout << s << endl; // taj
// }

//call by reference
void change(string &s){ // add & to parameter
    cout << s << endl; // raj
    s[0] = 't';
    cout << s << endl; // taj
}


int main() {
    int num = 10;
    doSomething(num); // makes a copy out of num and sends for process to function def
    cout << num << endl; // prints original num // 10

    string s = "raj";
    change(s);
    cout << s << endl; // raj
    return 0;
}