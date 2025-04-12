#include <stdio.h>
#include <stdlib.h>


struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int isFull(struct stack *ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

void Push(struct stack*ptr,int value){
    if (isFull(ptr))
    {
       printf("stack overflow, cannot push %d value in the stack\n",value);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]= value;
    }
}

int Pop(struct stack *ptr,int value){
    if(isEmpty(ptr)){
        printf("stack underflow, can't pop from the stack\n");
        return -1;
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
    
}

int peek(struct stack* s, int j){
    int arrayInd = s->top - j + 1;
    if (arrayInd < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return s->arr[arrayInd];
    }
    
    
}


int main() {

    struct stack * s= (struct stack*) malloc(sizeof(struct stack));

    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(sizeof(struct stack));
    printf("Stack is created\n");

    printf("Before pushing, Full:  %d\n",isFull (s));
    printf("Before poping, Empty: %d\n",isEmpty (s));
        Push(s,41);
        Push(s,42);
        Push(s,43);
        Push(s,44);
        Push(s,45);
        Push(s,46);
        Push(s,47);
        Push(s,48);
        Push(s,49);
        Push(s,410);// ----> This is maximum size of stack for pushing the value
        Push(s,411); // ----> From here overflow condition statred
        // Push(s,4);
        // Push(s,4);
     
    printf("After pushing, Full:%d\n",isFull (s));
    printf("After poping, Empty: %d\n",isEmpty (s));

    
    printf("popped %d from the stack\n", Pop(s,41));

    for (int j = 0; j < s->top + 1; j++)
    {
    printf("The value at index %d\n",j,peek(s,j));
        
    }
    

    return 0;
}