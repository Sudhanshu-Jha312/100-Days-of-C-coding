/* Original question from the reference website:
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    for (int row = 1; row <= 5; row++) {
        for (int space = 0; space < 5 - row; space++) putchar(' ');
        for (int value = 6 - row; value <= 5; value++) printf("%d", value);
        putchar('\n');
    }
    return 0;
}
