#include<bits/stdc++.h>
using namespace std;

void decToBin(int decNum) {
    int binNum = 0;
    int pow = 1;

    while(decNum > 0) {
        int rem = decNum % 2;
        binNum += rem * pow;
        pow*=10;
        decNum/=2;
    }
    cout << "Binary value of 15 " << " is: " << binNum << endl; 
}

int main() {
    decToBin(15);
    return 0;
}