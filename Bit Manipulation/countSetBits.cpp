#include<bits/stdc++.h>
using namespace std;

int countSetBit(int num){
    int count = 0;
     
    while(num > 0){
        int lastBit = num & 1;
        count += lastBit;
        num = num >> 1;
    }

    return count;
}

int main() {
    cout << "count of set bits = " << countSetBit(15);
    return 0;
}