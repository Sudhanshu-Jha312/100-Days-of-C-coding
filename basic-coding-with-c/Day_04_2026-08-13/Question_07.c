/* Original question from the reference website:
Write a program to swap two numbers without using a third variable.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 1;
    a ^= b;
    b ^= a;
    a ^= b;
    printf("%d %d\n", a, b);
    return 0;
}
