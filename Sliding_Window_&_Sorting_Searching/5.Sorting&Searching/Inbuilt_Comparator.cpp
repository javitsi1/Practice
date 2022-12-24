#include <iostream>
#include <algorithm>
using namespace std;
// sort() - TIME O(NlogN)
// COMPARATOR BOOLEAN FUNCTION
bool compare(int a, int b){
    cout<<"Comparing "<<a<<" and "<<b<<endl;
    return a>b;
    // If it's for reverse
    // returns the bigger ones
}

int main(){
    int arr[] = {-2, -3, 3, 4, -1, -12, 5, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);

    //sort(arr, arr+n);
    // to reverse with comparator function
    // not function call, but passing function as a parameter 
    // to another function

    sort(arr, arr+n, compare);
    sort(arr, arr+n, greater<int>());

    // to reverse the array 
    // reverse(arr, arr+n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}