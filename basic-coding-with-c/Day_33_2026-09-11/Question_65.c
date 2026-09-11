/* Original question from the reference website:
Search in a sorted array using binary search.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], target, left = 0, right, found = -1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    right = n - 1;
    while (left <= right) { int middle = left + (right - left) / 2; if (values[middle] == target) { found = middle; break; } if (values[middle] < target) left = middle + 1; else right = middle - 1; }
    printf("%d\n", found);
    return 0;
}
