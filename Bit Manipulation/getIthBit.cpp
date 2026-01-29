#include<bits/stdc++.h>
using namespace std;

int getIthBit(int num, int i){
    int bitMask = 1 << i;

    if(!(num & bitMask)){
        return 0;
    } else {
        return 1;
    }
}

int main() {
    cout << getIthBit(1, 2);
    return 0;
}