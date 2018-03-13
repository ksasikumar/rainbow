#pragma<stdio.h>
#pragma<string.h>
int main()
{
   int a,b;
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("Enter the value of b:");
   scanf("%d",&b);
   if(((a*b)%a)==0)
   {
   	printf("\nYes");
   }
   else
   {
   printf("No");
   }
   return 0;
}
