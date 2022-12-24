#include <iostream>
#include "Linked_list.h"
using namespace std;



int main(){
    LinkedList l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_back(0);
    l.push_back(4);
    l.insert(10, 2);
    l.pop_front();
    l.pop_back();
    l.deleteAt(2);

    Node* head = l.begin();
    while(head != NULL){
        cout<<head->getData()<<"->";
        head = head->next;
    }
    cout<<endl;
    cout<<l.search(10)<<endl;
    cout<<l.recursiveSearch(4)<<endl;
    return 0;
}