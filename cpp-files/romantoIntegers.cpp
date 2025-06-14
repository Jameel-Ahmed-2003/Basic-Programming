//cpp program to convert roman to integers leetcode problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>romanSymbolsMap;
    romanSymbolsMap['I']=1;
    romanSymbolsMap['V']=5;
    romanSymbolsMap['X']=10;
    romanSymbolsMap['L']=50;
    romanSymbolsMap['C']=100;
    romanSymbolsMap['D']=500;
    romanSymbolsMap['M']=1000;
    string roman;
    cout<<"Enter the roman numbers : ";
    cin>>roman;
    int decimal=0;
    int l=roman.size(),i;
    for(i=0;i<l;i++)
    {
        if(romanSymbolsMap[roman[i]]>=romanSymbolsMap[roman[i+1]])
        decimal+=romanSymbolsMap[roman[i]];
        else
        {decimal+=(romanSymbolsMap[roman[i+1]]-romanSymbolsMap[roman[i]]);i++;}
    }
    cout<<decimal;
    return 0;
}
