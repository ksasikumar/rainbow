#include<stdio.h>
int main()
{
    int a,b,tn,n[100];
    printf("enter the total value");
    scanf("%d",&tn);
    printf("the total number:%d\n",tn);
    for(i=0;i<tn;i++)
    {
        scanf("%d",&n[i]);
        printf("%d",n[i]);
    }
    for(j=0;j<tn;j++)
    {
        printf("\n%d  %d\n",n[j],j);
    }  
  return 0;  
}
