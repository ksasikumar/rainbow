#include<stdio.h>
int main()
{
	int a[10],i,n;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	n=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>n)
		{
			n=a[i];
		}
	}
	printf("%d",n);
}
