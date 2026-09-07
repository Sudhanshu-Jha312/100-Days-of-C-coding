/* Original question from the reference website:
Find the maximum and minimum element in an array.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value, minimum, maximum;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000 || scanf("%d", &value) != 1) return 1;
    minimum = maximum = value;
    for (int i = 1; i < n; i++) {
        if (scanf("%d", &value) != 1) return 1;
        if (value < minimum) minimum = value;
        if (value > maximum) maximum = value;
    }
    printf("Minimum = %d\nMaximum = %d\n", minimum, maximum);
    return 0;
}
