/*  Finding number of carries during addition of two numbers  */


#include <stdio.h>
int main()
{
    int num1,num2,rem1,rem2,count=0,sum=0;
    printf("Enter the numbers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    while(num1>0||num2>0)
    {
        rem1=num1%10;
        rem2=num2%10;
        sum=sum+rem1+rem2;
        if(sum>9)
        {
            count++;
            sum=1;
        }
        else
        {
            sum=0;
        }
        num1=num1/10;
        num2=num2/10;
    }
    printf("Number of Carries : %d",count);
}
