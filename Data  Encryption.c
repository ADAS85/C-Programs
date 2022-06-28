/* Acquiring ASCII Values of Given String & Increases The ASCII Values By 2 */

#include <stdio.h>
int main()
{
    char c[100]; int i;
    printf("Enter the String\n");
    scanf("%s",c);
    printf("The original String is : %s\n",c);
    int n=strlen(c);
    int a[n];

    for(i=0;i<n;i++)
    {
        a[i]=(int)c[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i]+2;
    }
    for(i=0;i<n;i++)
    {
        c[i]=(char)a[i];
    }
    printf("The encrypted String is : %s",c);
}
