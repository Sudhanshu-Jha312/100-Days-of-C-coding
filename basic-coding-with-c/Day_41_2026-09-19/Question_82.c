/* Original question from the reference website:
Print each character of a string on a new line.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; i++) printf("%c\n", text[i]);
    return 0;
}
