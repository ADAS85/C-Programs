/*  Stack  Operations  -   push , pop , peek , count , change , display.    */


#include <stdio.h>
void push();
void pop();
void peek();
void count();
void change();
void display();
int Top=-1,Stack[10];
int main()
{
    int c=0;

    while(c!=7)
    {
    printf("Enter The Choice : \n 1)Push  2)Pop  3)Peek  4)Count  5)Change  6)Display  7)Exit  :  ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peek();
        break;
    case 4:
        count();
        break;
    case 5:
        change();
        break;
    case 6:
        display();
        break;
    case 7:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid Choice\n");
    }
    }
}

void push()
{
    int a;
    printf("Enter the Element : ");
    scanf("%d",&a);
    printf("\n");
    Top=Top+1;
    Stack[Top]=a;
}

void pop()
{
    printf("Popped Element : ");
    printf("%d",Stack[Top]);
    printf("\n\n");
    Top-=1;
}

void peek()
{
    int pos;
    printf("Enter Position : ");
    scanf("%d",&pos);
    printf("%d",Stack[pos]);
    printf("\n");
}

void count()
{
    printf("%d\n\n",Top+1);
}

void change()
{
    int pos,n;
    printf("Enter Position : ");
    scanf("%d",&pos);
    printf("Enter Value : ");
    scanf("%d",&n);
    Stack[pos-1]=n;
    printf("\n");
}

void display()
{
    int i;
    for(i=Top;i>=0;i--)
        printf("%d ",Stack[i]);
    printf("\n\n");
}


