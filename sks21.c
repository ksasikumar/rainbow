#include<stdio.h>
int main()
{
int a,d,n,v,sum=0,i;
printf("enter no of terms & first term & diff");
scanf("%d %d %d",&n,&a,&d);
v=a;
for(i=0;i<n;i++)
{
printf("%d",v);
sum+=v;
v=v+d;
}
printf("%d",sum);
return 0;
}
