/* Original question from the reference website:
Write a program to print the product of even numbers from 1 to n.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, found = 0;
    long long product = 1;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    for (int i = 2; i <= n; i += 2) { product *= i; found = 1; }
    printf("Product = %lld%s\n", product, found ? "" : " (no even numbers; empty product is 1)");
    return 0;
}
