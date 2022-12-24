#include <iostream>
using namespace std;

class LinkedList;

class Node{
    int data;

public:
    Node* next;
    // constructor
    Node(int d):data(d), next(NULL){}
    
    // destructor
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }

    int getData(){
        return data;
    }

    friend class LinkedList;
};

class LinkedList{  
public:
    Node* head;
    Node* tail;
    // constructor
    LinkedList():head(NULL), tail(NULL){}

    // destructor
    ~LinkedList(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

    Node* begin(){
        return head;
    }

    void push_front(int data){
        if(head == NULL){
            Node* n = new Node(data);
            head = tail = n;
        }
        else{
            Node* n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data){
        if(head == NULL){
            Node* n = new Node(data);
            head = tail = n;
        }
        else{
            Node* n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos){
        if(pos == 0){
            push_front(data);
            return;
        }
        Node* temp = head;
        for(int i=1; i<=pos-1; i++){
            temp = temp->next;
        }
        Node* n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }

    int search(int key){
        Node* temp = head;
        int index = 0;
        while(temp->next != NULL){
            if(temp->data == key){
                return index;
            }
            index++;
            temp = temp->next;
        }
        return -1;
    }
    
    int helper(Node* head, int key){
        if(head == NULL){
            return -1;
        }
        if(head->data == key){
            return 0;
        }
        int subindex = helper(head->next, key);
        if(subindex == -1){
            return -1;
        }
        return subindex+1;
    }
    int recursiveSearch(int key){
        int index = helper(head, key);
        return index;
    }

    void pop_front(){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            return;
        }
        else{
            Node* temp = head;
            while(temp->next->next !=NULL){
                temp = temp->next;
            }
            delete tail;
            temp->next = NULL;
        }
    }

    void deleteAt(int pos){
       if(pos == 0){
            pop_front();
            return;
        }
        Node* temp = head;
        for(int i=1; i<=pos-1; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }
};