/* Original question from the reference website:
Multiply two matrices.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int rows_a, common, common_b, columns_b, a[50][50], b[50][50];
    if (scanf("%d %d", &rows_a, &common) != 2 || rows_a < 1 || rows_a > 50 || common < 1 || common > 50) return 1;
    for (int r = 0; r < rows_a; r++) for (int c = 0; c < common; c++) if (scanf("%d", &a[r][c]) != 1) return 1;
    if (scanf("%d %d", &common_b, &columns_b) != 2 || common_b != common || columns_b < 1 || columns_b > 50) return 1;
    for (int r = 0; r < common_b; r++) for (int c = 0; c < columns_b; c++) if (scanf("%d", &b[r][c]) != 1) return 1;
    for (int r = 0; r < rows_a; r++) {
        for (int c = 0; c < columns_b; c++) {
            long long sum = 0;
            for (int k = 0; k < common; k++) sum += (long long)a[r][k] * b[k][c];
            printf("%lld%c", sum, c + 1 == columns_b ? '\n' : ' ');
        }
    }
    return 0;
}
