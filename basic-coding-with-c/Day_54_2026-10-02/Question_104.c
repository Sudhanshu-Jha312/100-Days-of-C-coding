/* Original question from the reference website:
Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long n, left_sum = 0, right_sum = 0;
    if (scanf("%lld", &n) != 1 || n < 1) return 1;
    right_sum = n * (n + 1) / 2;
    for (long long x = 1; x <= n; x++) {
        left_sum += x;
        if (left_sum == right_sum - (x - 1) * x / 2) { printf("%lld\n", x); return 0; }
    }
    puts("-1");
    return 0;
}
