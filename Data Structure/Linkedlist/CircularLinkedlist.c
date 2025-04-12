#include <stdio.h>
#include <stdlib.h>

// Define the Node structure before using it
struct Node
{
    int data;
    struct Node *next;
};

// Function to traverse the linked list
void Traversal(struct Node *head)
{
    struct Node *ptr = head;
    printf("Element is %d\n", ptr->data);
        ptr = ptr->next;

    do{
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    } 
    while ( ptr!= head );
}

struct Node *insertionAtFirst(struct Node *head,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node * p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;

}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory for nodes in the linked list
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Assign data and link the nodes
    head->data = 7;
    head->next = second;

    second->data = 66;
    second->next = third;

    third->data = 42; // Assign a value to the third node
    third->next = head;

    // Traverse the linked list
    printf("Linked list before insertion: \n");
    Traversal(head);

    head = insertionAtFirst(head,99);
    printf("Linked list after insertion: \n");
    Traversal(head);
  

    return 0;
}
