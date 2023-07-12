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

Node* buildtree_level_order(){
    int d;
    cin>>d;
    queue<Node*> q;
    Node* n=new Node(d);
    q.push(n);
    while(!q.empty()){
       cin>>d;
       if(d!=-1){
        Node* temp1 = new Node(d);
        q.front()->left=temp1;
        q.push(temp1);
       }
       cin>>d;
       if(d!=-1){
        Node* temp2 = new Node(d);
        q.front()->right=temp2;
        q.push(temp2);
       }
       q.pop();
    }
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
    Node* root = buildtree_level_order();
    print_level_order(root);
    return 0;
}