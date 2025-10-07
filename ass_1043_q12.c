#include<stdio.h>
int main()
{
 int a[50],r,i,sum;
 printf("enter array size:");
 scanf("%d",&i);
 for(r=0;r<i;r++)
 {
   printf("array a[%d]->",r);
   scanf("%d",&a[r]);
   if(a[r]%2==0)
   {
    sum=a[r]+sum;
    }
  }
   printf("sum of even element->%d",sum);
  return 0;
}
