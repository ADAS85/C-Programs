/*   Shifting  All  Hyphens  In  A  String  At  The  Front   */


#include <stdio.h>
int main()
{
    char s[100];
    int i,j;
    printf("Enter the String\n");
    scanf("%s",s);
    int n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='-')
        {
            s[i]="";    //Alternative :  a[i]='\0';
            for(j=i;j>0;j--)
            {
                s[j]=s[j-1];
            }
            s[0]='-';
        }
    }
    printf("%s",s);
}
