#include<stdio.h>
#include<string.h>
int main()
{
	int a,i;
	char str[10];
	gets(str);
	printf("enter the value:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("%c",str[i]);
	}
	
}
