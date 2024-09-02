#include<stdio.h>
#include<windows.h>
int position,choice,i;
struct node
{
    int data;
    struct node*flink;
    struct node*blink;
}*first=NULL,*last=NULL,*newnode,*prev,*ptr;
struct node*create()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->flink=NULL;
    newnode->blink=NULL;
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
        first->blink=newnode;
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
        newnode->blink=last;
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
        newnode->blink=prev;
        newnode->flink=ptr;
        ptr->blink=newnode;
    }
}
void deleteFirst()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED!\n");
    else
    {first=first->flink;first->blink=NULL;}
}
void deleteLast()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED!\n");
    else if(first==last)
    {first=NULL;last=NULL;}
    else
    {
        last=last->blink;
        last->flink=NULL;
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
        ptr->blink=prev;
        prev->flink=ptr;
    }
}
void traverse()
{
    if(first==NULL)
    printf("MEMORY NOT ALLOCATED!\n");
    else
    {
        printf("Forward Traversal : NULL");
        for(ptr=first;ptr!=NULL;printf("<-%d->",ptr->data),ptr=ptr->flink);
        printf("NULL\nBackward Traversal : NULL");
        for(ptr=last;ptr!=NULL;printf("<-%d->",ptr->data),ptr=ptr->blink);
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
