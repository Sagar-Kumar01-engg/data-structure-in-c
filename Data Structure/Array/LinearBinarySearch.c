#include<stdio.h>

// int linearSearch(int arr[], int size, int element){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {+
//         -
//             return 1;
//         }
//         return -1;
//     }
    
// }

int binarySearch(int arr[],int size, int element){

   int low, mid, high;
   low = 0;
   high = size-1;

while (low<=high)
{
   
    mid = (low + high)/2;
    if (arr[mid] == element)
    {
       return mid;
    }

    if (arr[mid]>element)
    {
        low = mid + 1;
    }

    else{
        low = mid+1;
    }
    
}
return -1;
    
}


int main()
{
    int arr[] = {1,2,5,56,64,73,77,89,132,567,896,999};
    int size = sizeof(arr)/sizeof(int);

    //Unsorted list for linear search
    // int arr[] = {1,2,5,56,4,3,7,9,32,567,896,999};
    // int size = sizeof(arr)/sizeof(int);

    int element = 2;

    int searchIndex = binarySearch(arr,size,element);
    printf("The element %d was found at index %d \n",element, searchIndex);

    // int searchIndex = linearSearch(arr,size,element);
    // printf("The element %d was found at index %d \n",element, searchIndex);
    return 0;
}
