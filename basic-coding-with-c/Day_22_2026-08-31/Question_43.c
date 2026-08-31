/* Original question from the reference website:
Write a program to check if a number is a strong number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value, sum = 0;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    value = n;
    do {
        int digit = value % 10, factorial = 1;
        for (int i = 2; i <= digit; i++) factorial *= i;
        sum += factorial;
        value /= 10;
    } while (value > 0);
    puts(sum == n ? "Strong number" : "Not a strong number");
    return 0;
}
