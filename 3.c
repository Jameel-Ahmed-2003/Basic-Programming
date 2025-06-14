/*
C program to reverse the position of each word in a string

input  1 : programming language
output 1 : language programming
input  2 : The quick brown fox jumps over a lazy dog
output 2 : dog lazy a over jumps fox brown quick The
*/
#include<stdio.h>
#include<string.h>
#define MAXLENGTH 100
char*words[MAXLENGTH];
char result[MAXLENGTH]="";
int i=0;
void reverseWords(char*str)
{
    for(char*portion=strtok(str," ");portion!=NULL;words[i++]=portion,portion=strtok(NULL," "));
    for(i-=1;i>=0;i--)
    {
        strcat(result,words[i]);
        if(i!=0)
        strcat(result," ");
    }
}
void main()
{
    char str[MAXLENGTH];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    reverseWords(str);
    printf("%s",result);
}
