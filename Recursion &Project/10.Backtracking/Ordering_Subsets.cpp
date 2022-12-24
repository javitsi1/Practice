#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a<b;                     // Lexicography (Priority 1)
    }
    return a.length()<b.length();       // Length (Priority 1)
}

void findSubsets(char *input, char *output, int i, int j, vector<string> &v){
    // Base Case
    if(input[i] == '\0'){
        output[j] = '\0';
        string temp(output);
        v.push_back(temp);
        return;
    }
    // Recursive Case
    // Include ith
    output[j] = input[i];
    findSubsets(input, output, i+1, j+1, v);
    // Exclude ith - overwriting
    output[j] = '\0';
    findSubsets(input, output, i+1, j, v);
}

int main(){
    char input[100];
    char output[100]; 
    vector<string> v;   
    cin>>input;
    findSubsets(input, output, 0, 0, v);
    sort(v.begin(), v.end(), compare);
    for(auto s : v){
        cout<<s<<" ";
    }
    return 0;
}