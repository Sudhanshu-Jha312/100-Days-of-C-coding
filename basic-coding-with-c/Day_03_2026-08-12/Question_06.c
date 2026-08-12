/* Original question from the reference website:
Write a program to swap two numbers using a third variable.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int a, b, temporary;
    if (scanf("%d %d", &a, &b) != 2) return 1;
    temporary = a;
    a = b;
    b = temporary;
    printf("%d %d\n", a, b);
    return 0;
}
