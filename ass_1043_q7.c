#include<stdio.h>
int main() 
{
    int a, b;
    printf("Enter numbers1: ");
    scanf("%d",&a);
    printf("Enter numbers2: ");
    scanf("%d",&b);
    while (a != b) 
    {
        if (a > b)
        {
           a = a - b;
        }
        else
        {
          b = b - a;
        }
    }
    printf("GCD = %d\n", a);
    return 0;
}
