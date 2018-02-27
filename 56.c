#include<stdio.h>
#include<stdio.h>
int main()
{
	int i;
	char s[100],r_count=0,o_count=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		{
			r_count++;
		}
		if(s[i]>='0' && s[i]<='9')
		{
			o_count++;
		}
	}
	if((r_count && o_count)>0)
	printf("yes");
	else
	printf("no");
}
