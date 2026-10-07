/* Original question from the reference website:
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
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
    long long sum = 0;
    for (int i = 0; i < k; i++) sum += values[i];
    long long maximum = sum;
    for (int i = k; i < n; i++) { sum += values[i] - values[i - k]; if (sum > maximum) maximum = sum; }
    printf("%lld\n", maximum);
    return 0;
}
