#include<iostream>
using namespace std;

int friendsPairing(int n) {
    if(n == 0 || n == 1 || n == 2){  //base case
        return n;
    }

    return (friendsPairing(n-1) + (n-1)*friendsPairing(n-2));
}

int main() {
    cout << friendsPairing(0) << endl;
    cout << friendsPairing(1) << endl;
    cout << friendsPairing(2) << endl;
    cout << friendsPairing(3) << endl;
    cout << friendsPairing(4) << endl;
    return 0;
}