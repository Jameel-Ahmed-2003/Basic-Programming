//divide a number by 4
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int temp=a;
    a=a>>2;
    printf("%d / 4 = %d",temp,a);
}
