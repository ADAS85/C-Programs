/*  Rhombus  Shape  */


#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int i,j,k,m,z=1,s=0;
    int a=n+1;
    for(i=1;i<a;i++)
        printf(" ");
    printf("*\n");
    for(j=1;j<n+1;j++)
    {
        for(i=1;i<a-1;i++)
            printf(" ");
        printf("*");
        for(m=1;m<=z;m++)
            printf(" ");
        printf("*\n");
        a--;
        z=z+2;
    }
    int b=1;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=b;j++)
            printf(" ");
        printf("*");
        z=z-2;
        for(m=1;m<z-1;m++)
            printf(" ");
        printf("*\n");
        b++;
    }
    for(i=1;i<n+1;i++)
        printf(" ");
    printf("*\n");
}
