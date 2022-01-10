Node* deleteBeg(Node* head){
     Node* curr = head;
     while(curr->next != head)
     curr = curr->next;
     
     Node* newHead = NULL;
     newHead = head->next;
     curr->next = newHead;
     return newHead;
}

Node* deleteEnd(Node* head){
     Node* curr = head;
     while(curr->next->next != head)
     curr = curr->next;

     curr->next = head;
     return head;

}

