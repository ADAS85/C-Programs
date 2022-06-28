/*  D2C  Question  :  p starts from 0 and moves equal steps with time(t)=1,2,3...  i.e.  p=p+t for t.
                      If p becomes equal to Destination (N), time is returned.
                      If p becomes greater than Destination (N), p=p-t so as to skip the time and finding
                      the perfect time where p matches exactly with the Destination (N).
*/


#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Destination : ");
    scanf("%d",&n);
    int i,p=0,z;

    for(i=1;i<=n;i++)
    {
        z=n-p;
        if(z>=i)
        {
           p=p+i;
        }
        else
        {
            p=p-(i-1);
            i=i-1;
        }

        if(p==n)
        {
            break;
        }
    }
    printf("Minimum Time Required To Reach Destination : %d",i);
}
