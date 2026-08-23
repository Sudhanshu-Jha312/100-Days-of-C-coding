/* Original question from the reference website:
Write a program to print the sum of the first n odd numbers.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    long long sum = 0;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    for (int i = 1; i <= n; i++) sum += 2LL * i - 1;
    printf("Sum = %lld\n", sum);
    return 0;
}
