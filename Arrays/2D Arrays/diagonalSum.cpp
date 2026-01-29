#include<bits/stdc++.h>
using namespace std;

// Brute force => O(n^2)
int diagonalSum(int mat[][4], int n){ // bcz n=m
    int sum = 0;

    for(int i=0; i<n; i++){ // loop for rows
        for(int j=0; j<n; j++){ // loop for cols...its a n*m mat where n=m
            if(i == j){ // PD sum
                sum += mat[i][j];
                // SD sum
            } else if(j == n-i-1){ // due to else if common ele will not repeat twice once counted in pd
                sum += mat[i][j];   
            }
        }
    }

    return sum;
}

// Optimal solution => O(n)
int diagonalSum2(int mat[][4], int n) {
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += mat[i][i]; //PD

        if(i != n-i-1){ // avoids common ele from being added twice
            sum += mat[i][n-i-1];
        }
    }

    return sum;
}

int main() {
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    int result = diagonalSum2(matrix, 4);

    // int matrix2[3][3] = {{1, 2, 3},
    //                     {4, 5, 6},
    //                     {7, 8, 9}};

    // int result = diagonalSum(matrix2, 3);

    cout << "total diagonal sum = " << result << endl;

    return 0;
}