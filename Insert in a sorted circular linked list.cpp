#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
} typedef Node;

void printList(Node *start)
{
    Node *temp;
     
    if(start != NULL)
    {
        temp = start;
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while(temp != start);
    }
}

Node* last;
void insert(Node** head_ref, int new_data)
{
	Node* new_node = (Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = NULL;
	if (*head_ref == NULL)
	    *head_ref = new_node;
	else
	    last->next = new_node;
	last = new_node;
}
 
Node* sortedInsert(Node* head, Node* new_node)
{
    Node* curr = head;
     
    if (head == NULL)
    {
        new_node->next = new_node;
        head = new_node;
    }
    else if (new_node->data >= head->data)
    {
        while(curr->next != head)
            curr = curr->next;
        curr->next = new_node;
        new_node->next = head;
        head = new_node;
    }
    else
    {
        while (curr->next != head && new_node->data < curr->next->data)
            curr = curr->next;
     
        new_node->next = curr->next;
        curr->next = new_node;
    }
    
    return head;
}

int main()
{
    struct Node* head = NULL;
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);
    last->next = head;
    
    Node* new_node = (Node*)malloc(sizeof(struct Node));
	new_node->data = 4;
	new_node->next = NULL;
    
    printf("Given List: ");
    printList(head);
    printf("\n");
    
    head = sortedInsert(head, new_node);
        
    printf("Final List: ");
    printList(head);
    
    return 0;
}
