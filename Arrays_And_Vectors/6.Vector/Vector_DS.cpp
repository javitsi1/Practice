#include <iostream>
#include "Vector.h"
using namespace std;

int main(){
    Vector<int> v(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    Vector<char> vc;
    vc.push_back('a');
    vc.push_back('b');
    vc.push_back('c');
    for(int i=0; i<vc.size(); i++){
        cout<<vc.at(i)<<" ";
        cout<<vc[i]<<" ";
    }
    return 0;
}