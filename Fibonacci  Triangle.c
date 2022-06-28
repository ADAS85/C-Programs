#include <stdio.h>
int main()
{
    int n;
    printf("Enter the limit");
    scanf("%d",&n);
    int i,j,k;
    int n1=1,n2=1,n3;

    for(i=1;i<=n;i++)
    {
        n1=1,n2=1;

        for(j=1;j<=i;j++)
        {
            printf("%d\t",n1);
            n3 = n1 + n2;
            n1=n2; n2=n3;
        }
        printf("\n");
    }
}
