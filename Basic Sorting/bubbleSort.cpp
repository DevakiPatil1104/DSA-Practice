#include<bits/stdc++.h>
using namespace std;

// Bubble Sort - TC => O(n^2)

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void bubbleSort(int* arr, int n){
    for(int i=0; i<n-1; i++){
        bool isSwap = false; // initially there is no swapping
        for(int j=0; j<n-i-1; j++){
            if(arr[j] < arr[j+1]){
               swap(arr[j], arr[j+1]);
               isSwap = true; // make it ture for each swap
            }
        }
        if(!isSwap){ // if isSwap == false
        // array is already sorted... no swapping happened
        return;
        }
    }

/* if array is already sorted then outer loop will run only once and inner loop 
will traverse across array and see no need of swap so !isSwap will return the
control and end loop */

    print(arr, n);;
}

int main() {
    int arr[10] = {743, 24, 574, 2543, 687, 532, 765, 325, 75, 970};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);

    return 0;
}