/*  Calculating the closest number to 'a' by permuting the digits of 'b'  */


#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers : \n");
    scanf("%d",&a);
    scanf("%d",&b);
    int i=a,j,k,c=0,z=1,rem,temp;

    while(i>0)
    {
        rem=i%10;
        c++;
        i=i/10;
    }
    int s[c];
    i=a;
    while(i>0)
    {
        rem=i%10;
        s[c-z]=rem;
        i=i/10;
        z++;
    }
    i=b;
    z=1;
    int v[c];
    while(i>0)
    {
        rem=i%10;
        v[c-z]=rem;
        i=i/10;
        z++;
    }

    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s[j]==v[i])
            {
                temp=s[j];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    for(i=0;i<c;i++)
        printf("%d",s[i]);
}
