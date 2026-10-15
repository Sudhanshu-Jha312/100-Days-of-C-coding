/* Original question from the reference website:
File Handling: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[256], line[1024];
    if (scanf("%255s", filename) != 1) return 1;
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) { }
    if (!fgets(line, sizeof line, stdin)) return 1;
    line[strcspn(line, "\r\n")] = '\0';
    FILE *existing = fopen(filename, "rb");
    if (!existing) {
        perror("Could not open existing file");
        return 1;
    }
    if (fseek(existing, 0, SEEK_END) != 0) {
        perror("Could not inspect existing file");
        fclose(existing);
        return 1;
    }
    long file_size = ftell(existing);
    if (file_size < 0) {
        perror("Could not inspect existing file");
        fclose(existing);
        return 1;
    }
    int last_character = '\n';
    if (file_size > 0) {
        if (fseek(existing, -1L, SEEK_END) != 0 ||
            (last_character = fgetc(existing)) == EOF) {
            perror("Could not inspect existing file");
            fclose(existing);
            return 1;
        }
    }
    if (fclose(existing) != 0) return 1;
    FILE *file = fopen(filename, "a");
    if (!file) {
        perror("Could not open file for append");
        return 1;
    }
    if ((file_size > 0 && last_character != '\n' &&
         last_character != '\r' && fputc('\n', file) == EOF) ||
        fputs(line, file) == EOF || fputc('\n', file) == EOF) {
        perror("Could not append to file");
        fclose(file);
        return 1;
    }
    if (fclose(file) != 0) return 1;
    puts("Text appended successfully.");
    return 0;
}
