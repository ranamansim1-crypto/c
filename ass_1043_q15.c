#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char a[50];
  int r;
  printf("enter string:");
  fgets(a,sizeof(a),stdin);
  for(r=0;a[r]!='\0';r++)
  {
   a[r]=toupper(a[r]);
  }
  printf("uppercase string:%s\n",a);
 return 0;
 }
