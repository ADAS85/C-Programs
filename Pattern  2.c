/*          2 2 2       3 3 3 3 3
            2 1 2       3 2 2 2 3
            2 2 2       3 2 1 2 3
                        3 2 2 2 3
                        3 3 3 3 3       */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number : \n");
    scanf("%d", &n);
    printf("\n");
    int m=(n*2)-1;
    int a[m][m];

    int i,j,k=n-1,l,s=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            a[i][j]=n;
        }
    }
    for(i=1;i<m-1;i++)
    {
        for(j=1+s;j<m-1-s;j++)
        {
            for(l=1+s;l<m-1-s;l++)
            {
                a[j][l]=k;
            }
        }
        k--;
        s++;
    }

    printf("OUTPUT PATTERN :  \n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
