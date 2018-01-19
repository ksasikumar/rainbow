#include <stdio.h>
int main()
{
    int number;
    printf("Enter the integer");
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("%d is even");
    else
        printf("%d is odd");

    return 0;
}
