
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
};

// struct Node *: The function returns a pointer to a Node. This is because after deleting the first node, we need to return the new head of the linked list. Returning a pointer allows us to effectively update the head of the list in the calling function.

// Case 1: Deleting first element
struct Node * DeletionAtFirst(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting betweeen node element
struct Node * DeletionAtIndex(struct Node *head,int index){
    struct Node *p =head;
    struct Node *q = head->next;

    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q ->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting last element
struct Node * DeletionAtLast(struct Node *head){
   struct Node *p =head;
    struct Node *q = head->next;

    while (q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p ->next = NULL;
    free(q);
    return head;
}

// Case 1: Deleting any element
struct Node * DeletionAtValue(struct Node *head,int value){
    struct Node *p =head;
    struct Node *q = head->next;

   while (q->data!=value && q->next!=NULL)
   {
    p = p->next;
    q = q ->next;
   }
   
   if(q->data == value){
    p->next = q->next;
    free(q);
   }
    return head;
}




int main()
{
    // Decalaring the Node of the linked list 
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Assign data and link the nodes
    head->data = 7;
    head->next = second;

    second->data = 66;
    second->next = third;

    third->data = 42; // Assign a value to the third node
    third->next = fourth;

    fourth->data = 55;
    fourth->next =NULL;

    printf("Linked list before deletion:- \n");
    Traversal(head);

    // head = DeletionAtFirst(head);

    // head = DeletionAtIndex(head,2);

    // head = DeletionAtLast(head);

    head = DeletionAtValue(head,55);
    printf("Linked list after deletion:- \n");
    Traversal(head);

   return 0;

}

