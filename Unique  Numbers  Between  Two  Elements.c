/*  List  of  Unique  Numbers  Between  Two  Elements  =  Unique  Number =
    Number  Having  No  Repeated  Digit  */



#include <stdio.h>
int main()
{
    int n1,n2,flag=0;
    printf("Enter the numbers : \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    int i,j,k,z,l,s=n2,c=0,rem=0;
    while(s>0)
    {
        rem=s%10;
        c++;
        s=s/10;
    }
    int a[c],count=0;

    for(i=n1;i<=n2;i++)
    {
        k=i;
        z=0;
        while(k>0)
        {
            rem=k%10;
            a[0+z]=rem;
            k=k/10;
            z++;
        }
        for(j=0;j<c-1;j++)
        {
            for(l=j+1;l<c;l++)
            {
                if(a[j]!=a[l])
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        if(flag==1)
        {
            printf("%d ",i);
            count++;
        }
    }

    printf("\n\nCount : %d",count);
}
