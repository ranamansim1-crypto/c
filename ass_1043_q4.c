#include<stdio.h>
int main()
{
  int a[100],r,n,s,f=0;
  printf("Enter array size:");
  scanf("%d",&n);
  for(r=0;r<n;r++)
   {
    printf("array a[%d]-> ",r);
    scanf("%d",&a[r]);
   
   }
  printf("Search element:");
  scanf("%d",&s);
  
   for(r=0;r<n;r++)
   {
    if(s==a[r])
    {
     printf("element %d in index %d\n",s,r);
     f=1;
     break;
    }
  }
  if(!f)
   {
    printf("element %d not found\n",s);
   }
 return 0;
 }
