
 #include <stdio.h>
 int main() 
 {
    int a, b, lcm,max;
    printf("Enter numbers1: ");
    scanf("%d",&a);
    printf("Enter numbers2: ");
    scanf("%d",&b);
    max = (a > b) ? a : b;  
     while (1) 
     {
        if (max % a == 0 && max % b == 0) 
        {
            lcm = max;
            break;
        }
        max++;
    }
    printf("LCM of %d and %d = %d\n",a,b, lcm);
    return 0;
  }
