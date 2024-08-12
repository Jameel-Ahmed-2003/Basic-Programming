/*
print fibonacci series within the range
input 1 : 1 12
output1: 2 3 5 8

input 2 :0 22
output2: 1 2 3 5 8 13 21
*/
#include<stdio.h>
void main()
{
    int start,end,term1=0,term2=1,term3=0;
    scanf("%d %d",&start,&end);
    for(;term3<=start;term3=term1+term2,term1=term2,term2=term3);
    for(;term3<=end;printf("%d ",term3),term3=term1+term2,term1=term2,term2=term3);
}
