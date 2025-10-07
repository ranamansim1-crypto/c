#include<stdio.h>
#include<string.h>
int main()
{
 char a[20];
 int n,len;
 printf("enter word->");
 fgets(a,sizeof(a),stdin);
 len=strlen(a);
 printf("reverse word->");
 for(n=len-1;n>=0;n--)
 {
  printf("%c",a[n]);
  }
 printf("\n");
 return 0;
 }
