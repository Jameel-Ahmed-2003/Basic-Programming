//sum of absolute difference
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,val,sum=0;
    cout<<"n: ";
    cin>>n;
    vector<int>mat;
    for(auto i=0;i<n;i++)
    {
        cin>>val;
        mat.push_back(val);
    }
    sort(mat.begin(),mat.end());
    for(auto i=1;i<n;i++)
    sum+=abs(mat.at(i)-mat.at(i-1));
    cout<<sum;
    return 0;
}
