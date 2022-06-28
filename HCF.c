#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int i,x=0;

    if(a<b)
    {
        for(i=2;i<=a;i++)
        {
            if(a%i==0 && b%i==0)
            x=i;
        }
    }
    else
    {
        for(i=2;i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            x=i;
        }
    }

    if(x>0)
        printf("%d",x);
    else
        printf("%d",1);
}
