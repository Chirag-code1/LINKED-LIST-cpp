#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n= new node(val);
   if(head!=NULL){
    head->prev=n;
   }
    n->next=head;
    head=n;
}

void insertAtTail(node* head, int val){
    node* n= new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* head){
    while(head!=NULL){
       
       cout<<head->data<<" "; 
       head=head->next;
    }
    cout<<endl;
}


int main()
{
    node* head=NULL;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    return 0;
}
