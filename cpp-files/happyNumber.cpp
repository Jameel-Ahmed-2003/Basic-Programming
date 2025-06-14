//single number leetcode problem
#include<iostream>
#include<math.h>
#include<unordered_set>
using namespace std;
int sumOfSquares(int n)
{
    int sum;
    for(sum=0;n!=0;sum=(sum*10)+pow((n%10),2),n/=10);
    return sum;
}
bool isHappy(int*arr,int n)
{
    unordered_set<int>seen;
    for(;n!=1&&seen.find(n)==seen.end();seen.insert(n),n=sumOfSquares(n));
    return n==1;
}
int main()
{
    int n;
    cin>>n;
    int*arr=new int[n];
    (isHappy(arr,n))?cout<<"Happy number":cout<<"Not a happy number";
}
