/* Original question from the reference website:
Write a program to calculate the area and circumference of a circle given its radius.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double radius;
    if (scanf("%lf", &radius) != 1 || radius < 0) return 1;
    printf("Area = %.2f\nCircumference = %.2f\n", 3.141592653589793 * radius * radius, 2 * 3.141592653589793 * radius);
    return 0;
}
