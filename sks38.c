
#include<stdio.h>
#define SWAP(a,b)(a^=b^=a^=b)
void main()
{
	int num1,num2;
	printf("enter the numbers:\t");
	scanf("%d%d",&num1,&num2);
	printf("before swaping num1=%d and num2=%d\n",num1,num2);
	SWAP(num1,num2);
	printf("afterthe vale of num1=%d and num2=%d",num1,num2);
	return 0;
}
