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




node* reverse(node* head){
    node* preptr=NULL;
    node* curptr=head;
    node* nextptr;
    while(curptr!=NULL){
        nextptr=curptr->next;
        curptr->next=preptr;
        
        preptr=curptr;
        curptr=nextptr;
    }
    return preptr;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
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
    
   
    node* newhead= reverse(head);
    display(newhead);
    
    return 0;
}
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




node* reverse(node* head){
    node* preptr=NULL;
    node* curptr=head;
    node* nextptr;
    while(curptr!=NULL){
        nextptr=curptr->next;
        curptr->next=preptr;
        
        preptr=curptr;
        curptr=nextptr;
    }
    return preptr;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
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
    
    
    node* newhead= reverse(head);
    display(newhead);
    
    return 0;
}
