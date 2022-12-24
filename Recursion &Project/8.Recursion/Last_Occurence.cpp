#include <iostream>
using namespace std;

int lastOccurence(int arr[], int n, int key){
    if(n == 0){
        return -1;
    }
    int subAns = lastOccurence(arr+1, n-1, key);
    if(subAns == -1){
        if(arr[0] == key){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return subAns + 1;
    }
}

int main(){
    int arr[] = {1, 3, 5, 7, 6, 2, 3, 1, 7};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<lastOccurence(arr, n, key)<<endl;
    return 0;
}