/*  Counting numbers between two ranges having odd number of factors  */


#include <stdio.h>
int main()
{
    int i,j,a,b,count=0,ncount=0;
    printf("Enter lower limit : ");
    scanf("%d",&a);
    printf("Enter upper limit : ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        j=1;
        count=0;
        while(j<=i)
        {
            if(i%j==0)
            {
                count++;
            }
            j++;
        }
        if(count%2!=0)
            ncount++;
    }
    printf("Numbers having odd number of Factors : %d",ncount);
}
