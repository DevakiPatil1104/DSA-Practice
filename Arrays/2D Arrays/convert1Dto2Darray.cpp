#include<bits/stdc++.h>
using namespace std;

void print(int mat[][3], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void convert(int* arr, int arrSize, int n, int m){
    if(arrSize != m*n){
        cout << "invalid i/p";
        return;
    }

    int result[n][3] = {0};
    int index = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            result[i][j] = arr[index];
            index++;
        }
    }

    print(result, 2, 3);
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arrSize = sizeof(arr)/sizeof(int);

    convert(arr, 6, 2, 3);
    return 0;
}