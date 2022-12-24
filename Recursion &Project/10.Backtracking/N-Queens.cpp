#include <iostream>
#include <algorithm>
using namespace std;

void printBoard(int n, int board[][20]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool canPlace(int board[][20], int n, int x, int y){
    // Column
    for(int k=0; k<x; k++){
        if(board[k][y] == 1){
            return false;
        }
    }
    // Left Diag
    int i = x;
    int j = y;
    while(i>=0 and j>=0){
        if(board[i][j] == 1){
            return false;
        }
        i--; 
        j--;
    }
    // Right Diag
    i = x;
    j = y;
    while(i>=0 and j<n){
        if(board[i][j] == 1){
            return false;
        }
        i--; 
        j++;
    }
    return true;
}

bool solveNQueen(int n, int board[][20], int row){
    // base case
    if(row == n){
        printBoard(n, board);
        return true;
    }
    // rec - try every col
    for(int j=0; j<n; j++){
        if(canPlace(board, n, row, j)){
            board[row][j] = 1;
            bool success = solveNQueen(n, board, row+1);
            if(success){
                return true;
            }
            // backtrack
            board[row][j] = 0;

        }
    }
    // something wrong in parent call
    return false;
}

int main(){
    int board[20][20] = {0};
    int n;
    int row = 0;
    cin>>n;
    solveNQueen(n, board, 0);
    return 0;
}