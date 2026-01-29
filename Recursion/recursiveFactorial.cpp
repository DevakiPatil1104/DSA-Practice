#include<iostream>
using namespace std;

// factorial
int factorial(int n){
    if(n == 0){   //base case
        return 1;
    }

    return n * factorial(n-1); // recursive func call
}

int main() {
    cout << factorial(5);
    return 0;
}