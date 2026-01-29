#include<bits/stdc++.h>
using namespace std;

// Selection Sort - TC => O(n^2)

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void selectionSort(int* arr, int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIdx])
              minIdx = j;
        }
        
        swap(arr[i], arr[minIdx]);
    }

    print(arr, n);

}

int main() {
    int arr[10] = {743, 24, 574, 2543, 687, 532, 765, 325, 75, 970};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr, n);

    return 0;
}