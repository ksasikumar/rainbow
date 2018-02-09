#include <stdio.h>
int main()
{
int i, n,a=0,b=1,c;
printf("Enter series range");
scanf("%d",&n);
printf("Fibonacci Series");
for(i=0;i<n;i++)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}
getch();
return 0;
}



