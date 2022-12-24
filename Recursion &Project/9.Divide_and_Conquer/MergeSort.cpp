#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &arr, int s, int e){
    int i =s, mid = (s+e)/2;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid and j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }
    int index = 0;
    for(int k=s; k<=e; k++){
        arr[k] = temp[index++];
    }
    return;
}

void mergeSort(vector<int> &arr, int s, int e){
    int n = arr.size();
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    return merge(arr, s, e);
}

int main(){
    vector<int> arr = {10, 5, 2, 0, 7, 6, 4};
    int s = 0, e = arr.size()-1;
    mergeSort(arr, s, e);
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}