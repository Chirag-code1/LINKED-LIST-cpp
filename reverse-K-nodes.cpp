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
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node* reversek(node* &head, int k){
    node* preptr=NULL;
    node* curptr=head;
    node* nextptr;
    
    int count=0;
    while(curptr!=NULL && count<k){
        nextptr=curptr->next;
        curptr->next=preptr;
        preptr=curptr;
        curptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next=reversek(nextptr,k);
    }
    return preptr;
}

int main()
{
    
    node* head=NULL;
    insertAtHead(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    display(head);//10 20 30 40 50

  
   
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);


    return 0;
}
