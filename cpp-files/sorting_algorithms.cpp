#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void printArray(int arr[],int n)
{
    for(size_t i=0;i<n;cout<<arr[i]<<" ",i++);
    cout<<endl;
}
void insertionSort(int arr[],int n)
{
    for(size_t i=1;i<n;i++)
    {
        int j=i-1;
        int key=arr[i];
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printArray(arr,n);
}
void selectionSort(int arr[],int n)
{
    for(size_t i=0;i<n-1;i++)
    {
        int x=i;
        for(size_t j=i+1;j<n;j++)
        {
            if(arr[j]<arr[x])
            x=j;
        }
        if(x!=i)
        swap(arr[x],arr[i]);
    }
    printArray(arr,n);
}
int main()
{
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    // insertionSort(arr,n);
    selectionSort(arr,n);
    return 0;
}
