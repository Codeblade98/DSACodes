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

int height(Node* root){
    if(!root){
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    return 1+max(h1,h2);
}

int diameter(Node* root){
    if(!root){
        return 0;
    }
    int D1 = (height(root->left)-1)+(height(root->right)-1)+2;
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);
    return max(D1,max(D2,D3));
}

int main(){
    Node* root = buildtree();
    cout<<diameter(root);
}