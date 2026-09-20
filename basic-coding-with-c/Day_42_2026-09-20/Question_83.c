/* Original question from the reference website:
Count vowels and consonants in a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    int vowels = 0, consonants = 0;
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0'; i++) if (isalpha((unsigned char)text[i])) {
        char ch = (char)tolower((unsigned char)text[i]);
        if (strchr("aeiou", ch)) vowels++; else consonants++;
    }
    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
