#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    
    a=n+1;
    while(a!=0)
    {
        if(a%10==0)
        {
            printf("%d",a);
            break;
        }
        a++;
    }
    
  
}

