/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    node* n=new node(val);
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


bool find(node* head, int key){
    while(head->next!=NULL){
        if(head->data==key){
            return true;
        }
        head=head->next;
    }
    return false;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    
    delete todelete;
}

void deletion(node* &head, int val){
    
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        
    }
    
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    //(n-1)th node = (n+1)th node.
    delete todelete;
}


int main()
{
    node* head=NULL;
    insertAtTail(head,100);
    insertAtTail(head,200);
    insertAtTail(head,300);
    insertAtTail(head,400);
   insertAtHead(head,10);
    
    cout<<"Your LinkedList:"<<endl;
    display(head);
    cout<<"*************************"<<endl;
    cout<<find(head,2000)<<endl;
    
     cout<<"*************************"<<endl;
     cout<<"After Deltetion of 100"<<endl;
    deletion(head,100);
    display(head);
    
     cout<<"*************************"<<endl;
     cout<<"After deleting Head:"<<endl;
    deleteAtHead(head);
    display(head);
    deletion(head,400);
    display(head);
    deletion(head,300);
    display(head);

    return 0;
}