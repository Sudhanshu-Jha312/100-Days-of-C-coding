/* Original question from the reference website:
File Handling: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/
#include <ctype.h>
#include <stdio.h>

int main(void) {
    char filename[256];
    long characters = 0, words = 0, lines = 0;
    int ch, in_word = 0, last_was_newline = 0;
    if (scanf("%255s", filename) != 1) return 1;
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Could not open input file");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        ++characters;
        if (ch == '\n') {
            ++lines;
            last_was_newline = 1;
        } else {
            last_was_newline = 0;
        }
        if (isspace((unsigned char)ch)) in_word = 0;
        else if (!in_word) {
            ++words;
            in_word = 1;
        }
    }
    if (ferror(file)) {
        perror("Could not read input file");
        fclose(file);
        return 1;
    }
    if (characters > 0 && !last_was_newline) ++lines;
    if (fclose(file) != 0) return 1;
    printf("Characters: %ld\nWords: %ld\nLines: %ld\n", characters, words, lines);
    return 0;
}
