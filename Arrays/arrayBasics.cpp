#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1D array
    // int arr[5];
    // cout << "Enter 5 values in array" << endl;
    // // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // for (int i=0; i<5; i++) {
    //     cin >> arr[i];
    // }
    // for (int i=0; i<5; i++) {
    //     cout << arr[i] << "\t";
    // }
    // arr[3] += 10;
    // cout << "\nupdated value of arr[3] is: " << arr[3];

    // 2D array
    int array[3][5];
    array[2][4] = 76;
    cout << "value of array[2][4] is " << array[2][4] << endl;
    cout << "\nvalue of array[1][3] is " << array[1][3] << " which is a garbage value as we have not assigned any value to it" << endl;
    return 0;
}