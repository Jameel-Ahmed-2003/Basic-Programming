/*
C program to reverse the position of each characters in a word
input 1: programming language
output1: gnimmargorp egaugnal

input 2: #include<stdio.h>
output2: >h.oidts<edulcni#
*/
#include <stdio.h>
#include <string.h>
void reverse(char *str, int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++, end--;
    }
}
void reverseWords(char *str)
{
    int i=0,start=0;
    for (; str[i]; i++)
    {
        (str[i] == ' ')?(reverse(str, start, i - 1),start = i + 1):0;
    }
    reverse(str, start, i - 1);
}
void main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]s", str);
    reverseWords(str);
    printf("%s", str);
}
