#include <iostream>
using namespace std;
// find min, and put it in begining
// TIME - O(N^2) 
void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int curr = arr[i];
        int mini = INT_MAX;
        int j_mini = 0;
        for(int j=i; j<n; j++){
            if(mini > arr[j]){
                mini = arr[j];
                j_mini = j;
            }
        }
        swap(arr[j_mini], arr[i]);
    }
}

int main(){
    int arr[] = {-2, -3, 3, 4, -1, -12, 5, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}