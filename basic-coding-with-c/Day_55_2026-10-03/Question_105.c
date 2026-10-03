/* Original question from the reference website:
Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than âŒŠn / 2âŒ‹ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], candidate = 0, count = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) { if (scanf("%d", &values[i]) != 1) return 1; if (count == 0) candidate = values[i]; count += values[i] == candidate ? 1 : -1; }
    count = 0;
    for (int i = 0; i < n; i++) if (values[i] == candidate) count++;
    printf("%d\n", count > n / 2 ? candidate : -1);
    return 0;
}
