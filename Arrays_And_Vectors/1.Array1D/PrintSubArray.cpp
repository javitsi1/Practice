#include <iostream>
using namespace std;

// Smaller Contiuous part of an array - N elements, nC2 combinations ~ N^2 SUBARRAYS    
// TIME - O(N^3)
void printSubarray(int arr[], int n){
    int large = 0, sum =0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
                if(large < sum){
                    large = sum;
                }
                //cout<<arr[k]<<" ,";
            }
            cout<<sum<<endl;
        }
    }
    cout<<"The largest sum is "<<large<<endl;
}

int main(){
    int arr[] = {23, 43, 56, 75, 23, 46, 86, 80, 40, 76};
    int n = sizeof(arr)/sizeof(int);
    printSubarray(arr, n);
    return 0;
}