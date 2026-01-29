// Write a function which takes 2 numbers as parameters (a&b) and outputs : a^2+b^2+2*ab

#include<bits/stdc++.h>
using namespace std;

int eqnSolver(int a, int b){
    return (a*a) + (b*b) + (2*(a*b));
}

int main() {
    int result = 0;
    result = eqnSolver(2, 2); // ans=16
    cout << result << endl;
    return 0;
}