#include<stdio.h>
int main()
{
	int a,i=0,x=0,sum=0;
	printf("enter the number ");
	scanf("%d",&a);
	while(a>0)
	{
		x=a%10;
		a=a/10;
		sum=sum+x;
	}
	
	
	printf("%d ",sum);
}

