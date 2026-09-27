/* Original question from the reference website:
Print the initials of a name.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char name[500];
    if (!fgets(name, sizeof name, stdin)) return 1;
    int at_word_start = 1;
    for (size_t i = 0; name[i] != '\0'; i++) {
        if (isspace((unsigned char)name[i])) at_word_start = 1;
        else { if (at_word_start) printf("%c.", (char)toupper((unsigned char)name[i])); at_word_start = 0; }
    }
    putchar('\n');
    return 0;
}
