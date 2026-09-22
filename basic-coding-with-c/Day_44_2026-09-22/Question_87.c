/* Original question from the reference website:
Count spaces, digits, and special characters in a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    int spaces = 0, digits = 0, special = 0;
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        unsigned char ch = (unsigned char)text[i];
        if (ch == ' ') spaces++; else if (isdigit(ch)) digits++; else if (!isalnum(ch)) special++;
    }
    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d\n", spaces, digits, special);
    return 0;
}
