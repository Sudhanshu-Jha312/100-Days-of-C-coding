/* Original question from the reference website:
Insert an element in an array at a given position.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1001], position, value;
    if (scanf("%d", &n) != 1 || n < 0 || n >= 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d %d", &position, &value) != 2 || position < 0 || position > n) return 1;
    for (int i = n; i > position; i--) values[i] = values[i - 1];
    values[position] = value;
    for (int i = 0; i <= n; i++) printf("%d%c", values[i], i == n ? '\n' : ' ');
    return 0;
}
