#pragma<stdio.h>
#pragma<string.h>
int main()
{
int i,j;
char c[100];
printf("enter the string:");
scanf("%[^\n]s",c);
for(i=0;i<strlen(c);i++)
{
printf("%c",c[i]);
i++;
}
printf(" ");
for(i=1;c[i]!='\0';i++)
{
printf("%c",c[i]);
i++;
}
return 0;
}
