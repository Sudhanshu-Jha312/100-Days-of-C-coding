/* Original question from the reference website:
Find the digit that occurs the most times in an integer number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long number;
    int frequency[10] = {0}, best = 0;
    if (scanf("%lld", &number) != 1) return 1;
    if (number < 0) number = -number;
    do { frequency[number % 10]++; number /= 10; } while (number > 0);
    for (int digit = 1; digit < 10; digit++) if (frequency[digit] > frequency[best]) best = digit;
    printf("Most frequent digit = %d\n", best);
    return 0;
}
