/* Original question from the reference website:
Check if the elements on the diagonal of a matrix are distinct.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, matrix[50][50], distinct = 1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 50) return 1;
    for (int r = 0; r < n; r++) for (int c = 0; c < n; c++) if (scanf("%d", &matrix[r][c]) != 1) return 1;
    for (int i = 0; i < n; i++) for (int j = i + 1; j < n; j++) if (matrix[i][i] == matrix[j][j]) distinct = 0;
    puts(distinct ? "Diagonal elements are distinct" : "Diagonal elements are not distinct");
    return 0;
}
