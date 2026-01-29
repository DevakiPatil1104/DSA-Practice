#include<bits/stdc++.h>
using namespace std;

int updateIthBit(int num, int i, int val){
    num = num & (~(1<<i)); // clears ith bit

    num = num | (val << i);

    return num;
}

int main() {
    cout << updateIthBit(7, 3, 1);
    return 0;
}