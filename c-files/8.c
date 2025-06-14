//to multiply a given number by 4
#include<stdio.h>
#include<math.h>
#include<windows.h>
void main()
{
    system("cls");
    int a;
    printf("Enter number to be  multiplied : ");
    scanf("%d",&a);
    int temp=a;
    a=a<<2;//8 4 2 1
    printf("%d x 4 = %d",temp,a);
}
