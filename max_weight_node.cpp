#include<bits/stdc++.h>
using namespace std;
int calc(auto edge,int n)
{
    vector<int>temp(n,0);
    for(size_t i=0;i<n;i++)
    {
        if(edge[i]!=-1)
        temp[edge[i]]+=i;
    }
    int m=max_element(temp.begin(),temp.end())-temp.begin();
    return m;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int>edge(n,0);
    cout<<"Enter values : ";
    for(size_t i=0;i<n;i++)
    cin>>edge[i];   
    for(auto e:edge)
    cout<<e<<" ";
    cout<<endl<<calc(edge,n);
    return 0;
}
