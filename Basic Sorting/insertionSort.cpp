#include<bits/stdc++.h>
using namespace std;

// Insertion Sort - TC => worst case: O(n^2), best case: O(n)

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void insertionSort(int* arr, int n){
    for(int i=1; i<n; i++){ // we assume 0th idx to be sorted already
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }

    print(arr, n);

}

int main() {
    int arr[10] = {743, 24, 574, 2543, 687, 532, 765, 325, 75, 970};
    int n = sizeof(arr)/sizeof(int);

    insertionSort(arr, n);

    return 0;
}