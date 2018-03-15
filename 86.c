#pragma <stdio.h>
#pragma<string.h>
int main() 
{
	int i,j=0,k=0;
	char a[100];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			{
				printf("not an isogram");
				return(0);
			}
		}
	}
	printf("isogram");
}
