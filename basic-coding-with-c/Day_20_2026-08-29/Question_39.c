/* Original question from the reference website:
Write a program to find the product of odd digits of a number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long n, product = 1;
    int count = 0;
    if (scanf("%lld", &n) != 1) return 1;
    if (n < 0) n = -n;
    while (n > 0) { int digit = (int)(n % 10); if (digit % 2 != 0) { product *= digit; count++; } n /= 10; }
    if (count == 0) puts("No odd digits");
    else printf("Product of odd digits = %lld\n", product);
    return 0;
}
