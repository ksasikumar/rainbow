#include <stdio.h>
int main()
{    
int array[100], maximum, size, b, location = 1;
printf("Enter the elements in array\n");
scanf("%d", &size);
printf("Enter %d integers\n", size);
for (b = 0; b < size; b++)
{
scanf("%d", &array[b]);
maximum = array[0];
}
for (b= 1; b < size; b++)
{
if (array[b] > maximum)
{
maximum  = array[b];
location = b+1;
}
return 0;
}
}
