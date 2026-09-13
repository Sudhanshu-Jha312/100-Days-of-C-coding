/* Original question from the reference website:
Find the second largest element in an array.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value, largest = 0, second = 0, have_largest = 0, have_second = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &value) != 1) return 1;
        if (!have_largest || value > largest) { if (have_largest) { second = largest; have_second = 1; } largest = value; have_largest = 1; }
        else if (value < largest && (!have_second || value > second)) { second = value; have_second = 1; }
    }
    if (have_second) printf("Second largest = %d\n", second); else puts("No second distinct largest element");
    return 0;
}
