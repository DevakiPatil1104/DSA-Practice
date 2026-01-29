#include<bits/stdc++.h>
using namespace std;

void printTranspose(int trans[3][2], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}

// Q.1 Count the no. of 7's in given 2D array
void count7(int arr[][3], int n, int m){
    int countOf7 = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 7){
                countOf7++;
            }
        }
    }

    cout << "count of 7 = " << countOf7 << endl;
}

// Q.2 Print the sum of nos. in 2nd row of nums array
void printSum(int nums[][3], int n, int m){
    int sum = 0;
    
    for(int j=0; j<m; j++){
        sum += nums[1][j];
    }

    cout << "sum of nos. in 2nd row = " << sum << endl;
}

// Q.3 WAP to find transpose of a matrix
void transpose(int mat[][3], int n, int m){
    int trans[3][2];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            trans[i][j] = mat[j][i];
        }
    }
    
    printTranspose(trans, 3, 2);
}

int main() {
    int arr[2][3] = {{4, 7, 8}, {7, 8, 7}};
    // count7(arr, 2, 3);

    int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
    // printSum(nums, 3, 3);

    int matrix[2][3] = {{23, 64, 57}, {95, 75, 11}};
    transpose(matrix, 2, 3);
    return 0;
}