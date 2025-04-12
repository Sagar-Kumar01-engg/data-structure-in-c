#include <stdio.h>

void SelectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            int temp = arr[j];
            arr[j] = arr[minIndex];
            arr[minIndex] = temp;
        }
        
    }
    
}

void display(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[10] = {34,2,55,56,17,74,21,89,45,74};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, n);
    printf("Sorted elements are :\n");
    display(arr, n);

    return 0;
}