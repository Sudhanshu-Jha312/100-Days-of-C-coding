/* Original question from the reference website:
File Handling: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char source_name[256], destination_name[256];
    if (scanf("%255s%255s", source_name, destination_name) != 2) return 1;
    if (strcmp(source_name, destination_name) == 0) {
        fputs("Error: source and destination must differ.\n", stderr);
        return 1;
    }
    FILE *source = fopen(source_name, "rb");
    if (!source) {
        perror("Could not open source");
        return 1;
    }
    FILE *destination = fopen(destination_name, "wb");
    if (!destination) {
        perror("Could not open destination");
        fclose(source);
        return 1;
    }
    int ch, failed = 0;
    while ((ch = fgetc(source)) != EOF)
        if (fputc(ch, destination) == EOF) {
            failed = 1;
            break;
        }
    if (ferror(source)) failed = 1;
    if (fclose(source) != 0) failed = 1;
    if (fclose(destination) != 0) failed = 1;
    if (failed) {
        fputs("Error: file copy failed.\n", stderr);
        return 1;
    }
    printf("File copied successfully to %s\n", destination_name);
    return 0;
}
