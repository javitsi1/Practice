// Compare adjusent elements and swap piche piche
#include <iostream>
using namespace std;
// Time - O(N^2)
bool compare(int a, int b){
    return a<b;
    // returns the smaller one
}
void bubble_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            // if(arr[j]>arr[j+1]){
            //     swap(arr[j], arr[j+1]);
            // }
            if(compare(arr[j], arr[j+1])){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {-2, -3, 3, 4, -1, -12, 5, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}