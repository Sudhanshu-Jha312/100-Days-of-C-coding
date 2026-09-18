/* Original question from the reference website:
Perform diagonal traversal of a matrix.
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
    for (int diagonal = 0; diagonal < rows + columns - 1; diagonal++) {
        int low = diagonal - (columns - 1); if (low < 0) low = 0;
        int high = diagonal < rows ? diagonal : rows - 1;
        if (diagonal % 2 == 0) { for (int r = high; r >= low; r--) printf("%d ", matrix[r][diagonal - r]); }
        else { for (int r = low; r <= high; r++) printf("%d ", matrix[r][diagonal - r]); }
    }
    putchar('\n');
    return 0;
}
