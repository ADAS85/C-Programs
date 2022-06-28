#include <stdio.h>
#include <stdlib.h>
struct node
{
    int d;
    struct node *link;
};
struct node *head;
int main()
{
    int s,data;
    printf("Enter the operation - \n1. Insert Node\n2. Insert Node Last\n3. Insert Node In The Beginning\n4. Delete Node From End\n5. Delete Node From Beginning\n");
    while(s!=4)
    {
    printf("\nEnter Your Choice\n");
    scanf("%d",&s);
    printf("Enter the data\n");
    scanf("%d",&data);
    switch(s)
    {
    case 1:
        Node_Insertion(data);
        break;
    case 2:
        Node_Last_Insert(data);
        break;
    case 3:
        Node_Ins_Begin(data);
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("Enter Valid Choice");
    }
    }
}
int Node_Insertion(int data)
{
    head=malloc(sizeof(struct node));
    head->d=data;
    head->link=NULL;
    printf("%d\n",head->d);
    return 0;
}
int Node_Last_Insert(int data)
{
    struct node *current=malloc(sizeof(struct node));
    struct node *ptr;
    ptr=head;
    current->d=data;
    current->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=current;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->d);
        ptr=ptr->link;
    }
    printf("\n");
}
int Node_Ins_Begin(int data)
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr->d=data;
    ptr->link=NULL;
    ptr->link=head;
    head=ptr;
    struct node *ltr;
    ltr=head;
    while(ltr!=NULL)
    {
        printf("%d\t",ltr->d);
        ltr=ltr->link;
    }
    printf("\n");
}
