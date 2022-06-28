#include <stdio.h>
int main()
{
	int n,k,i,temp;
	printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter number of shifts : ");
	scanf("%d",&k);
    int a[n],b[n],c[n];
    printf("Enter array elements - \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nArray Before Rotation : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    int p=k,s=k;
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        c[i]=a[i];
    }

    while(p>0)
    {
        temp=b[n-1];
        for(i=n-1;i>0;i--)
        {
            b[i]=b[i-1];
        }
        b[0]=temp;
        p--;
    }

    printf("\nRight Rotated Array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    while(s>0)
    {
        temp=c[0];
        for(i=0;i<n;i++)
        {
            c[i]=c[i+1];
        }
        c[n-1]=temp;
        s--;
    }

    printf("\nLeft Rotated Array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}
