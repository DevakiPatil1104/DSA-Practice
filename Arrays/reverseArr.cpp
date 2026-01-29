#include<bits/stdc++.h>
using namespace std;

// in-built func of swap in c++ library
// void swap(int* a, int* b){ 
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr)/sizeof(int);

    // approach with extra space
    // int copy[n];
    // for(int i=0; i<n; i++) {
    //     int j = n-i-1;
    //     copy[i] = arr[j];
    // }
    // for(int i=0; i<n; i++){
    //     arr[i] = copy[i];
    // }
    
    // without extra space (2 pointer approach)
    int start=0, end=n-1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArr(arr, n);
    return  0;
}