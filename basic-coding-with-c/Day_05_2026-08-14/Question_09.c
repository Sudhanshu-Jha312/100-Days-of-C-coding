/* Original question from the reference website:
Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double principal, rate, time;
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3 || principal < 0 || rate < 0 || time < 0) return 1;
    double simple = principal * rate * time / 100.0;
    double compound = principal * (pow(1.0 + rate / 100.0, time) - 1.0);
    printf("Simple Interest = %.2f\nCompound Interest = %.2f\n", simple, compound);
    return 0;
}
