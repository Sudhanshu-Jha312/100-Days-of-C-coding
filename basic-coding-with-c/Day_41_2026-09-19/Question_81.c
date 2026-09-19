/* Original question from the reference website:
Count characters in a string without using built-in length functions.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof text, stdin)) return 1;
    text[strcspn(text, "\n")] = '\0';
    size_t length = 0;
    while (text[length] != '\0') length++;
    printf("Length = %zu\n", length);
    return 0;
}
