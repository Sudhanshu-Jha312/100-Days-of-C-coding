/* Original question from the reference website:
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const int block_sizes[] = {4, 5, 3, 1};
    for (int block = 0; block < 4; block++) {
        for (int line = 0; line < block_sizes[block]; line++) puts("*");
        if (block < 3) putchar('\n');
    }
    return 0;
}
