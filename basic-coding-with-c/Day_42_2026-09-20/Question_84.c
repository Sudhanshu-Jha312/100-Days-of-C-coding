/* Original question from the reference website:
Convert a lowercase string to uppercase without using built-in functions.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0'; i++) if (text[i] >= 'a' && text[i] <= 'z') text[i] = (char)(text[i] - 'a' + 'A');
    printf("%s", text);
    return 0;
}
