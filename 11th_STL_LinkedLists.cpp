#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int val){
    Node *newnode=new Node();
    newnode->data=val;
    if(head==NULL){
        head=newnode;
        return;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newnode;
    
}
void Display(Node* temp){
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    /*Node *head=new Node();// creating a new node 
    Node *first=new Node();
    Node *second=new Node();
    head->data=10;//assinging data
    to connect new nodes
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=NULL;*/
    insert(40);
    insert(20);
    insert(30);
    
    Display(head);
    
}

