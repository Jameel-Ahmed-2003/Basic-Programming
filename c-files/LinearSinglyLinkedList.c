#include<stdio.h>
#include<windows.h>
int position,choice,i;
struct node
{
    int data;
    struct node*flink;
}*first=NULL,*last=NULL,*newnode,*prev,*ptr;
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
    first=last=newnode;
    else    
    {
        newnode->flink=first;
        first=newnode;
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
        printf("Enter position to insert\t");
        scanf("%d",&position);
        for(ptr=first,i=1;i<position&&ptr!=NULL&&ptr->flink!=NULL;prev=ptr,ptr=ptr->flink,i++);
        prev->flink=newnode;
        newnode->flink=ptr;
    }
}
void deleteFirst()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED!\n");
    else
    first=first->flink;
}
void deleteLast()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED!\n");
    else if(first==last)
    {first=NULL;last=NULL;}
    else
    {
        for(ptr=first;ptr->flink!=NULL;prev=ptr,ptr=ptr->flink);
        prev->flink=NULL;
        last=prev;
    }
}
void deleteMiddle()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED!\n");
    else
    {
        printf("Enter the position to delete\t");
        scanf("%d",&position);
        for(i=1,ptr=first;i<position;prev=ptr,ptr=ptr->flink,i++);
        ptr=ptr->flink;
        prev->flink=ptr;
    }
}
void traverse()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED!\n");
    else
    {
        for(ptr=first;ptr!=NULL;printf("%d->",ptr->data),ptr=ptr->flink);
        printf("NULL\n");
    }
}
int main()
{
    system("cls");
    printf("1.INSERT FIRST\t2.INSERT MIDDLE\t3.INSERT LAST\n4.DELETE FIRST\t5.DELETE MIDDLE\t6.DELETE LAST\n7.TRAVERSE\n8.EXIT\n");
    do{
        printf("Enter your choice : ");
        scanf("%d",&choice);
        fflush(stdin);
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
