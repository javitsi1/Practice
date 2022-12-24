#include <iostream>
using namespace std;

//Make a copy of array, put the elements in reverse and back again - EXTRA SPACE
// i = 0, j = n-1 ; and then swap and move and again and again - Odd number of elements, also for even elements
// Array is pass by reference , so it will work
// Time complexity - loop - N/2 times -----> O(N), Space O(1)
void reverseArray(int arr[], int n){
    int i = 0, j = n - 1;
    while(i < j){
        swap(arr[i], arr[j]);
        i += 1;
        j -= 1;
    }
}

// indexes i fix, j iterate
// foreach loop, TIME - O(N*N)
void printPairs(int arr[], int n){
    for(int i=0; i<n; i++){
        int x = arr[i];
        for(int j=i+1; j<n; j++){
            int y = arr[j];
            cout<<x<<" "<<y<<endl;
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {10, 30, 50, 29, 90, 32};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    cout<<endl;
    printPairs(arr, n);
    cout<<endl;
    return 0;
}