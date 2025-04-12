#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case one
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));// Memory allocation for pointer
    ptr->next = head;
    ptr->data = data;
    return ptr;
};

// Case Two
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));// Memory allocation for pointer
    struct Node *p = head;
    int i = 0;

    while (i!= index-1)
    {
      p = p->next;
      i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
    
};

// Case Three
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));// Memory allocation for pointer
   ptr ->data =data;
   struct Node *p = head;

   while (p->next!=NULL)
   {
    p = p->next;
   }
   p->next =ptr;
   ptr->next =NULL;
   
};

// Case Four
struct Node *insertAtAfter(struct Node *head,struct Node *preNode, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));// Memory allocation for pointer
   ptr ->data =data;

   ptr->next = preNode->next;
   preNode->next =ptr;

   return head;

   
};

int main()
{
    // Decalaring the Node of the linked list 
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
    third->next = NULL;

    // Traverse the linked list
    printf("Linked list before insertion\n");
    Traversal(head);

    // Free the allocated memory
    // free(head);
    // free(second);
    // free(third);

//   head = insertAtFirst(head, 55);
//  head = insertAtIndex(head,233,2);
//   Traversal(head);  
printf("Linked list after insertion\n");
// head = insertAtEnd(head,123);
head = insertAtAfter(head,third,1);
Traversal(head);

    return 0;
}
