/* Original question from the reference website:
Write a program to find the LCM of two numbers.
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
    long long original_x = x, original_y = y;
    while (y != 0) { long long remainder = x % y; x = y; y = remainder; }
    if (original_x == 0 || original_y == 0) puts("LCM = 0");
    else printf("LCM = %lld\n", (original_x / x) * original_y);
    return 0;
}
