#pragma<string.h>
int main() 
{
    char s[15];
    int a,b;
    scanf("%s",&s);
    a=strlen(s);
    if(a%2!=0)
    {
     b=a/2;
     s[b]='*';
      printf("%s",s);
    }
    else
     {
        b=a/2;
        s[b]='*';
        s[b-1]='*';
         printf("%s",s);
     }
