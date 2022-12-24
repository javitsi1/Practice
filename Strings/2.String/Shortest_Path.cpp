#include <iostream>
#include <string>
using namespace std;

int main(){
    char route[1000];
    cin.getline(route, 1000);
    int x = 0, y = 0;
    for(int i=0; route[i]!='\0'; i++){
        if(route[i] == 'N'){
            y++;
        }
        else if(route[i] == 'S'){
            y--;
        }
        else if(route[i] =='E'){
            x++;
        }
        else{
            x--;
        }
    }
    while(y>0){
        cout<<'N';
        y--;
    }
    while(y<0){
        cout<<'S';
        y++;
    }
    while(x>0){
        cout<<'E';
        x--;
    }
    while(x<0){
        cout<<'W';
        x++;
    }
    return 0;
}