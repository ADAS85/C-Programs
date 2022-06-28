/*  Finding  Minimum  2  Numbers  In  The  Array  Such  That  Their  Sum  Is  Less  Than  The  Given  Sum ,  Then
    Printing  Their  Product  */


#include <stdio.h>
int main()
{
    int sum,n,i,j,c;
    printf("Enter the array size ");
    scanf("%d",&n);
    signed int a[n];
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the sum ");
    scanf("%d",&sum);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }

    if((a[0]+a[1])<sum)
        printf("%d",a[0]*a[1]);
    else
        printf("Not Applicable");
}
