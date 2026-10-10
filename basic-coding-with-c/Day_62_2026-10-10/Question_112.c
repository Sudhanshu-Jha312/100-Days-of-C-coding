/* Original question from the reference website:
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value, current, maximum;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000 || scanf("%d", &value) != 1) return 1;
    current = maximum = value;
    for (int i = 1; i < n; i++) { if (scanf("%d", &value) != 1) return 1; current = value > current + value ? value : current + value; if (current > maximum) maximum = current; }
    printf("%d\n", maximum);
    return 0;
}
