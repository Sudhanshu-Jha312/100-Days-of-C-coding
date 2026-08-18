/* Original question from the reference website:
Write a program to find the roots of a quadratic equation and categorize them.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double a, b, c, discriminant;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0.0) return 1;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        printf("Two distinct real roots: %.2f %.2f\n", (-b + sqrt(discriminant)) / (2 * a), (-b - sqrt(discriminant)) / (2 * a));
    } else if (discriminant == 0) {
        printf("One repeated real root: %.2f\n", -b / (2 * a));
    } else {
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", -b / (2 * a), sqrt(-discriminant) / (2 * a), -b / (2 * a), sqrt(-discriminant) / (2 * a));
    }
    return 0;
}
