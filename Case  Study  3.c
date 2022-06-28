/*  Input in form of 1A0B1C0B1A0 ,  where A denotes AND, B denotes OR and C denotes XOR  */


#include <stdio.h>
int main()
{
    char str[100];
    int i,sum=0;
    printf("Enter the String\n");
    scanf("%s",str);
    int n=strlen(str);

    if(str[1]=='A')
    {
        sum=str[0]&str[2];
    }
    else if(str[1]=='B')
    {
        sum=str[0]|str[2];
    }
    else if(str[1]=='C')
    {
        sum=str[0]^str[2];
    }

    for(i=3;i<n;i++)
    {
        if(str[i]=='A')
        {
            sum=sum&str[i+1];
        }
        else if(str[i]=='B')
        {
            sum=sum|str[i+1];
        }
        else if(str[i]=='C')
        {
            sum=sum^str[i+1];
        }
    }
    printf("The Final Expression : %d",sum);
}

