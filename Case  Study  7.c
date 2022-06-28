/*  Calculating  The  Least  Number  Such  That  Multiplication  Of  Its  Digits  Results  The  Input
    Number  n  =>   10 = 2*5 = 25  */


#include <stdio.h>
int main()
{
    int n,num=1,z;
    printf("Enter the number : \n");
    scanf("%d",&n);
    int i=10,j;
    while(1)
    {
        i=i+1;
        j=i;
        num=1;
        while(j>0)
        {
            z=j%10;
            num=num*z;
            j=j/10;
        }
        if(num==n)
            break;
    }
    printf("%d",i);
}

