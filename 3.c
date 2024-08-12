/*
C program to reverse the position of each word in a string

input  1 : programming language
output 1 : language programming
input  2 : The quick brown fox jumps over a lazy dog
output 2 : dog lazy a over jumps fox brown quick The
*/
#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 100
char str[MAX_LENGTH];
int i;
void reverseWords(char*str)
{
    char*words[MAX_LENGTH];
    for(char*portion=strtok(str," ");portion!=NULL;words[i++]=portion,portion=strtok(NULL," "));
    for(i-=1;i>=0;i--)
    printf("%s ",words[i]);
}
void main()
{
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    reverseWords(str);
}
