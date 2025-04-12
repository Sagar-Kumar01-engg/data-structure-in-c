#include <stdio.h>
#include <stdlib.h>

// Step 1 - Define the structure of the linked list node
typedef struct Node {
   int data;
   struct Node* next;
} node;

// Step 2 - Define the queue 
typedef struct Queue {
   node* front;
   node* rear;
} queue;

// Step 3 - Function to create the new node 
node* CreateNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));

    if (newNode == NULL) {
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Step 4 - Function to create a new queue
queue* createQueue() {
    queue* newQueue = (queue*)malloc(sizeof(queue));

    newQueue->front = newQueue->rear = NULL;
    return newQueue;
}

// Step 5 - Function for insertion
void enqueue(queue* q, int data) {
    node* newNode = CreateNode(data);

    if (!newNode) {
        printf("Queue overflow\n");
        return;
    }

    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        return;
    }
    q->rear->next = newNode;
    q->rear = newNode;
}

void displayQueue(queue* q) {
    node* temp = q->front;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    queue* q = createQueue();
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    displayQueue(q);

    

    return 0;
}
