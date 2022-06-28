#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int max=(a>b)?a:(b>c)?b:c;

    while(1)
    {
        if(max%a==0 && max%b==0 && max%c==0)
            break;
        max++;
    }

    printf("LCM : %d",max);
}
