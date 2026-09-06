/* Original question from the reference website:
Write a program to print all the prime numbers from 1 to n.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1) return 1;
    for (int value = 2; value <= n; value++) {
        int prime = 1;
        for (int divisor = 2; divisor <= value / divisor; divisor++)
            if (value % divisor == 0) { prime = 0; break; }
        if (prime) printf("%d ", value);
    }
    putchar('\n');
    return 0;
}
