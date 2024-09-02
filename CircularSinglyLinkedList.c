#include<stdio.h>
#include<malloc.h>
int choice,position,i;
struct node
{
    int data;
    struct node*flink;
}*first=NULL,*last=NULL,*newnode,*ptr,*prev;
struct node*create()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->flink=NULL;
    return newnode;
}
void insertFirst()
{
    newnode=create();
    if(first==NULL)
    {first=last=newnode;last->flink=first;}
    else
    {
        newnode->flink=first;
        first=newnode;
        last->flink=first;
    }
}
void insertLast()
{
    newnode=create();
    if(first==NULL)
    first=last=newnode;
    else
    {
        last->flink=newnode;
        newnode->flink=first;
        last=newnode;
    }
}
void insertMiddle()
{
    newnode=create();
    if(first==NULL)
    first=last=newnode;
    else
    {
        printf("Enter position : ");
        scanf("%d",&position);
        for(ptr=first,i=1;i<position;i++)
        {
            prev=ptr;
            ptr=ptr->flink;
        }
        prev->flink=newnode;
        newnode->flink=ptr;
    }
}
void deleteFirst()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED\n");
    else if(first==last)
    {first=NULL;last=NULL;}
    else
    {
        first=first->flink;
        last->flink=first;
    }
}
void deleteLast()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED\n");
    else if(first==last)
    {first=NULL;last=NULL;}
    else if(first==last)
    {first=NULL;last=NULL;}
    else
    {
        for(ptr=first;ptr->flink!=first;prev=ptr,ptr=ptr->flink);
        prev->flink=first;
        last=prev;
    }
}
void deleteMiddle()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED\n");
    else
    {
        printf("Enter the position ");
        scanf("%d",&position);
        for(i=1,ptr=first;ptr->flink!=first&&i<position;prev=ptr,ptr=ptr->flink,i++);
        if(ptr->flink!=first)
        ptr=ptr->flink;
        prev->flink=ptr;
    }
}
void traverse()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED");
    else if(first->flink==first)
    printf("%d",first->data);
    else
    {
        ptr=first;
        do{
            printf("%d->",ptr->data);
            if(ptr->flink!=NULL)
            ptr=ptr->flink;
            else
            break;
        }while(ptr!=first);
    }
    printf("\n");
}
int main()
{
    system("cls");
    printf("1.INSERT FIRST\t2.INSERT MIDDLE\t3.INSERT LAST\n4.DELETE FIRST\t5.DELETE MIDDLE\t6.DELETE LAST\n7.TRAVERSE\n8.EXIT\n");
    do{
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertFirst();break;
            case 2:insertMiddle();break;
            case 3:insertLast();break;
            case 4:deleteFirst();break;
            case 5:deleteMiddle();break;
            case 6:deleteLast();break;
            case 7:traverse();break;
            case 8:exit(0);
            default:printf("INVALID CHOICE RETRY!\n");
        }
    }while(choice!=8);
    return 0;
}
