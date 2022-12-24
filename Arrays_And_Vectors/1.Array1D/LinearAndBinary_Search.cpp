// Algorithm 1 - LINEAR SEARCH
// Brute Force, return index
// Worst Case - O(N)
// for (i =0 ; i<n; i++)
// if(arr[i] == key)
// return 

// Algorithm 2 - BINARY SEARCH
// A bit better, start from mid - BUT ONLY IN SORTED ARRAY
// start, end, mid
// l<r always, if not then not found
// N -> N/2 -> N/4 -> N/8  .......... 1 . TIME COMPLEXITY - O(log N)
// N/2^K = 1 , divide hota gaya ....... K = log N
// log 1000 - 10 (Base 2)
// l = mid + 1, r = mid -1;
// l = 0, r = n-1
// while(l<=r)
//  find mid
//      do comparision at mid
//      equal - found; > GO LEFT; < GO RIGHT
// return -1;

#include <iostream>

using namespace std;

int binary_search(int arr[], int n, int key){
    int l = 0, r = n-1;

    while(l <= r){
        int mid = (l+r)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10, 20, 30, 40, 80, 90};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    int index = binary_search(arr, n, key);
    if(index!=-1){
        cout<<key<<" is present at "<<index<<endl;
    }
    else{
        cout<<key<<" not found."<<endl;
    }
    return 0;
}