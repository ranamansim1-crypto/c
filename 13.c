#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;  // Start from the larger number

    // Find LCM using a simple loop
    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM = %d", lcm);

    return 0;
}
