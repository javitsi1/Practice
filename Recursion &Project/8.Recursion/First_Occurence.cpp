#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){
    if(n == 0){
        return -1;
    }
    if(arr[0] == key){
        return 0; 
    }
    int subAns = firstOccurence(arr+1, n-1, key);
    if(subAns!=-1){
        return subAns + 1;
    }
    return -1;
}

int main(){
    int arr[] = {1, 3, 5, 7, 6, 2};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<firstOccurence(arr, n, key)<<endl;
    return 0;
}