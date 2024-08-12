//c program to count the number of digits
#include<stdio.h>
void main()
{
    int n,count=0;
    scanf("%d",&n);
    for(;n!=0;count++,n/=10);
    printf("%d",count);
}
