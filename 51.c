
#include <stdio.h>

int main(void) 
{
	int a,b,rev=0;
	printf("enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		rev=(rev*10)+b;
		a=a/10;
	}
	a=rev;
	while(a!=0)
	{
		b=a%10;
		printf("%d ",b);
		a=a/10;
	}
	return 0;

}
