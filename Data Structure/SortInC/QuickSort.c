#include <stdio.h>

void Swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low , int high){
    int pivot = arr[high];
    int i =(low -1);

    for (int j = low; j < high; j++)
    {
        if(arr[j] < pivot){
            i++;
            Swap(&arr[i] , &arr[j]);
        }
    }
    Swap(&arr[i +1], &arr[high]);
    return (i + 1);
}

void QuickSort(int arr[], int low , int high){
    if (low < high)
    {
        int pi = partition(arr, low , high);
        QuickSort(arr, low,pi -1);
        QuickSort(arr, pi+1,high);
    }
    
}

void display(int arr[], int size){
    for (int  i = 0; i <size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("unsorted array: ");
    display(arr,n);

    QuickSort(arr,0,n-1);

    printf("Sorted array:");
    display(arr,n);
    
    return 0;
}