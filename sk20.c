#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,d;
clrscr();
 printf("Enter the limit") ; 
 scanf("%d", &n) ; 
 printf("\nEnter the number") ; 
 scanf("%d", &d) ; 
 printf("\nThe numbers divisible by %d are") ; 
 for(i = 1 ; i <= n ; i++) 
  if(i % d == 0) 
   printf("%d\t", i) ; 
 getch() ; 
}
