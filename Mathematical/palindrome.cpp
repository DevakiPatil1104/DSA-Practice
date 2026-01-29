#include<iostream>
using namespace std;

bool isPalindrome(int n) {
    int temp = n;
    int revNum = 0;
    
    while(n > 0){
        int lastDig = n % 10;
        revNum = (revNum * 10) + lastDig;
        n /= 10;
    }

    if(temp == revNum){
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cout << "enter a num: " << endl;
    cin >> n;
    cout << "result is: " << isPalindrome(n) << endl;

    return 0;
}