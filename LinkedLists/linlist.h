#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;

    public:
    Node(int d): data(d), next(NULL){}
};

class LinkedList{
    public: 
        Node* head;
        Node* tail;

    public:
    LinkedList(): head(NULL), tail(NULL){}

    void push_front(int d){
        Node* n = new Node(d);
        if(head==NULL){
            head = n;
            tail = n;
            return;
        }
        else{
            n->next = head;
            head = n;
        }
    }

    void push_back(int d){
        Node* n = new Node(d);
        if(head==NULL){
            head = n;
            tail = n;
            return;
        }
        else{
            tail->next = n;
            tail = n;
        }
    }

    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    void insert(int data, int pos){
        Node* n = new Node(data);
        if(pos==0){
            n->next = head;
            head = n;
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
    }

    void delete_at(int pos){
        if(pos==0){
            head = head->next;
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }

    int search(int data){
        Node* temp = head;
        int i = 0;
        while(temp!=NULL){
            if(temp->data == data){
                return i;
            }
            i++;
            temp = temp->next;
        }
        return -1;
    }

    int rec_search(Node* start, int data){

        int pos = 0;
        if(head==NULL){
            return -1;
        }
        if(head->data == data){
            return 0;
        }
        return pos + 1 + rec_search(start->next, data);
    }
};