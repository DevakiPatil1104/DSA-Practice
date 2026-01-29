#include<bits/stdc++.h>
using namespace std;

void print(int mat[][3], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// TC => O(n^2)
void rotateImg(int mat[][3], int n){
    // Step 1: Transpose the matrix
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    // Step 2: Reverse each row
    for(int i=0; i<n; i++){
        reverse(mat[i], mat[i]+n);
    }

    print(mat, 3);
}

int main() {
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    rotateImg(mat, 3);

    return 0;
}