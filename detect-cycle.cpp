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


void makecycle(node* &head, int pos){
    node* temp=head;
    node* startNode;
    
    int count=1;
    while(temp->next!=NULL){
        
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
}
temp->next=startNode;
}

bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        
        if(fast==slow){
            return true;
        }
    }
    return false;
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

 makecycle(head,3);
  //display(head);
  cout<<detectCycle(head)<<endl;

    return 0;
}
