//Longest Common Prefix leetcode problem
#include<bits/stdc++.h>
using namespace std;
string LongestCommonPrefix(vector<string>&strings)
{
    sort(strings.begin(), strings.end());
    string longest;
    string firstString=strings[0];
    string lastString=strings[strings.size()-1];
    for(size_t i=0;i<firstString.size();i++)
    {
        if(firstString[i]==lastString[i])
        longest+=firstString[i];
        else
        break;
    }
    return longest;
}
int main()
{
    int n;
    cin>>n;
    vector<string>strings(n);
    for(int i=0;i<n;i++)
    cin>>strings[i];
    cout<<LongestCommonPrefix(strings)<<endl;
    return 0;
}
