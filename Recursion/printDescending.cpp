#include<iostream>
using namespace std;

// print num from n to 1 in decreasing order
void print(int n){
    if(n == 0){ // base case
        return;
    }
    cout << n << " "; // work
    print(n-1); // faith -> recursive call
}

int main() {
    print(36);
    return 0;
}