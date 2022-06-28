#include <stdio.h>
int main()
{
    int n,s,flag,i,j;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Array elements\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n");
    printf("Prime Numbers Between First & Last Array Elements :- \n");

    for(i=1;i<n-1;i++)
    {
        flag=0;
        s=a[i]/2;
        for(j=2;j<=s;j++)
        {
            if(a[i]%j==0)
            flag=1;
            break;
        }
        if(flag==0)
        printf("%d\n",a[i]);;
    }
}
