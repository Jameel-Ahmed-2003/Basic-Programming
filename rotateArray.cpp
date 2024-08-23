//leetcode problem rotate array
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void rotateArray(int*arr,int n,int r)
{
    if(n==r||n==1||n==0)
    return ;
    if(r>n)
    r=r%n;
    int left=0;
    int right=n-r-1;
    for(;left<right;swap(arr[left],arr[right]),left++,right--);
    left=n-r;
    right=n-1;
    for(;left<right;swap(arr[left],arr[right]),left++,right--);
    reverse(arr,arr+n);
}
int main()
{
    int n,r;
    cin>>n;
    int*arr=new int[n];
    for(size_t i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the number of rotation : ";
    cin>>r;
    rotateArray(arr,n,r);
    for(size_t i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
