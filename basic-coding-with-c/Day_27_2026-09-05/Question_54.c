/* Original question from the reference website:
Write a program to print the following pattern:

   *
  ***
 *****
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
    for (int row = 1; row <= 4; row++) {
        int width = row;
        int spaces = 4 - row;
        for (int i = 0; i < spaces; i++) putchar(' ');
        for (int i = 0; i < 2 * width - 1; i++) putchar('*');
        putchar('\n');
    }
    for (int row = 2; row >= 1; row--) {
        for (int i = 0; i < 4 - row; i++) putchar(' ');
        for (int i = 0; i < 2 * row - 1; i++) putchar('*');
        putchar('\n');
    }
    return 0;
}
