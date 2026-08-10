/* Original question from the reference website:
Write a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double a, b;
    if (scanf("%lf %lf", &a, &b) != 2) return 1;
    if (b == 0.0) {
        printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\nQuotient = undefined\n", a + b, a - b, a * b);
    } else {
        printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\nQuotient = %.2f\n", a + b, a - b, a * b, a / b);
    }
    return 0;
}
