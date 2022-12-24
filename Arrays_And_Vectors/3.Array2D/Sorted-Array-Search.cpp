#include <iostream>
using namespace std;
// Brute Force - iterate over entire matrix, row by row and column by column
// Time - O(M*N)

// Sorted - Binary Search on all rows - O(N*logM)

// Row and Column Sorted - start from top right
// Down large, Left small
// Time - O(N+M) : Staircase search
pair<int, int> searchInSortedMatrix(int arr[][4], int n, int m, int element){
    int i=0, j=m-1;
    if(element < arr[0][0] || element > arr[n-1][m-1]){
        return make_pair(-1, -1);
    }
    while(i<n && j>=0 && i>=0 && j<m){
        if(arr[i][j] > element){
            j--;
        }
        else if(arr[i][j] < element){
            i++;
        }
        else{
            return make_pair(i, j);
        }
    }
    return make_pair(-1, -1);
}

int main(){
    int arr[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48}, 
                    {32, 33, 39, 50}}; 
    int n = 4, m = 4;
    int element = 33;
    pair<int, int> ans = searchInSortedMatrix(arr, n, m, element);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}