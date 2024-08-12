/*
C program to split strings based on delimeter
input1 : The quick brown fox jumps over a lazy dog
output1: The quick brown fox jumps over a lazy dog //the input1 string is splitted
*/
#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 100
void main()
{
    char str[MAX_LENGTH];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    char*portion;
    for(portion=strtok(str," ");portion!=NULL;printf("%s ",portion),portion=strtok(NULL," "));
}
