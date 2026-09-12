/* Original question from the reference website:
Delete an element from an array.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], position;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &position) != 1 || position < 0 || position >= n) return 1;
    for (int i = position; i < n - 1; i++) values[i] = values[i + 1];
    for (int i = 0; i < n - 1; i++) printf("%d%c", values[i], i + 1 == n - 1 ? '\n' : ' ');
    return 0;
}
