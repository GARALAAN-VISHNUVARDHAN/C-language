#include<stdio.h>

int main() {
    int n, fac = 1, i = 1;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a positive value.\n");
    } else {
        while (i <= n) {
            fac *= i;
            i++;
        }
        printf("Factorial of %d is %d\n", n, fac);
    }

    return 0;
}
