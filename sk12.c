#include<stdio.h>
int min()
{
int n, rev=0, temp; 
printf("Enter a number");
scanf("%d",&n); 
temp = n; 
while( temp != 0 ) 
{
rev=rev*10; 
rev=rev+temp%10; 
temp=temp/10; 
} 
if (n==rev) 
printf("yes"); 
else 
printf("No");
}
