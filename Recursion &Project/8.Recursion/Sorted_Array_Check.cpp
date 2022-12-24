#include <iostream>
using namespace std;

bool sortedArray(int arr[], int n){
    if(n==1 || n==0){
        return true;
    }
    if(arr[0]<arr[1] && sortedArray(arr+1, n-1)){
        return true;
    }
    return false;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    cout<<sortedArray(arr, n)<<endl;
    return 0;
}