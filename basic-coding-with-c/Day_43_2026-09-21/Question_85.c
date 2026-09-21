/* Original question from the reference website:
Reverse a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof text, stdin)) return 1;
    size_t length = strcspn(text, "\n");
    for (size_t i = 0; i < length / 2; i++) { char temporary = text[i]; text[i] = text[length - 1 - i]; text[length - 1 - i] = temporary; }
    text[length] = '\0';
    puts(text);
    return 0;
}
