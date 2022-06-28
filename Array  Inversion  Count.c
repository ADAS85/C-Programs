/*    Inversion Count ->  Array = 2,4,1,3,5    The number of unsorted pairs in ascending order -  (2,1) (4,1) (4,3)   */

#include <stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("Enter the array size\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe Inversion Counts of the Array : ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                count++;
                printf("(%d,%d) ",a[i],a[j]);
            }
        }
    }
    printf("\n\nThe number of Inversion Counts : %d",count);
}
