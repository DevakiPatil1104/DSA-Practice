#include<bits/stdc++.h>
using namespace std;

void binToDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1; //2^0, 2^1, 2^2,......

    while(n > 0){
        int lastDig = n % 10;
        decNum = decNum + lastDig * pow;
        pow = pow * 2;
        n = n/10;
    }

    cout << decNum;

}

int main() {
    binToDec(11010);
    return 0;
}
