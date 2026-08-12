/* Original question from the reference website:
Write a program to convert temperature from Celsius to Fahrenheit.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double celsius;
    if (scanf("%lf", &celsius) != 1) return 1;
    printf("Fahrenheit = %.2f\n", celsius * 9.0 / 5.0 + 32.0);
    return 0;
}
