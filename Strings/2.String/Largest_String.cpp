#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    cin.get();
    char arr[1000];
    int len = 0, max_len = 0;
    string big = "";
    for(int i=0; i<N; i++){
        // first sentence is a empty line
        cin.getline(arr, 1000);
        if(strlen(arr)>max_len){
            max_len = strlen(arr);
            big = arr;
        }
    }
    cout<<endl;
    cout<<big<<" "<<max_len<<endl;
    return 0;
}