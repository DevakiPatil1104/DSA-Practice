#include<bits/stdc++.h>
using namespace std;

// LC 704. Binary Search

int binarySearch(int arr[], int n, int key){
    int st=0, end=n-1;
    while(st <= end){
        int mid = (st + end)/2;

        if(arr[mid] == key){
            return mid;
        } else if (arr[mid] < key) {
            st = mid + 1;
        } else
            end = mid-1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 13, 69, 102};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout << "enter key to search" << endl;
    cin >> key;

    int result = binarySearch(arr, n, key);

    cout << "Key was found at index: " << result << endl;

    return 0;
}