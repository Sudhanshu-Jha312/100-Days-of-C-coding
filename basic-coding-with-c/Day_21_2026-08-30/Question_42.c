/* Original question from the reference website:
Write a program to check if a number is a perfect number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, sum = 0;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    for (int i = 1; i <= n / 2; i++) if (n % i == 0) sum += i;
    puts(sum == n ? "Perfect number" : "Not a perfect number");
    return 0;
}
