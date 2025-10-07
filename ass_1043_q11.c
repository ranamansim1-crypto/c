#include<stdio.h>
int main()
{
 int i,j;
 printf("enter number:");
 scanf("%d",&i);
 printf("even number: \n");
 for(j=2;j<=i;j=j+2)
 {
  printf("%d\n",j);
 }
return 0;
}
