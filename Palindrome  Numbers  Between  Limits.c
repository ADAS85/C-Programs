/*  Printing all intermediate Palindrome Numbers between two limits  */


#include <stdio.h>
int main()
{
    int low_lim,high_lim,num=0,rem;
    int i,j;
    printf("Enter Lower limit : ");
    scanf("%d",&low_lim);
    printf("Enter Upper limit : ");
    scanf("%d",&high_lim);

    for(i=low_lim;i<=high_lim;i++)
    {
        j=i;
        num=0;
        while(j>0)
        {
        rem=j%10;
        num=num*10+rem;
        j=j/10;
        }
        if(i==num)
        {
            printf("%d ",i);
        }
    }
}
