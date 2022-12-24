#include <iostream>
#include <vector>
using namespace std;

int main(){
    char ch = cin.get();
    int space = 0, digit = 0, alpha = 0;
    while(ch != '\n'){
        if(ch>='0' and ch<='9'){
            digit++;
        }
        else if(ch>='a' && ch<='z'){
            alpha++;
        }
        else if(ch==' ' || ch=='\t'){
            space++;
        }
        ch = cin.get();
    }
    cout<<digit<<" -Digits, "<<alpha<<" -Alpha, "<<space<<" -Space."<<endl;
    return 0;
}