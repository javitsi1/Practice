#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int rotatedSearch(vector<int> arr, int key){
    int n = arr.size();
    int s = 0, e = n-1;

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        // Mid lies on left line
        if(arr[s]<=arr[mid]){
            if(key>=arr[s] && key<=arr[mid]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        // Mid lies on right line
        else{
            if(key>=arr[mid] && key<=arr[e]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {10, 5, 2, 0, 7, 6, 4};
    int key;
    cin>>key;
    cout<<rotatedSearch(arr, key)<<endl;
    return 0;
}