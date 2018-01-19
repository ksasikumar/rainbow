#include <stdio.h>

int main()

{
  
int num;

  printf("Enter a number");

    scanf("%d", &num);
 
   if (num > 0)
      
      printf("%d is a positive number", num);
      
  else if(num < 0)
        
    printf("%d is anegative number",num);
 
  else
  
 printf("0 is positive or negative");

}
