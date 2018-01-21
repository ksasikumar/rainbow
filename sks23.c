#include <stdio.h> 
int main() 
{
int array[100], minimum, size, a, location = 1;
printf("Enter the elements in array\n");
scanf("%d",&size);
printf("%d integers\n", size);
for ( a= 0 ; a < size ;a++ )
{
scanf("%d", &array[a]);
minimum = array[0];
for ( a= 1 ; a< size ; a++ ) 
{
if ( array[a] < minimum ) 
}
minimum = array[a];
location = a+1;
} 
return 0;
}
