/* Original question from the reference website:
Write a program to input an integer and check whether it is positive, negative or zero using nested ifâ€“else.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int number;
    if (scanf("%d", &number) != 1) return 1;
    if (number > 0) puts("Positive");
    else if (number < 0) puts("Negative");
    else puts("Zero");
    return 0;
}
