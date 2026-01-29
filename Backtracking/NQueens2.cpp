#include<iostream>
#include<string>
#include<vector>
using namespace std;

// variation: return count of possible no. of soln LC.52

void printBoard(vector<vector<char>>& board){
    int n = board.size();

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
}

bool isSafe(vector<vector<char>>& board, int row, int col){
    int n = board.size();

    // horizontal safety
    for(int j=0; j<n; j++){
        if(board[row][j] == 'Q'){
            return false;
        }
    }

    // vertical safety
    for(int i=0; i<row; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }

    // diagonal left saftey
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    // diagonal right safety
    for(int i=row, j=col; i>=0 && j<n; i--, j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    return true; // if none of the condtitions are true
}

int NQueens(vector<vector<char>>& board, int row){
    int n = board.size();

    if(row == n){
        printBoard(board);
        return 1;
    }

    int count = 0;
    for(int col=0; col<n; col++){ 
        if(isSafe(board, row, col)){
            board[row][col] = 'Q'; //place the Q row fixed col varying
            // recursion
            count += NQueens(board, row+1); //recursive col for smaller problem
            // backtracking
            board[row][col] = '.'; // backtrack to remove the Qfrom that place while returning to place it in new position next time
        }
    }
    return count; //no of soln at each level
}

int main() {
    vector<vector<char>> board;
    int n = 5;
    for(int i=0; i<n; i++){
        vector<char> newRow;
        for(int j=0; j<n; j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }

    int count = NQueens(board, 0);
    cout << "count = " << count << endl;
    return 0;
}