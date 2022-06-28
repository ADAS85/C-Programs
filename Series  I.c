/*    Printing Series  ->    1 1 2 3 4 9 8 27 16 81 32 243 64 729 128 2187 ...    */


#include <stdio.h>
int main()
{
    int n,i=0,b=1,c=1;
    printf("Enter the range of the series\n");
    scanf("%d",&n);
    int a[n];

    while(i<n)
    {
        a[i]=b;
        a[i+1]=c;
        b=b*2;
        c=c*3;
        i=i+2;
    }

    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
