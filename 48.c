#include<stdio.h>
int main()
{
	int v,a[50],sum=0,avg;
	scanf("%d",&v);
	for(int i=0;i<v;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<v;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/v;
	printf("%d",avg);
	return 0;
}
