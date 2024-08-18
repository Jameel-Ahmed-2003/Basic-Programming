//water trap problem brute force approach leetcode hard
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>height={0,1,0,2,1,0,1,3,2,1,2,1};
    int l=height.size(),total=0;
    vector<int>leftMax(l,0);
    vector<int>rightMax(l,0);
    leftMax[0]=(height[0]);
    rightMax[l-1]=height[l-1];
    for(size_t i=1;i<l;i++)
    leftMax[i]=max(leftMax[i-1],height[i]);
    for(auto i=l-2;i>=0;i--)
    rightMax[i]=max(rightMax[i+1],height[i]);
    cout<<"LEFT MAXIMUM : ";
    for(size_t i=0;i<l;i++)
    cout<<leftMax[i]<<" ";
    cout<<endl<<"RIGHT MAXIMUM: ";
    for (size_t i = 0; i < l; i++)
    cout<<rightMax[i]<<" ";
    cout<<endl;
    for(size_t i=0;i<l;i++)
    {
        if(height[i]<leftMax[i]&&height[i]<rightMax[i])
        total+=min(leftMax[i],rightMax[i])-height[i];
    }
    cout<<total;
    return 0;
}
