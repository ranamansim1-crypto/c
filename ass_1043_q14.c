#include<stdio.h>
int main()
{
  int i,j,r,c,a[50][50],b[50][50],sub[50][50];
  printf("\nenter number row:");
  scanf("%d",&r);
  printf("\nenter number cols:");
  scanf("%d",&c);
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
    printf("\nnenter a value of a[%d][%d]->",i,j);
    scanf("%d",&a[i][j]);
   }
  }
  
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
    printf("\nenter a value of b[%d][%d]->",i,j);
    scanf("%d",&b[i][j]);
   }
  }
  
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
    sub[i][j]=a[i][j]-b[i][j];
   }
  }
  
  printf("A matrix\n");
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
     printf("  %d ",a[i][j]);
   }
   printf("\n");
  }
  
  printf("B matrix\n");
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
     printf(" %d ",b[i][j]);
   }
   printf("\n");
  }
  
  printf("subtract matrix\n");
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
    printf(" %d ",sub[i][j]);
   }
  printf("\n");
  } 
 return 0;
}
