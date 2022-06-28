#include <stdio.h>
int main()
{
    char c[100]; int i;
    printf("Enter the string\t");
    scanf("%[^\n]s",c);
    printf("%s",c);
    printf("\n\n");
    int n=strlen(c);
    int a[n];

    for(i=0;i<n;i++)
    {
        a[i]=(int)c[i];
    }
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
