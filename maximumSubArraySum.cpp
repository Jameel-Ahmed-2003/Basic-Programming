//leetcode problem
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int maximumSubArraySum(int arr[],int n)
{
    int maxElement=*max_element(arr,arr+n),i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]+sum<0)
        {
            sum=0;
            continue;
        }
        else{
            sum+=arr[i];
            maxElement=max(sum,maxElement);
        }
    }
    return maxElement;
}
int main()
{
    int arr[]={ -2, -3, 4, -1, -2, 1, 5, -3 };
    cout<<maximumSubArraySum(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
