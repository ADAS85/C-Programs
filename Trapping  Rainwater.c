/*  Trapping Rain Water                 -     -
                                        -   - -
    (Empty Units are calculated         - - - -
                                        - - - -        */


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,c,s,sum=0,count=0,d=0;
    printf("Enter the size\t");
    scanf("%d",&n);
    int a[n];
    printf("Enter the trapping elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]>a[i+1]&&a[i+1]<a[i+2])
    {
        if(a[i]<a[i+2])
        {
            c=a[i]-a[i+1];
            sum+=c;
        }
        else if (a[i]>a[i+2])
        {
            c=a[i+2]-a[i+1];
            sum+=c;
        }
        else
        {
            c=a[i]-a[i+1];
            sum+=c;
        }
    }
    else if(a[i]>a[i+1]&&a[i+1]==a[i+2])
    {
        s=a[i];
        count+=2;
        while(a[i+2+d]==a[i+3+d])
        {
            count+=1;
            d++;
        }
        if(a[i+2+d]<a[i+3+d])
        {
            if(s<a[i+3+d])
                sum+=(count*(s-a[i+2+d]));
            else if(s>a[i+3+d])
                sum+=(count*(a[i+3+d]-a[i+2+d]));
            else if(s==a[i+3+d])
                sum+=(count*(s-a[i+2+d]));
        }
    }
    }
    printf("The trapped rain water units are : %d",sum);
}
