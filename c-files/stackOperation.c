//Stack operation in C language
#include<stdio.h>
#include<stdlib.h>
int choice;
struct node
{
    int data;
    struct node*next;
}*newnode,*ptr,*top;
struct node*create()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to be pushed\t");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}
void push()
{
    newnode=create();
    if(top==NULL)
    top=newnode;
    else
    {
        newnode->next=top;
        top=newnode;
    }
}
void pop()
{
    if(top==NULL)
    printf("Empty stack\n");
    else
    {
        printf("Deleted node is %d\n",top->data);
        top=top->next;
    }
}
void display()
{
    if(top==NULL)
    printf("Emtpy Stack\n");
    else
    {
        printf("Traversal\n");
        for(ptr=top;ptr!=NULL;printf("%d->",ptr->data),ptr=ptr->next);
        printf("\n");
    }
}
void main()
{
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    do{
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            case 4:exit(0);
            default:printf("Invalid choice!\n");
        }
    }while(choice!=4);
}
