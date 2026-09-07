/* Original question from the reference website:
Find the sum of array elements.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000];
    long long sum = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) { if (scanf("%d", &values[i]) != 1) return 1; sum += values[i]; }
    printf("Sum = %lld\n", sum);
    return 0;
}
