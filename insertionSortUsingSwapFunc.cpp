#include <bits/stdc++.h>

using namespace std;

 void swap(int *ptr1, int *ptr2)
    {
        int temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
void insertionSort(int arr[], int size)
{
    
    for(int i = 0; i < size - 1; i++) 
    {
        if(arr[i] > arr[i+1]) 
            swap(&arr[i], &arr[i+1]);
            
        int ele = arr[i];
        int j = i;
        while(j>0 && arr[j] < arr[j - 1])
        {
           
                swap(&arr[j], &arr[j-1]);
                 j--;
           
               
        }
    }
    
    for( int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {11,7,2,10,6,3,4, 13, 20, 25};
    insertionSort(arr, 10);

    return 0;
}
