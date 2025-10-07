#include<stdio.h>
int main()
{
 int a[50],r,n,max;
 printf("enter array size:");
 scanf("%d",&r);
 max=a[0];
 for(n=0;n<r;n++)
  {
   printf("array a[%d]->",n);
   scanf("%d",&a[n]);
  }
 for(n=0;n<r;n++)
  {
   if(a[n]>max)
   {
    max=a[n];
    }
  }
  printf("largest element=%d\n",max); 
  return 0;
}
