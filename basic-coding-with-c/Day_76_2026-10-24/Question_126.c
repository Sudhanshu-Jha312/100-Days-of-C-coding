/* Original question from the reference website:
File Handling: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/
#include <stdio.h>

int main(void) {
    char filename[256], line[1024];
    if (scanf("%255s", filename) != 1) return 1;
    FILE *file = fopen(filename, "r");
    if (!file) {
        puts("Error: File does not exist!");
        return 0;
    }
    puts("File opened successfully.");
    while (fgets(line, sizeof line, file)) fputs(line, stdout);
    if (ferror(file)) {
        perror("Could not read file");
        fclose(file);
        return 1;
    }
    return fclose(file) == 0 ? 0 : 1;
}
