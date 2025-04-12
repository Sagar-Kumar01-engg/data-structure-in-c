#include <stdio.h>

void merge(int arr[],int mid , int left ,int right){
    int n1 = mid - left +1;
    int n2 = right - left;

    int arrleft[n1],arrright[n2];

    for (int i = 0; i < n; i++)
        arrleft[i] = arrleft[left + 1];
    for (int j = 0; i < n; j++)
        arrright[j] = arrright[left + j];
    
    int i = 0 , j = 0, k = left;
    while (i<=n1 && j<= n2)
    {
        arr[k] = arrleft[i];
        i++;
    } else
    {
        arr[k] = arrright[j];
        j++;
    }
    k++;

}



int main() {

    return 0;
}