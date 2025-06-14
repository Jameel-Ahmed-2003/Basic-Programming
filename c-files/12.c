//find the operator 
//sample input 5-4=20 output ->*
//sample input 50+2=25 output ->/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX_LENGTH 100
void main()
{
    int i,j,sum;
    char str[MAX_LENGTH];
    int integer[MAX_LENGTH];
    bool inc;
    scanf("%[^\n]s",str);
    for(i=0,j=0;str[i];i++)
    {
        for(sum=0,inc=false;isdigit(str[i]);sum=(sum*10)+str[i++]-48,inc=true);
        if(inc)integer[j++]=sum;
    }
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='-'||str[i]=='*'||str[i]=='+'||str[i]=='/')
        {
            int add=integer[0]+integer[1];
            int sub=abs(integer[0]-integer[1]);
            int mul=integer[0]*integer[1];
            int div=integer[0]/integer[1];
            // printf("add = %d\nsub = %d\nmul = %d\n",add,sub,mul);
            if(integer[2]==add)
            printf("+");
            else if(integer[2]==sub)
            printf("-");
            else if(integer[2]==mul)
            printf("*");
            else if(integer[2]==div)
            printf("/");
            else
            printf("Error");
            exit(0);
        }
    }
}
