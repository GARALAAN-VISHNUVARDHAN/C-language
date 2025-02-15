#include <stdio.h>
int main() {
    int a, b, c, c1, c2, c3;
    do {
        printf("Enter sides of the triangle: ");
        scanf("%d %d %d", &a, &b, &c);

        c1 = (a >= 1 && a <= 10);
        c2 = (b >= 1 && b <= 10);
        c3 = (c >= 1 && c <= 10);

        if (!c1)
            printf("Value of a is out of range\n");
        if (!c2)
            printf("Value of b is out of range\n");
        if (!c3)
            printf("Value of c is out of range\n");

    } while (!c1 || !c2 || !c3);

    // Check if it forms a valid triangle
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        if (a == b && b == c)
            printf("It is an Equilateral Triangle\n");
        else if (a == b || b == c || a == c)
            printf("It is an Isosceles Triangle\n");
        else
            printf("It is a Scalene Triangle\n");
    } else {
        printf("Cannot form a valid triangle\n");
    }

    return 0;
}
