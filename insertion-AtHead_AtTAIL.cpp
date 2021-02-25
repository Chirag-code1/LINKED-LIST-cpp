#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    head=n;
    
}

void insertAtTail(node* &head, int val){
    node* n= new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}

void display(node* head){
    while(head!=NULL){
       // head=head->next;
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}



int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
     insertAtTail(head,3);
    display(head);
    insertAtHead(head,10);
   
    display(head);
 cout<<search(head,2)<<endl;
    
    
    return 0;
}