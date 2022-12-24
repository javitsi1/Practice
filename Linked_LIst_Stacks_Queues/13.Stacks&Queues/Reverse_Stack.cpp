#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int t = s.top();
    s.pop();
    cout<<t<<endl;
    reverseStack(s);
    cout<<t<<" ";
    s.push(t);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    reverseStack(s);
    cout<<endl;
    cout<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
    return 0;
}