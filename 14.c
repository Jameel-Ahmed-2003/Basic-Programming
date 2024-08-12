//c program to count the number of digits using %n
#include<stdio.h>
void main()
{
	int n,count;
	scanf("%d%n",&n,&count);
	printf("The number of digits are %d",count);
}
