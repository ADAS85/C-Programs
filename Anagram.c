#include <stdio.h>
int main()
{
    char c1[100],c2[100];int i,j,flag=0;
    printf("Enter first string\n");
    scanf("%s",c1);
    printf("Enter second string\n");
    scanf("%s",c2);
    int a=strlen(c1);
    int b=strlen(c2);

    for(i=0;i<a;i++)
    {
        flag=0;
        for(j=0;j<b;j++)
        {
            if(c1[i]==c2[j])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        printf("Not Anagrams");
    }

    if(flag==1)
    printf("Anagram Strings");
}
