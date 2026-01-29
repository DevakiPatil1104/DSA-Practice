#include<bits/stdc++.h>
using namespace std;

// TC => O(n)
int findLargestFromArr(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            cout << "assigning val " << arr[i] << " to max" << endl;
        }
    }
    return max;
}

int findSmallestFromArr(int* arr, int n){
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[5] = {4, 36, 50, 243, 95};

    int result1 = findLargestFromArr(arr, 5);
    cout << "Largest element is: " << result1 << endl;

    int result2 = findSmallestFromArr(arr, 5);
    cout << "Smallest element is: " << result2 << endl;

    return 0;
}