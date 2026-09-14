/* Original question from the reference website:
Find the sum of all elements in a matrix.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int rows, columns, value;
    long long sum = 0;
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 50 || columns < 1 || columns > 50) return 1;
    for (int i = 0; i < rows * columns; i++) { if (scanf("%d", &value) != 1) return 1; sum += value; }
    printf("Sum = %lld\n", sum);
    return 0;
}
