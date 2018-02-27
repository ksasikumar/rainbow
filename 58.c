#include<stdio.h>
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value");
	scanf("%d%d",&a,&b);

	a=a^b;
	b=b^a;
	a=a^b;
	
	printf("value is%d %d",a,b);
	return 0;
}
	
