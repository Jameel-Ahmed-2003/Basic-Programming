//check a number is palindrome or not
#include<stdio.h>
#include<windows.h>
void main()
{
    system("cls");
    int n,r,rev=0;
    scanf("%d",&n);
    int temp=n;
    for(;temp!=0;rev=rev*10+(temp%10),temp/=10);
    rev==n?printf("palindrome"):printf("not a palindrome");
}
