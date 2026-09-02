/* Original question from the reference website:
Write a program to print the following pattern:
1
12
123
1234
12345
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= row; col++) printf("%d", col);
        putchar('\n');
    }
    return 0;
}
