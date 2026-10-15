/* Original question from the reference website:
File Handling: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
*/
#include <ctype.h>
#include <stdio.h>

int main(void) {
    char filename[256];
    long vowels = 0, consonants = 0;
    if (scanf("%255s", filename) != 1) return 1;
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Could not open input file");
        return 1;
    }
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            int lower = tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') ++vowels;
            else ++consonants;
        }
    }
    if (ferror(file)) {
        perror("Could not read input file");
        fclose(file);
        return 1;
    }
    if (fclose(file) != 0) return 1;
    printf("Vowels: %ld\nConsonants: %ld\n", vowels, consonants);
    return 0;
}
