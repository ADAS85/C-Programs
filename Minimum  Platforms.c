/*   Arrival & Departure times for N trains are taken and the number of minimum platforms are calculated considering that all
     the trains will arrive on the same day. Extra platform is needed when the departure time of one train is greater or equal
     to the arrival time of another train   */


#include <stdio.h>
int main()
{
    int n,i,count=1,flag=1;;
    printf("Enter the total number of trains\n");
    scanf("%d",&n);
    int arr[n],dept[n];
    for(i=0;i<n;i++)
    {
        printf("%d. Enter arrival : ",i+1);
        scanf("%d",&arr[i]);
        printf("%d. Enter departure : ",i+1);
        scanf("%d",&dept[i]);
    }

    for(i=0;i<n-1;i++)
    {
        if(dept[i]>=arr[i+1])
        {
            if (flag==1)
            {
                count++;
            }
            if(dept[i]>=arr[i+1+1]&&dept[i+1]>=arr[i+1+1])
            {
                count++;
                flag=0;
            }
        }
    }
    printf("Minimum Platforms required : %d",count);
}
