/* Original question from the reference website:
Rotate an array to the right by k positions.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], k;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &k) != 1) return 1;
    k = ((k % n) + n) % n;
    for (int start = 0; start < n; start++) printf("%d%c", values[(start - k + n) % n], start + 1 == n ? '\n' : ' ');
    return 0;
}
