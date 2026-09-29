/* Original question from the reference website:
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], target, first = -1, last = -1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    int left = 0, right = n - 1;
    while (left <= right) { int mid = left + (right - left) / 2; if (values[mid] < target) left = mid + 1; else right = mid - 1; }
    if (left < n && values[left] == target) {
        first = left; right = n - 1;
        while (left <= right) { int mid = left + (right - left) / 2; if (values[mid] <= target) left = mid + 1; else right = mid - 1; }
        last = right;
    }
    printf("%d %d\n", first, last);
    return 0;
}
