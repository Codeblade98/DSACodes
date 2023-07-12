#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int data;
        Node* left;
        Node* right;
    public: Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildtree(){
    // input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
    // -1 means NULL node
    // the tree looks like 1 (2 (4) (5 (7)) (3 (6))
    // first make left sub-tree and then right sub tree

    int d;
    cin >> d;
    if(d == -1){
        return NULL;
    }
    Node* n = new Node(d);
    n -> left = buildtree();
    n -> right = buildtree();
    return n;
}

void print_preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root -> data << '\t';
    print_preorder(root ->left);
    print_preorder(root -> right);
}

void print_inorder(Node* root){
    if(root == NULL){
        return;
    }
    print_inorder(root -> left);
    cout << root -> data << '\t';
    print_inorder(root -> right);
}

void print_postorder(Node* root){
    if(root == NULL){
        return;
    }
    print_postorder(root -> left);
    print_postorder(root -> right);
    cout << root -> data << '\t';
}

int main(){
    Node* root = buildtree();
    cout << "Printing preorder:\n";
    print_preorder(root);
    cout << "\nPrinting inorder:\n";
    print_inorder(root);
    cout << "\nPrinting postorder:\n";
    print_postorder(root);
    
}