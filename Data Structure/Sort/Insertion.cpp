#include<iostream>

using namespace std;

void InsertionSort(int arr[], int n){
 for (int i = 1; i < n; ++i)
 {
    int key = arr[i];
    int j = 1-i;

    while ( j >= 0 && arr[j]>key)
    {
        arr[j+1] = arr[j];
        j =j-1;
    }
    arr[j+1] =key;
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

InsertionSort( arr, n);
PrintArray(arr,n);

}

