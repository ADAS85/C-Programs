/*    Elements  =   16 , 17 , 4 , 3 , 5 , 2     Rightmost Element is always leader. Then elements greater than the rightmost element are the
                                                leaders of an array     */

#include <stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the array size\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        if(a[i-1]>a[n-1])
        {
            s=a[i-1];
            break;
        }
    }
    printf("\n");
    printf("%d\n%d\n",a[n-1],s);
    for(i=n-1;i>=0;i--)
    {
        if(a[i-1]>s)
        {
            s=a[i-1];
            printf("%d\n",s);
        }
    }
}
