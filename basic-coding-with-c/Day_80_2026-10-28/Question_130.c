/* Original question from the reference website:
File Handling: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
*/
#include <stdio.h>

int main(void) {
    int count;
    char name[100];
    int roll, marks;
    if (scanf("%d", &count) != 1 || count < 1 || count > 1000) return 1;
    FILE *file = fopen("students.txt", "w");
    if (!file) {
        perror("Could not open students.txt for writing");
        return 1;
    }
    for (int i = 0; i < count; ++i) {
        if (scanf("%99s%d%d", name, &roll, &marks) != 3 ||
            fprintf(file, "%s %d %d\n", name, roll, marks) < 0) {
            fclose(file);
            fputs("Error: invalid record or write failure.\n", stderr);
            return 1;
        }
    }
    if (fclose(file) != 0) return 1;
    file = fopen("students.txt", "r");
    if (!file) {
        perror("Could not reopen students.txt");
        return 1;
    }
    while (fscanf(file, "%99s%d%d", name, &roll, &marks) == 3)
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    int failed = ferror(file);
    if (fclose(file) != 0) failed = 1;
    return failed ? 1 : 0;
}
