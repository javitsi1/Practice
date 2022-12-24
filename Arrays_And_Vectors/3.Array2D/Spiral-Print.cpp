#include <iostream>
using namespace std;

void printSpiral(int arr[][4], int n, int m){
    int startRow = 0, startCol = 0, endRow = n-1, endCol = m-1;
    while(startCol<=endCol && startRow<=endRow){
        // start row
        for(int col=startCol; col<=endCol; col++){
            cout<<arr[startRow][col]<<" ";
        }
        // end col
        for(int row = startRow+1; row<=endRow; row++){
            cout<<arr[row][endCol]<<" ";
        }
        // end row
        for(int col=endCol-1; col>=startCol; col--){
            if(startRow == endRow){
                break;
            }
            cout<<arr[endRow][col]<<" ";
        }
        // start col
        for(int row=endRow-1; row>=startRow+1; row--){
            if(startCol == endCol){
                break;
            }
            cout<<arr[row][startCol]<<" ";
        }
        // update var for inner spirals
        startRow++;
        startCol++;
        endCol--;
        endRow--;
    }
}

int main(){
    int arr[][4] = {{1, 2, 3, 4},
                    {12, 13, 14, 5},
                    {11, 16, 15, 6}, 
                    {10, 9, 8, 7}}; 
    int n = 4, m = 4;
    printSpiral(arr, n, m);
    return 0;
}