#include<stdio.h>
int main()
{
int s=0,n=5,k,a[20]={1,2,3,4,5};
printf("enter k value");
scanf("%d",&k);
for(i=0;i<k;i++)
{
s=s+a[i];
}
printf("%d",s);
}
