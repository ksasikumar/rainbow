#include<stdio.h>
void main()
{
int n,a=0,x=1,p=2,i;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
a++;
}
for(i=0;i<a+1;i++)
{
x=x*p;
}
printf("%d",x);
}
