#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, lastDig;
    cout << "Enter a num: " << endl;
    cin >> n;
    while(n > 0) {
        lastDig = n % 10;
        cout << lastDig;
        n /= 10;
    }
    cout << endl;
    return 0;
}
