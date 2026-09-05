/* Original question from the reference website:
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    for (int row = 1; row <= 5; row++) {
        for (int col = 0; col < 2 * row - 1; col++) putchar('*');
        putchar('\n');
    }
    for (int row = 4; row >= 1; row--) {
        for (int col = 0; col < 2 * row - 1; col++) putchar('*');
        putchar('\n');
    }
    return 0;
}
