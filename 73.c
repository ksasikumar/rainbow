#include<stdio.h>
int main(void)
{
	int r,l,n;
	printf("enter the value:");
	scanf("%s%s%s",&n,&l,&r);

	if(n>l && n<r)
	{
	printf ("\nYes");
	}
	else
	printf("\nNo");
	return 0;
}
