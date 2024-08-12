/*
CPP program to print factorial using recursion
*/
#include<iostream>
using namespace std;
int fact(int n)
{
    //using recursive function
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Factorial of ";
    cin>>n;
    int n1=n,factorial=1,i;
    cout<<fact(n)<<"\n";
    
    
    //using loops
    for(i=1;i<=n;i++)
    factorial*=i;
    cout<<factorial;
    return 0;
}
