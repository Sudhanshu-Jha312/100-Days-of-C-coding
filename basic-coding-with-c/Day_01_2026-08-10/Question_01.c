/* Original question from the reference website:
Write a program to input two numbers and display their sum.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double a, b;
    if (scanf("%lf %lf", &a, &b) != 2) return 1;
    printf("Sum = %.2f\n", a + b);
    return 0;
}
