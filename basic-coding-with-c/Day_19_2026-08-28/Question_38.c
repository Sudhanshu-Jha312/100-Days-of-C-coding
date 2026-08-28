/* Original question from the reference website:
Write a program to find the sum of digits of a number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long n, sum = 0;
    if (scanf("%lld", &n) != 1) return 1;
    if (n < 0) n = -n;
    do { sum += n % 10; n /= 10; } while (n > 0);
    printf("Sum of digits = %lld\n", sum);
    return 0;
}
