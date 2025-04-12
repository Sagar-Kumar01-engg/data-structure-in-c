#include<iostream>

using namespace std;

void BubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
       bool isSwap = false;
       for (int j = 0; j < n-i-1; j++)
       {
        if (arr[j] > arr[j+1])
        {
          swap(arr[j],arr[j+1]);
        }
      isSwap = true;
       }

         if (!isSwap)
        {
            /* array is already sorted*/
            return;
        }
    }
    
}

void PrintArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<< " ";
       
    }
    cout<<endl;
}

int main(){
    int n = 8;
int arr[] = {4,7,8,3,2,1};
PrintArray(arr, n);
BubbleSort( arr, n);

}

