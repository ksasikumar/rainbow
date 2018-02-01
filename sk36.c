#include<stdio.h>
#include<string.h>
int main()
{
char s[2000];
int count=0,i;
printf("enter the value");
scanf("%s",&s);
 for (i = 0;s[i];i++)
    {
        if (s[i] == '.')
            count++;    
    }
    printf(" given string are %d", count + 1);
}
