#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {1, 4, 5, 2, 8, 3};
    vector<int> num(10, 7);
    cout<<arr.size()<<endl;
    arr.push_back(18);
    cout<<arr.capacity()<<endl;
    arr.pop_back();
    cout<<arr.capacity();
    return 0;
}