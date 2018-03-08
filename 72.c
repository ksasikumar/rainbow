#include<stdio.h>

int main()
{
	
	char n;
	printf("Enter an alphabet : ");
	scanf("%c",&n);
	if(n=='a' || n=='A' || n=='e' || n=='E' ||
	n=='i' || n=='I' || n=='o' || n=='O' ||
	n=='u' || n=='U')
	{
		printf("This is a vowel");
	}
	else
	{
		printf("This is not a vowel");
	}
	return 0;
}

