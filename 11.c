/*
C program to print first n numbers that has only n factors
input 1 : 20 4
output 1: 6 8 10 14 15

Explanation : from 2 to 20 6 has 4 factors that is 1 2 3 6, 8 has 4 factors that is 1 2 4 8,10 has 4 factors
1 2 5 10, 14 has 4 factors 1 2 7 14, 15 has 4 factors 1 2 7 14
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
