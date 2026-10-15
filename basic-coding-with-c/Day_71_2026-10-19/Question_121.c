/* Original question from the reference website:
File Handling: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
*/
#include <stdio.h>

int main(void) {
    char name[100];
    int age;
    if (scanf("%99s%d", name, &age) != 2 || age < 0) return 1;
    FILE *file = fopen("info.txt", "w");
    if (!file) {
        perror("Could not open info.txt");
        return 1;
    }
    int written = fprintf(file, "Name: %s\nAge: %d\n", name, age);
    int close_status = fclose(file);
    if (written < 0 || close_status != 0) {
        fputs("Error: could not write info.txt\n", stderr);
        return 1;
    }
    puts("File created successfully! Data written to info.txt");
    return 0;
}
