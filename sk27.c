#include<stdio.h>
void main()
{
char s[10],i,flag=0;
printf("enter the number of string u want");
scanf("%s",&s);
for(i=0;s[i]="\0";i++)
{
  flag=0;
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
{
  flag=flag+1;
}
}
  if(flag==0)
  {
    printf("the given number not number");
  }
  else
  {
    printf("string is not a number");
  }
}
  
