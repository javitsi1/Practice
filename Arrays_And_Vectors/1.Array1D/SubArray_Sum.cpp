#include <iostream>
using namespace std;

// Brute Force; Time - O(N^3)
int largestSubArraySum1(int arr[], int n){
    int sum = 0, largest = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n;j++){
            sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
            if(largest < sum){
                largest = sum;
            }
        }
    }
    return largest;
}

// PREFIX SUM - Precomputation, store cummulative sum -> pr[i] = pr[i-1]+arr[i]
// 1, 2, 4, -2, 3
// 1, 3, 7, 5, 8
// i=1, j=3 ; pr[3] 5 - pr[i-1] 1 = 4
// After that , at every index pr[j]-pr[i-1] will be sum of subarray
// Time - O(N^2)
int largestSubArraySum2(int arr[], int n){
    int large = 0;
    int pr[100] = {0};
    pr[0] = arr[0];
    for(int i=1; i<n; i++){
        pr[i] = pr[i-1] + arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = i>0 ? pr[j] - pr[i-1] : pr[j];
            if(large < sum){
                large = sum;
            }
        }
    }
    return large;
}

// KADANE'S ALGORITHM
//     -2, 3, 4, -1, 5, -12, 6, 1, 3, 2
// CS   0, 3, 7, 6, 11,  0, 6, 7, 10, 12
// MS   0, 3, 7, 7, 11, 11, 11, 11, 11, 12
// Linear Time --- TIME - O(N)
int largestSubArraySum3(int arr[], int n){
    int cs = 0, ms = 0;
    for(int i=0; i<n; i++){
        cs += arr[i];
        if(cs < 0){
            cs = 0;
        }
        ms = max(ms, cs);
    }
    return ms;
}

int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);
    cout<<largestSubArraySum1(arr, n)<<endl;
    cout<<largestSubArraySum2(arr, n)<<endl;
    cout<<largestSubArraySum3(arr, n)<<endl;
    return 0;
}