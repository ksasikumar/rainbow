#pragma<stdio.h>
#pragma<string.h>
int main()
{
  char ch[30];
  int l,i;
  printf("Enter the string");
  scanf("%s",ch);
  l=strlen(ch);
  for(i=0;i<=l;i++)
  {
    if(ch[i]=='1'||ch[i]=='2'||ch[i]=='3'||ch[i]=='4'||ch[i]=='5'||ch[i]=='6'||ch[i]=='7'||ch[i]=='8'||ch[i]=='9'||ch[i]=='0')
    {
      printf("%c",ch[i]);
    }
  }
return 0;
}
