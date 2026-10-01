/* Original question from the reference website:
Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000];
    long long total = 0, left_sum = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) { if (scanf("%d", &values[i]) != 1) return 1; total += values[i]; }
    for (int i = 0; i < n; i++) { if (left_sum == total - left_sum - values[i]) { printf("%d\n", i); return 0; } left_sum += values[i]; }
    puts("-1");
    return 0;
}
