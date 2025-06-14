//remove duplicates
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<int>a={1,2,3,4,5,2,2,22,4,4,78,54,54};
    sort(a.begin(),a.end());
    auto last=unique(a.begin(),a.end());
    a.erase(last,a.end());
    for(auto i:a)
    cout<<i<<" ";
    return 0;
}
