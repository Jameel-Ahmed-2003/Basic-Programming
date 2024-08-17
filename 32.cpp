//split string and store in new array
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LENGTH 100
void main()
{
    int wordCount,i;
    char str[MAX_LENGTH];
    char*portion;
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    str[strcspn(str,"\n")]='\0';
    char*str_copy=strdup(str);
    for(portion=strtok(str_copy," "),wordCount=0;portion!=NULL;portion=strtok(NULL," "),wordCount++);
    free(str_copy);
    char*str2[wordCount];
    for (portion = strtok(str, " "), i = 0; i < wordCount; portion = strtok(NULL, " "), i++) {
        str2[i] = strdup(portion);
        printf("%s\n", str2[i]);
    }
}
