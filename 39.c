#include<stdio.h>
int main()
{
int a[10]={3,4,5,6,7,8,9,1,2,11},i,j,temp;

for (i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
    if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;


}
}
for(i=0;i<10;i++)
{
    printf("%d",a[i]);
}
printf("maximum number is%d",a[9]);
return 0;
}
}
