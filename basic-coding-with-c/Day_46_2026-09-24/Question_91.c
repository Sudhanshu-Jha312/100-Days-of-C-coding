/* Original question from the reference website:
Remove all vowels from a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    size_t write = 0;
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t read = 0; text[read] != '\0'; read++) if (!strchr("aeiouAEIOU", text[read])) text[write++] = text[read];
    text[write] = '\0';
    printf("%s", text);
    return 0;
}
