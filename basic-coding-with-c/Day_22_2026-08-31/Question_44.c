/* Original question from the reference website:
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + â€¦ up to n terms.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    double sum = 0;
    if (scanf("%d", &n) != 1 || n < 1) return 1;
    for (int i = 1; i <= n; i++) sum += (double)(2 * i - 1) / (i == 1 ? 1 : 2 * i);
    printf("Sum = %.6f\n", sum);
    return 0;
}
