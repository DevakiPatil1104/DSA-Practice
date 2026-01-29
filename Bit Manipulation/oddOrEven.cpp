#include<bits/stdc++.h>
using namespace std;

void oddOrEven(int num){
    if(!(num & 1)) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
}

int main() {
    oddOrEven(5);
    oddOrEven(12);
    return 0;
}