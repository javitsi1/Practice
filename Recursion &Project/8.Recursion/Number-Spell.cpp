#include <iostream>
using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void numSpell(int n){
    if(n == 0){
        return;
    }
    int lastDigit = n%10;
    numSpell(n/10);
    cout<<spell[lastDigit]<<" ";
}

int main(){
    int n;
    cin>>n;
    numSpell(n);
    return 0;
}