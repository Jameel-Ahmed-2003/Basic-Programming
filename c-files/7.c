/*
C program to remove all occurence of a character in a string
input  1 : hello world! !
output 1 : hello world
input  2 : hello world space
output 2 : helloworld
input  3 : hello world! e
output 3 : hell wrld!
*/
#include<stdio.h>
#define MAX_LENGTH 100
int i,j;
void removeChar(char*str,char r)
{
    for(i=0;str[i];)
    {
        if(str[i]==r)
        for(j=i;str[j];str[j]=str[j++ +1]);
        else
        i++;
    }
}
void main()
{
    char str[MAX_LENGTH];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    char r;
    printf("Enter the character to be removed from the string : ");
    fflush(stdin);
    scanf("%c",&r);
    removeChar(str,r);
    printf("%s",str);
}
