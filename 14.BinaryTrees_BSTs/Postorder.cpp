#include <iostream>
using namespace std;

// Preorder _ CLR

class Node{
public: 
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

Node* buildTree(){
    int d;
    cin>>d;
    if(d == -1){
        return NULL;
    }
    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPostorder(Node* root){
    if(root == NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = buildTree();
    printPostorder(root);
    return 0;
}