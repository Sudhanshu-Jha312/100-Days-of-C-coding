/* Original question from the reference website:
Merge two arrays.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int m, n, a[1000], b[1000];
    if (scanf("%d", &m) != 1 || m < 1 || m > 1000) return 1;
    for (int i = 0; i < m; i++) if (scanf("%d", &a[i]) != 1) return 1;
    if (scanf("%d", &n) != 1 || n < 1 || m + n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &b[i]) != 1) return 1;
    for (int i = 0; i < m; i++) printf("%d ", a[i]);
    for (int i = 0; i < n; i++) printf("%d%c", b[i], i + 1 == n ? '\n' : ' ');
    return 0;
}
