/*       *
        *-*
       *---*
      *-----*
     *-------*     */


#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    int a=n,b=1;

    for(i=1;i<=a;i++)
    {
        printf(" ");
    }
    a-=1;
    printf("*\n");

    for(i=1;i<n;i++)
    {
        for(j=1;j<=a;j++)
            printf(" ");
        a-=1;                   // Decrementing spaces
        printf("*");
        for(k=1;k<=b;k++)
            printf("-");
        b+=2;                   // Incrementing middle hyphens
        printf("*\n");
    }
}
