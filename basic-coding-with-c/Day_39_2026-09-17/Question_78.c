/* Original question from the reference website:
Find the sum of main diagonal elements for a square matrix.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value;
    long long diagonal_sum = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 50) return 1;
    for (int r = 0; r < n; r++) for (int c = 0; c < n; c++) { if (scanf("%d", &value) != 1) return 1; if (r == c) diagonal_sum += value; }
    printf("Main diagonal sum = %lld\n", diagonal_sum);
    return 0;
}
