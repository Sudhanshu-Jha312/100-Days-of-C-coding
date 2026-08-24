/* Original question from the reference website:
Write a program to calculate the factorial of a number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    unsigned long long factorial = 1;
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) return 1;
    for (int i = 2; i <= n; i++) factorial *= (unsigned long long)i;
    printf("%llu\n", factorial);
    return 0;
}
