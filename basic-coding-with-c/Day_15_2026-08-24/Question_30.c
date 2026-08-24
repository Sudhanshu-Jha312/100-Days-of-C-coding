/* Original question from the reference website:
Write a program to reverse a given number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long number, value, reversed = 0;
    if (scanf("%lld", &number) != 1) return 1;
    value = number < 0 ? -number : number;
    do { reversed = reversed * 10 + value % 10; value /= 10; } while (value > 0);
    printf("%s%lld\n", number < 0 ? "-" : "", reversed);
    return 0;
}
