#include<stdio.h>
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	
	printf("value is%d %d",a,b);
	return 0;
}
	
