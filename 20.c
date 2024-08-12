//swap two numbers using + -
#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    //a=20,b=10;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap: a=%d b=%d",a,b);
}

//swap two numbers using * /
#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    //a=20,b=10;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swap: a=%d b=%d",a,b);
}

//swap two numbers using temporary varibles
#include<stdio.h>
void main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}
