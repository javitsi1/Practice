#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// Data in a range, (0-100)
// Almost in Linear time O(Num+Range)
// Create a frequency map; Scan through the array and count
// TIME-> O(N+Range)
void counting_sort(int arr[], int n){
    int largest = -1;
    for(int i=0; i<n; i++){
        largest = max(largest, arr[i]);
    }
    vector<int> freq(largest+1, 0);
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    int j=0;
    for(int i=0; i<=largest; i++){
        while(freq[i] > 0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main(){
    int arr[] = {5, 8, 3, 1, 1, 2, 6};
    int n = sizeof(arr)/sizeof(int);
    counting_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}