#include<stdio.h>
int main()
{
  int r,n,a[50],sum=0;
  printf("enter array size:");
  scanf("%d",&n);
  for(r=0;r<n;r++)
  {
   printf("array a[%d]->",r);
   scanf("%d",&a[r]);
   sum=sum+a[r];
   }
  printf("sum of all element->%d\n",sum);
  return 0;
}
