#include <bits/stdc++.h>
using namespace std;

/*
Functions are set of code which performs something for you
Functions are used to modularizethe code
Functions are used to increase readability of code
Functions are used to write same piece of code multiple times
Types of functions:
void -> does not return anything
return -> only one value at a time
parameterised -> pass parameters while defining
non parameterised
*/

int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}

int mul(int num1, int num2){
    int product = num1 * num2;
    return product;
}

int sub(int num1, int num2){
    int diff;
    // if(num1 > num2){
    //     diff = num1 - num2;
    // } else {
    //     diff = num2 - num1;
    // }
    // return diff;
    return abs(num1 - num2); // abs: absolute value (-x) = x
}

float divide(float num1, float num2){
    if(num2 == 0){
        cout << "Invalid input... denominator cannot be 0" << endl;
        return 0;
    } else {
    float quotient = num1 / num2;
    return float(quotient);
    }
}

int main() {
    // int num1, num2; 
    // cout << "Enter 2 nos. " << endl;
    // cin >> num1 >> num2;
    // int choice;
    // cout << "Choices: ";
    // cout << "\n1. add \n 2. multiply \n 3. sub \n 4. divide" << endl;
    // cout << "Enter your choice: ";
    // cin >> choice;

    // switch(choice){
    //     case 1:{
    //         int res = sum(num1, num2);
    //         cout << "Sum: " << res << endl;
    //         break;
    //         }
    //     case 2:{
    //         int product = mul(num1, num2);
    //         cout << "Product: " << product << endl;
    //         break;
    //         }
    //     case 3: {
    //         int difference = sub(num1, num2);
    //         cout << "Difference: " << difference << endl;
    //         break;
    //     }
    //     case 4: {
    //         float division = divide(num1, num2);
    //         cout << "Quotient: " << division << endl;
    //         break;
    //     }
    //     default: 
    //         cout << "Invalid choice" << endl;
    // }

    int num1, num2; 
    cout << "Enter 2 nos. " << endl;
    cin >> num1 >> num2;
    int res = min(num1, num2);
    cout << "Minumum of " << num1 << " & " << num2 << " is: " << res << endl; 
    
    return 0;
}

int min(int num1, int num2){
        if (num1 < num2){
            return num1;
        } else if (num2 < num1){
            return num2;
        } else if (num1 = num2) {
            return 1;
        }
    }