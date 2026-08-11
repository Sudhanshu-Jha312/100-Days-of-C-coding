/* Original question from the reference website:
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double length, breadth;
    if (scanf("%lf %lf", &length, &breadth) != 2 || length < 0 || breadth < 0) return 1;
    printf("Area = %.2f\nPerimeter = %.2f\n", length * breadth, 2 * (length + breadth));
    return 0;
}
