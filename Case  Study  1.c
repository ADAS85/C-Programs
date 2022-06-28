/* Balloon Colors of either Amber and Brass are inputs as a and b. Reversals are found to make
   all the colors same. Minimum number of either color balloons are flipped ->  aabba = aaaaa */

#include <stdio.h>
int main()
{
    char c[100];
    int ca=0,cb=0;
    printf("Enter the balloon colors serially\n");
    scanf("%s",c);
    int n=strlen(c);

    for(int i=0;i<n;i++)
    {
        if(c[i]=='a')
        {
            ca++;
        }
        else
        cb++;
    }

    if(ca<cb)
        printf("%d",ca);
    else
        printf("%d",cb);
}

