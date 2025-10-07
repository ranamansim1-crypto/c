#include<stdio.h>
int main()
{
 int n,r;
 printf("Enter Any Number:");
 scanf("%d",&n);
 for(r=1;r<=10;r++)
 {
  printf("%d * %d = %d\n",n,r,n*r);
 }
return 0;
}
