#include <stdio.h>
int main()
{
    int i, n, a= 1, b = 1, tem;
    scanf("%d", &n);
    for (i = 0; i <= n; ++i)
    {
        printf("%d ", a);
        tem= a + b;
        a= b;
       b= tem;
    }
    return 0;
}
