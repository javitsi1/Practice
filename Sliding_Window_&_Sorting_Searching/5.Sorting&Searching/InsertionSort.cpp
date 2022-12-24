#include <iostream>
using namespace std;
// insert in correct position - partition
// TIME - O(N^2)
void insertion_sort(int arr[], int n){
    // find the right index to put
    for(int i=1; i<n; i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev = prev -1;
        }
        arr[prev+1] = current;
    }
}

int main(){
    int arr[] = {-2, -3, 3, 4, -1, -12, 5, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}