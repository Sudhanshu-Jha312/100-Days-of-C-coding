/* Original question from the reference website:
Insert an element in a sorted array at the appropriate position.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1001], value, position = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n >= 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &value) != 1) return 1;
    while (position < n && values[position] < value) position++;
    for (int i = n; i > position; i--) values[i] = values[i - 1];
    values[position] = value;
    for (int i = 0; i <= n; i++) printf("%d%c", values[i], i == n ? '\n' : ' ');
    return 0;
}
