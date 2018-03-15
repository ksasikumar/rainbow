#pragma<stdio.h>

int main(void) 
{
char ch;
printf("enter the value is:");
scanf("%c",&ch);
if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122))) 
{
	printf(" ASCII value is %d",ch);
}
	return 0;
}
