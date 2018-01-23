#include<stdio.h>
int main()
{
int n,a[50],temp,n,s,k;
printf("enterthe counts:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=n;j++)
{
for(k=j+1;k<=n;k++)
{
if(a[j]>a[i])
{
temp=a[j];
a[j]=a[k];
a[k]=temp;
}
}
}
printf("%d",a[j/2]);
return 0;
}
