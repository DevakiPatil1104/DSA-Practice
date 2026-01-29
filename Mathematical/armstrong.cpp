#include<iostream>
#include<math.h>
using namespace std;

bool isArmstrong(int n) {
    int temp = n;
    long sum = 0;
    int digits = 0;

    int t = n;
    while(t > 0){
        t /= 10;
        digits++;
    }

    t = n;
    while(t > 0){
        int lastDig = t % 10;
        sum += pow(lastDig, digits);
        t /= 10;
    }

    return temp == sum;
}

int main() {
    int n;
    cout << "enter a num: " << endl;
    cin >> n;
    cout << "result is: " << isArmstrong(n) << endl;

    return 0;
}