#include<bits/stdc++.h>
using namespace std;

// Brute force => O(n*m)
void search(int mat[][4], int n, int m, int key){ 
    bool found = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == key){
                cout << "found at: " << i << ", " << j << endl;
                found = true;
                return;
            } 
        }
    }
    if(!found){
        cout << "key not found";
    }
}

// Optimized (better) solution => apply row/col-wise binary search
// Row-wise BS ==> TC = O(n * logm) 
bool search2(int mat[][4], int n, int m, int key, int &row, int &col) {
    for(int i=0; i<n; i++){ // loop for rows to do BS in each row
        int st = 0, end = m-1;

        while(st <= end){
            int mid = st + (end-st)/2;

            if(mat[i][mid] == key){
                row = i;
                col = mid;
                return true;
            } else if(key < mat[i][mid]){
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
    }
    return false;
}

// Optimal Solution  => Staircase search 
// TC = O(n + m)
bool search3(int mat[][4], int n, int m, int key){
    int i = 0, j = m-1; // starting cell will be [0][m-1]

    while (i<n && j>=0){
        if(mat[i][j] == key){
            cout << "found at cell (" << i << ", " << j << ")" << endl;
            return true;
        } else if(mat[i][j] < key){
            // down
            i++;
        } else 
           // left
           j--;    
    }

    cout << "key not found" << endl;
    return false;
}

int main() {
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};
    // int key;
    // cout << "enter key to be found: ";
    // cin >> key;

    // int r, c;
    // if(search2(matrix, 4, 4, key, r, c)){
    //     cout << "Key found at: " << r << ", " << c << endl;
    // } else {
    //     cout << "Key not found" << endl;
    // }

    search3(matrix, 4, 4, 33);
    return 0;
}