#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, sum=0, remainder; 
    cout << "Enter a number: " << endl;
    cin >> num;

    // sum of odd digits of a num
    while(num > 0){
        remainder = num % 10;
        if(remainder%2 !=0) {
            sum += remainder;
        }
        num = num / 10;
    }

    cout << "Sum of digits is: " << sum;

    return 0;
}