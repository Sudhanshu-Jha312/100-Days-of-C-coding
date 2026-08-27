/* Original question from the reference website:
Write a program to find the HCF (GCD) of two numbers.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long a, b, x, y;
    if (scanf("%lld %lld", &a, &b) != 2) return 1;
    x = a < 0 ? -a : a; y = b < 0 ? -b : b;
    while (y != 0) { long long remainder = x % y; x = y; y = remainder; }
    printf("GCD = %lld\n", x);
    return 0;
}
