#include<stdio.h>
int main()
{
    int a,x;
    printf("enter the value:");
    scanf("%d",&a);
    while(a>0)
    {
    	x=a%10;
    	if(x%2!=0)
    	{
    		printf("%d ",x);	
		}
		a=a/10;
	}
    
}
