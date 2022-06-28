/*  Calculating  Prime  Pairs , Between  Two  Given  Ranges , Having  Difference  of  6  */



#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the numbers - \n");
    scanf("%d",&m);
    scanf("%d",&n);
    int i,j,k,a,b,flag,flag_1,count=0;

    for(i=m;i<=n;i++)
    {
        flag=1;
        a=i/2;
        for(k=2;k<=a;k++)
        {
            if(i%k==0)
                flag=0;
        }
        if(flag==1)
        {
            for(j=i+6;j<n;j=j+6)
            {
                flag_1=1;
                b=j/2;
                for(k=2;k<=b;k++)
                {
                    if(j%k==0)
                        flag_1=0;
                }
                if(flag_1==1)
                {
                    count++;
                    printf("(%d %d)\n",i,j);
                }
                break;
            }
        }
    }

    printf("\n\n%d",count);
}
