#include <iostream>
using namespace std;

string compressString(string str){
    int n = str.length();
    string ans = "";
    for(int i=0; i<n; i++){
        int freq = 1;
        while(i<n-1 && str[i]==str[i+1]){
            freq++;
            i++;
        }
        ans += str[i];
        ans += to_string(freq);
    }
    // if(ans.length() > str.length())
    //     return str;
    return ans;
}

int main(){
    string s1 = "aaaabbcccdde";
    cout<<compressString(s1)<<endl;
    string s2 = "abcccd";
    cout<<compressString(s2)<<endl;
    return 0;
}