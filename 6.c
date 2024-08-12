/*
Check if a number is a strobogrammatic number or not
A strobogrammatic number is a number whose numeral is rotationally symmetric, so that it appears the same when rotated 180 degrees.
In other words, the numeral looks the same right-side up and upside down (e.g., 69, 96, 1001).
*/
#include<stdio.h>
#include<stdbool.h>
char rotate(char a)
{
    char c;
    switch(a)
    {
        case '6':c='9';break;
        case '9':c='6';break;
        case '0':
        case '1':
        case '8':c=a;break;
    }
    return c;
}
void main()
{
    int i,l;
    bool f=1;
    char a[100];
    printf("Enter a string containing positive integer: ");
    scanf("%s",a);
    for(l=0;a[l];l++);
    for(i=0;i<=l/2;i++)
    if(a[i]!=rotate(a[l-i-1]))
    f=0;
    printf(f?"yes":"no");
}
