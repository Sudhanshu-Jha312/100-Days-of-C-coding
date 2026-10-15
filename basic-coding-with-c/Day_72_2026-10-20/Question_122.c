/* Original question from the reference website:
File Handling: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
*/
#include <stdio.h>

int main(void) {
    char line[1024];
    FILE *file = fopen("info.txt", "r");
    if (!file) {
        perror("Could not open info.txt");
        return 1;
    }
    while (fgets(line, sizeof line, file)) fputs(line, stdout);
    if (ferror(file)) {
        perror("Could not read info.txt");
        fclose(file);
        return 1;
    }
    if (fclose(file) != 0) return 1;
    return 0;
}
