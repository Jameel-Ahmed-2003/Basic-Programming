#include <stdio.h>
#include <string.h>
void main()
{
    // a="aabb" ->a2b2
    char a[100];
    scanf("%s",&a);
    char b[100] = "";
    int i,j=0,count;
    for (i = 0;a[i]!='\0'; i++)
    {
        count = 1;
        for (; a[i] == a[i + 1]; count++, i++)
            ;
        b[j++] = a[i];
        b[j++]=count+'0';
    }
    b[j]='\0';
    printf("%s", b);
}
