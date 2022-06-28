/*          1
         2  3  2
      3  4  5  4  3
   4  5  6  7  6  5  4
5  6  7  8  9  8  7  6  5       */



#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Range : ");
    scanf("%d",&n);
    printf("\n");
    int i,j,k,m;
    int a=n,e=1;
    int b=1;
    int c=1;
    int d=1;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=a-1;j++)
    {
        printf("   ");
    }
    a--;
    for(j=c;j<=b;j++)
    {
        printf("%d  ",j);
    }
    for(k=b-1;k>=c;k--)
    {
        printf("%d  ",k);
    }
    for(m=1;m<=e;m++)
    {
        printf("   ");
    }
    e++;
    c++;
    b=b+2;
    printf("\n");
    }
}
