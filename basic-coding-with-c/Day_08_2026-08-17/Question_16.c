/* Original question from the reference website:
Write a program to input three numbers and find the largest among them using ifâ€“else.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int a, b, c, largest;
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;
    largest = a > b ? a : b;
    if (c > largest) largest = c;
    printf("Largest = %d\n", largest);
    return 0;
}
