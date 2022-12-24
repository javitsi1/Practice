#include <iostream>
#include <algorithm>

using namespace std;

// Pass by reference
// Variable is actually address of array - size occupies a num - 8 bytes
void printArray(int arr[], int n){
    // *arr
    //cout<<sizeof(arr)<<" in Function"<<endl;
    //int n = sizeof(arr)/sizeof(int);
    cout<<"Our array in function"<<endl;

    arr[0] = 100;
    // If we do here, it is expected that the value will change in main function also - PASS_BY_REFERENCE
    // Both arrays are sharing common memory locations and are same.
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
// What to do instead, send n value
int main(){
    int arr[] = {1, 3, 4, 5, 6, 9, 2, 8};
    int n = sizeof(arr)/sizeof(int);
    cout<<sizeof(arr)<<" in Main"<<endl;
    printArray(arr, n);
    cout<<"Our Array in main"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}