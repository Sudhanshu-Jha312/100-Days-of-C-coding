/* Original question from the reference website:
Print all sub-strings of a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[500];
    if (!fgets(text, sizeof text, stdin)) return 1;
    size_t length = strcspn(text, "\n");
    for (size_t start = 0; start < length; start++)
        for (size_t end = start; end < length; end++) {
            for (size_t i = start; i <= end; i++) putchar(text[i]);
            putchar('\n');
        }
    return 0;
}
