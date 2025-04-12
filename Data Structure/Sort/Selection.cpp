#include<iostream>

using namespace std;

void SelectionSort(int arr[], int n){
   
   for (int i = 0; i < n-1; i++)
   {
    int smallestInt = i;
    for (int j = i+1; j < n; j++)
    {
       if (arr[j] < arr[smallestInt])
       {
        smallestInt = j;
       }
       
    }
    swap(arr[i],arr[smallestInt]);
    
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
    int n = 6;
int arr[] = {4,7,8,3,2,1};

SelectionSort( arr, n);
PrintArray(arr,n);

}

