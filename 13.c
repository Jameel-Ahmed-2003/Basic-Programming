/*
accept n number of strings
Sample input
Enter the number of strings : 5
Enter 5 strings
jameel ahmed
shams tabrez husain
mohamed shoaib
mohamed anees

Sample output
jameel ahmed
shams tabrez husain
mohamed shoaib
mohamed anees
*/
#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 100
void main()
{
   int n,i;
   printf("Enter the number of strings : ");
   scanf("%d",&n);
   char strings[n][MAX_LENGTH];
   printf("Enter %d strings\n",n);
   for(i=0;i<n;i++)
   {
    fgets(strings[i],MAX_LENGTH,stdin);
    strings[i][strcspn(strings[i],"\n")]='\0';
   }
   for(i=0;i<n;i++)
   printf("%s\n",strings[i]);
}
