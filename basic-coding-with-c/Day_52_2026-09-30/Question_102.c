/* Original question from the reference website:
Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], x, left = 0, right;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &x) != 1) return 1;
    right = n;
    while (left < right) { int mid = left + (right - left) / 2; if (values[mid] < x) left = mid + 1; else right = mid; }
    printf("%d\n", left == n ? -1 : left);
    return 0;
}
