#include <stdio.h>
#include <stdlib.h>

// Define the Node structure before using it
struct Node
{
    int data;
    struct Node *next;
};

// Function to traverse the linked list
void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
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
    third->next = NULL;

    // Traverse the linked list
    Traversal(head);

    // Free the allocated memory
    // free(head);
    // free(second);
    // free(third);

    return 0;
}
