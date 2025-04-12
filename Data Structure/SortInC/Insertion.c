#include <stdio.h>

void InsertionSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
       while (j>=0 && arr[j] > key)
       {
        arr[j+1] = arr[j];
        j--;
       }
       arr[j+1] = key; 
    }
    
}

void dispay(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[6] = {3,6,8,2,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("original array: ");
    dispay(arr,n);

    printf("Sorted array: ");
    InsertionSort(arr,n);
    dispay(arr,n);

    return 0;
}