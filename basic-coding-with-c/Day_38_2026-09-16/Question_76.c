/* Original question from the reference website:
Check if a matrix is symmetric.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, matrix[50][50], symmetric = 1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 50) return 1;
    for (int r = 0; r < n; r++) for (int c = 0; c < n; c++) if (scanf("%d", &matrix[r][c]) != 1) return 1;
    for (int r = 0; r < n; r++) for (int c = r + 1; c < n; c++) if (matrix[r][c] != matrix[c][r]) symmetric = 0;
    puts(symmetric ? "Symmetric" : "Not symmetric");
    return 0;
}
