//c program to print the nearest fibonacci number
#include<stdio.h>
#include<windows.h>
void main()
{
    system("cls");
    int n,nearest,term1=0,term2=1,term3=0;
    scanf("%d",&n);
    for(;n>=term3;term3=term1+term2,term1=term2,term2=term3);
    printf("%d %d\n\n",term1,term2);
    int a=abs(n-term1);
    int b=abs(n-term2);
    nearest=(a>b)?term2:term1;
    printf("Nearest %d",nearest);
}
