/* Original question from the reference website:
Find the sum of each row of a matrix and store it in an array.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int rows, columns, value;
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 50 || columns < 1 || columns > 50) return 1;
    for (int r = 0; r < rows; r++) {
        long long row_sum = 0;
        for (int c = 0; c < columns; c++) { if (scanf("%d", &value) != 1) return 1; row_sum += value; }
        printf("%lld%c", row_sum, r + 1 == rows ? '\n' : ' ');
    }
    return 0;
}
