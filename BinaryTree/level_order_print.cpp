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

void print_level_order(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* n = q.front();
        q.pop();
        if(n != NULL){
            if(n -> left)
                q.push(n -> left);
            if(n -> right)
                q.push(n -> right);
            cout << n -> data << '\t';
        }
        else{
            cout << '\n';
            if(!q.empty())
                q.push(NULL);
        }
    }
    return;
}

int main(){
    Node* root = buildtree();
    print_level_order(root);
}