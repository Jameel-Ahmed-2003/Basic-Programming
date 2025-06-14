/*
C program to print first n numbers that has only n factors
*/
#include<stdio.h>
void main()
{
    int n;
    int i;
    int j;
    int nFactor;
    int count;
    scanf("%d",&n);
    scanf("%d",&nFactor);
    for(i=2;i<=n;i++)
    {
        for(count=0,j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==nFactor)
        printf("%d ",i);
    }
}
