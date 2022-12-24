#include <iostream>
using namespace std;
// Call Stack Function used 
// Time - O(N), Space - O(N) All recursion takes extra space

int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int ans = n * fact(n-1);
    return ans;
}

// O(2^N), O(N)
int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    int f1 = fibonacci(n-1);
    int f2 = fibonacci(n-2);
    return f1+f2;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<fibonacci(n)<<endl;
    return 0;
}