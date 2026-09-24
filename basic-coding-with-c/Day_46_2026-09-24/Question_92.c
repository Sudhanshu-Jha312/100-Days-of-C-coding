/* Original question from the reference website:
Find the first repeating lowercase alphabet in a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    int frequency[26] = {0};
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0'; i++) if (text[i] >= 'a' && text[i] <= 'z') frequency[text[i] - 'a']++;
    for (size_t i = 0; text[i] != '\0'; i++) if (text[i] >= 'a' && text[i] <= 'z' && frequency[text[i] - 'a'] > 1) { printf("%c\n", text[i]); return 0; }
    puts("No repeating lowercase letter");
    return 0;
}
