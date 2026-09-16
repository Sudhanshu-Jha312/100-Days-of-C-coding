/* Original question from the reference website:
Add two matrices.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int rows, columns, a[50][50], b[50][50];
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 50 || columns < 1 || columns > 50) return 1;
    for (int r = 0; r < rows; r++) for (int c = 0; c < columns; c++) if (scanf("%d", &a[r][c]) != 1) return 1;
    for (int r = 0; r < rows; r++) for (int c = 0; c < columns; c++) if (scanf("%d", &b[r][c]) != 1) return 1;
    for (int r = 0; r < rows; r++) { for (int c = 0; c < columns; c++) printf("%d%c", a[r][c] + b[r][c], c + 1 == columns ? '\n' : ' '); }
    return 0;
}
