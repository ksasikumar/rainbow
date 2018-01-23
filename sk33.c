#include<iostream>
#include<string.h>
using namespace std;

int main()
{ char c[20]="its me rd";
int i,s=0;
for(i=0;c[i]!='\0';i++)
{
	if(c[i]==' ')
	s++;

}
 cout<<s;
 return 0;
}
