#include<bits/stdc++.h>
using namespace std;

bool isPowerOf2(int num){
    if(!((num) & (num-1))){
        return true;
    } else return false;
}

int main() {
    cout << isPowerOf2(0) << endl;
    cout << isPowerOf2(2) << endl;
    cout << isPowerOf2(12) << endl;
    cout << isPowerOf2(32) << endl;

    return 0;
}