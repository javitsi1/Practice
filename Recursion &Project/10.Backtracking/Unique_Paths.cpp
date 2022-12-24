#include <iostream>
using namespace std;

int solve(int m, int n, int i, int j){
    if (i==m and j==n){
        return 1;
    }
    if(i>m || j>n){
        return 0;
    }
    int ans = solve(m, n, i+1, j)+solve(m, n, i, j+1);
    return ans;
}

int main(){
    int m, n;
    cin>>m>>n;
    cout<<solve(m-1, n-1, 0, 0)<<endl;
    return 0;
}