/*
C program to reverse the position of each word in a string without strtok
input  1 : programming language
output 1 : language programming
input  2 : hello everyone
output 2 : everyone hello

*/
#include<stdio.h>
#include<ctype.h>
#define MAX_LENGTH 100
char str[MAX_LENGTH],temp[MAX_LENGTH][MAX_LENGTH];
int i,word=0,character=0;
void main()
{
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    for(i=0;str[i];i++)
    {
        if(!isspace(str[i]))
        temp[word][character++]=str[i];
        else
        {
            temp[word][character]='\0';
            character=0;
            word++;
        }
    }
    for(i=word;i>=0;i--)
    printf("%s ",temp[i]);
}
