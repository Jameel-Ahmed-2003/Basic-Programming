//summing all odd position digits and even position digits
#include<iostream>
using namespace std;
void solve(int a[],int n,int&oddPos,int&evenPos)
{
    // int oddPos=0,evenPos=0;
    for(size_t i=0;i<n;i++)
    {
        string x=to_string(a[i]);
        for(size_t j=0;j<x.size();j++)
        (j%2==0)?oddPos+=x[j]-'0':evenPos+=x[j]-'0';
    }
}
int main()
{
    int n=5,oddPos=0,evenPos=0;
    int a[]={22,45,78,99,67};
    solve(a,n,oddPos,evenPos);
    cout<<oddPos<<endl;
    return 0;
}
