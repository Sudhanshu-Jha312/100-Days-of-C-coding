/* Original question from the reference website:
Replace spaces with hyphens in a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0'; i++) if (text[i] == ' ') text[i] = '-';
    printf("%s", text);
    return 0;
}
