#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int calculateTotal(vector<int> marks){
    return marks[0]+marks[1]+marks[2];
}

bool compare(pair<string,vector<int> > s1, pair<string,vector<int> > s2){
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return calculateTotal(m1)>calculateTotal(m2);
    // descending
}

int main(){
    vector<pair<string,vector<int> > > studentMarks = {
        {"Rohan", {10, 20, 11}},
        {"Prateek", {12, 43, 23}},
        {"Vivek", {7, 9, 19}},
        {"Rijul", {20, 12, 43}}
    };
    sort(studentMarks.begin(), studentMarks.end(), compare);
    for(auto s : studentMarks){
        cout<<s.first<<" "<<calculateTotal(s.second)<<endl;
    }
    return 0;
}