#include <stdio.h>

void BubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    
}

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

int main() {

    int arr[5] = {24,5,3,67,22};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr,n);
    printf("sorted elements are:- \n");
    display(arr , n);

    return 0;
}