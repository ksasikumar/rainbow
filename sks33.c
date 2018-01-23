#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,c=0,d,count=0;
	printf("enter the string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
    {
    c++;
        
    }
    
	
	for(i=0;i<=c;i++)
	{
	if(a[i]==' ')
	{
		count++;
	}
	}
   printf(" the no of spaces  is %d",count);
	return 0;
}
