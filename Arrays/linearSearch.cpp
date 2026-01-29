#include<iostream>
using namespace std;

// TC => O(n)
int linearSearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(int);

    cout << linearSearch(arr, n, 13) << endl;
    return 0;
}