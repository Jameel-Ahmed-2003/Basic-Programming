//better approach water trap problem leetcode
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>height={0,1,0,2,1,0,1,3,2,1,2,1};
    int l=0,r=height.size()-1,lmax,rmax,total;
    lmax=rmax=total=0;
    for(;l<r;)
    {
        if(height[l]<=height[r])
        {
            if(lmax>height[l])
            total+=lmax-height[l];
            else
            lmax=height[l];
            l++;
        }
        else
        {
            if(rmax>height[r])
            total+=rmax-height[r];
            else
            rmax=height[r];
            r--;
        }
    }
    cout<<total;
    return 0;
}
