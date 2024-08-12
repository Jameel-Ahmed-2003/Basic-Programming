/*
CPP program to print n fibonacci terms
*/
#include<iostream>
using namespace std;
void fibo(int n)
{
    static int n1=0,n2=1,n3;
    if(n>0)
    {
        n3=n1+n2;
        cout<<n3<<' ';
        n1=n2;
        n2=n3;
        return fibo(n-1);
    }
}
int main()
{
    int n;
    cout<<"Fibonacci Series ";
    cin>>n;
    if(n==1)
    cout<<"0";
    else if(n==2)
    cout<<"0 1";
    else if(n>2)
    {
        cout<<"0 1 ";
        fibo(n-2);
    }
    return 0;
}
