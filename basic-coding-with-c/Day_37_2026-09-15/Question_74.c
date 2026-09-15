/* Original question from the reference website:
Find the transpose of a matrix.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int rows, columns, matrix[50][50];
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 50 || columns < 1 || columns > 50) return 1;
    for (int r = 0; r < rows; r++) for (int c = 0; c < columns; c++) if (scanf("%d", &matrix[r][c]) != 1) return 1;
    for (int c = 0; c < columns; c++) { for (int r = 0; r < rows; r++) printf("%d%c", matrix[r][c], r + 1 == rows ? '\n' : ' '); }
    return 0;
}
