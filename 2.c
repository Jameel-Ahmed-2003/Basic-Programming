/*
C program to reverse the position of each characters in a word
input 1: programming language
output1: gnimmargorp egaugnal

input 2: #include<stdio.h>
output2: >h.oidts<edulcni#
*/
#include<stdio.h>
#define MAX_LENGTH 100
char str[MAX_LENGTH], temp[MAX_LENGTH];
int i, j, start, end;
void reverseWords(char* str)
{
    for (start=0,i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i+1] == '\0')
        {
            for (end = (str[i] == ' ') ? i - 1 : i,j = end; j >= start; j--)
            temp[end - j] = str[j];
            for (j = start; j <= end; j++)
            str[j] = temp[j - start];
            start = i + 1;
        }
    }
}
void main()
{
    printf("Enter a string : ");
    scanf("%[^\n]", str);
    reverseWords(str);
    printf("%s\n", str);
}
