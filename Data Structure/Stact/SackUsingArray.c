#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};


int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }

    else
    {
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing an element manyally
    s->arr[0] = 4;
    s->top++;


    // Check if stack is empty or not
    if (isEmpty(s))
    {
        printf("The stack is empty \n");
    }
    
    else
    {
        printf("The stack is not empty \n");
    }

    printf("This is the elment is pushed in the stack: %d \n", s->arr[s->top]);


    
    return 0;
}
