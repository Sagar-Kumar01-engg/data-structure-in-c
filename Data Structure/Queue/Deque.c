#include <stdio.h>
#include <stdlib.h>
#define Max_Size 5

typedef struct {
    int arr[Max_Size];
    int front, rear;
} Deque;

void initializeDeque(Deque *dq) {
    dq->front = -1;
    dq->rear = -1;
}

void insertionAtFront(Deque *dq, int value) {
    if ((dq->front == 0 && dq->rear == Max_Size - 1) || (dq->rear + 1 == dq->front)) {
        printf("Queue overflow\n");
    } else if (dq->front == -1) { // Initial case
        dq->front = dq->rear = 0;
    } else if (dq->front == 0) { // Wrap around to the end
        dq->front = Max_Size - 1;
    } else {
        dq->front--; // Move front backward
    }
    dq->arr[dq->front] = value;
}

void insertionAtRear(Deque *dq, int value) {
    if ((dq->front == 0 && dq->rear == Max_Size - 1) || (dq->rear + 1 == dq->front)) {
        printf("Queue overflow\n");
    } else if (dq->rear == -1) { // Initial case
        dq->front = dq->rear = 0;
    } else if (dq->rear == Max_Size - 1) { // Wrap around to the start
        dq->rear = 0;
    } else {
        dq->rear++; // Move rear forward
    }
    dq->arr[dq->rear] = value;
}

void display(Deque *dq) {
    if (dq->front == -1) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Deque elements: ");
    int i = dq->front;
    while (1) {
        printf("%d ", dq->arr[i]);
        if (i == dq->rear) break;
        i = (i + 1) % Max_Size;
    }
    printf("\n");
}

int main() {
    Deque dq;
    initializeDeque(&dq);

    insertionAtFront(&dq, 10);
    insertionAtFront(&dq, 20);
    insertionAtFront(&dq, 30);
    insertionAtFront(&dq, 40);
    insertionAtFront(&dq, 50); // Should show "Queue overflow"
    display(&dq);

    insertionAtRear(&dq,01);
    insertionAtRear(&dq,02);
    insertionAtRear(&dq,03);
    insertionAtRear(&dq,04);
    display(&dq);

    return 0;
}