/*
C program to convert a string to integer or extract integers from a string
input 1: kdfj123 dfj908 093
output1: 123 908 93

input 2:123-90^45
output2:123 -90 45
*/
#define MAX_LENGTH 100
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>
void main()
{
    char str[MAX_LENGTH];
    int integer[MAX_LENGTH];
    bool inc,sign;
    int i,j,sum;
    printf("Enter a string containing integers : ");
    scanf("%[^\n]s",str);
    for(i=0,j=0;i<strlen(str);i++)
    {
        for(inc=0,sign=0,sum=0;isdigit(str[i]);sum=(sum*10)+str[i++]-48,inc=1)
        {
            if(str[i-1]=='-')
            sign=1;
        }
        if(inc)integer[j++]=(sign)?-sum:sum;
    }
    for(i=0;i<j;i++)
    printf("%d ",integer[i]);
}
