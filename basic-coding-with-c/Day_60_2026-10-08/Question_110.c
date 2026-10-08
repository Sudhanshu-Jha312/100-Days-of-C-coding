/* Original question from the reference website:
Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], k;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &k) != 1 || k < 1 || k > n) return 1;
    for (int start = 0; start <= n - k; start++) { int maximum = values[start]; for (int j = start + 1; j < start + k; j++) if (values[j] > maximum) maximum = values[j]; printf("%d%c", maximum, start == n - k ? '\n' : ' '); }
    return 0;
}
