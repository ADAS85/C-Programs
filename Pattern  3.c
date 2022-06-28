/*          *
           ***
          *****
         *******
        *********       */


#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Range : ");
    scanf("%d",&n);
    printf("\n\n");
    int i,j,k;
    int a=n,b=1;
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=a-1;j++)
      {
          printf("  ");
      }
      a--;
      for(j=1;j<=b;j++)
      {
          printf("* ");
      }
      b=b+2;
      printf("\n");
    }
}
