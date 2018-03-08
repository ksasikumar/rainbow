#include <stdio.h>
int main () 
{
int n, a = 0, b, c;
 printf ("Enter an integer: ");
 scanf ("%d", &n);
  c = n;
  while (n != 0)
 {   
 b = n % 10;
 a = a * 10 + b;
 n /= 10;
 }
 if (c == a)
 printf ("%d is a palindrome.", c);
 else
 printf ("%d is not a palindrome.", c);
 return 0;
        
}
