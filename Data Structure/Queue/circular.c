#include <stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1,rear=-1;

int isFull(){
    return(rear+1) % MAX_SIZE == front;
}

int isEmpty(){
 return front == -1;
}

int enqueue(int data){
    if (isFull())
    {
        printf("Queue is full");
    }
    
    if (front == -1)
    {
        front == 0;
    }
    rear = (rear +1) % MAX_SIZE;
    queue[rear] = data;
    printf("Element %d is inserted\n",data);
}

int dequeue(){
    if (isEmpty())
    {
        printf("Queue is empty\n");
    }
    int data = queue[front];
    if (front == rear)
    {
        front = rear == -1;
    }
    else{
        front = (front+1) % MAX_SIZE;
    }
    return data;
}

void display(){
    if (isEmpty())
    {
        printf("Queue is full\n");
        return;
    }

    printf("Queue elements:\n");
    int i = front;
    while (i != rear)
    {
        printf("%d",queue[i]);
        i = (i+1)%MAX_SIZE;
    }
    printf("%d\n",queue[rear]);
    
}


int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();
    dequeue();
    display();
    return 0;
}