#include <iostream>
using namespace std;

// Brute Force - Time O(N^4)

// 2D Prefix Sums. Auxilliary Matrix

int cutsOnMatrix(char arr[][6], int n){
    int ans[6][6] = {0};
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == '#'){
                ans[i][j] = 1 + ans[i-1][j] + ans[i][j-1] - ans[i-1][j-1];
            }
            else{
                ans[i][j] = ans[i-1][j] + ans[i][j-1] - ans[i-1][j-1]; 
            }
        }
    }
    int S1 = 0, S2 = 0, S3 = 0, S4 = 0;
    int mini = 0, maxi = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            S1 = ans[i][j];
            S2 = ans[i][n-1] - ans[i][j];
            S3 = ans[n-1][j] - ans[i][j];
            S4 = ans[n-1][n-1] - S1 - S2 - S3 - S4;
            mini = min(S1, S2);
            mini = min(mini, S3);
            mini = min(mini, S4);
            maxi = max(maxi, mini);
        }
    }
    return maxi;
}

int main(){
    // char arr[5][5] = {{'#', '.', '.', '.', '#'},
    //                 {'#', '.', '#', '#', '.'},
    //                 {'#', '.', '.', '#', '#'}, 
    //                 {'.', '.', '#', '#', '.'},
    //                 {'.', '#', '.', '#', '.'}}; 
    char arr[6][6] = {{'.', '#', '#', '.', '.', '.'},
                    {'#', '.', '.', '#', '#','.'},
                    {'.', '#', '.', '.', '.', '.'}, 
                    {'.', '#', '#', '.', '.', '#'},
                    {'#', '.', '.', '#', '#', '.'},
                    {'.', '#', '.', '.', '.', '.'}}; 
    int n = 6;
    int ans = cutsOnMatrix(arr, n);  
    cout<<ans<<endl;              
    return 0;
}