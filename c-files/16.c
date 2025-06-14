//factorial
#include<stdio.h>
void main()
{
    int n,fact=1;
    for(scanf("%d",&n);n!=0;fact=fact*n--);
    printf("%d",fact);
}
