#include<stdio.h>
int main()
{
    int a,p=1,i,flag=0;
    scanf("%d",&a);
      for(i=0;i<a;i++)
    {
    p=2*p;
    if(a==p)

    {
        flag=1;

    }
    }
   if(flag==1)
    printf("yes");
    else
    printf("no");
    return 0;

}
