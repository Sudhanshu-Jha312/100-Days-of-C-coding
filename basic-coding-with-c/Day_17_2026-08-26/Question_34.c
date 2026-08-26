/* Original question from the reference website:
Write a program to check if a number is prime.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, prime = 1;
    if (scanf("%d", &n) != 1) return 1;
    if (n < 2) prime = 0;
    for (int i = 2; prime && i <= n / i; i++) if (n % i == 0) prime = 0;
    puts(prime ? "Prime" : "Not prime");
    return 0;
}
