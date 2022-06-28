/*  Finding number of houses containing sufficient food for rats (r) that consume (unit) amount of food .  Number of
    houses and their food content are accepted in an array  */



#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,r,unit,i,sum=0,count=0;
    printf("Enter the number of rats : ");
    scanf("%d",&r);
    printf("Enter the units consumed by rats : ");
    scanf("%d",&unit);
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }

    int req_food=r*unit;
    printf("\n");

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        count++;
        if(sum>=req_food)
        {
            printf("%d",count);
            break;
        }
    }

    if(sum<req_food)
    {
        printf("Food Not Sufficient");
    }
}
