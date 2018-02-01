#include <stdio.h>
#include <string.h>
 void main()
{
    char s[200];
    int count = 0, i;
 
    printf("enter the string");
    scanf("%s", s);
    for (i = 0;s[i];i++)
    {
        if (s[i] == '.')
            count++;    
    }
    printf(" given string are %d", count + 1);
}
