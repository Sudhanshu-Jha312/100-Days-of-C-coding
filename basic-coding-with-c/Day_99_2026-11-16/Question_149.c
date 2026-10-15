/* Original question from the reference website:
Use malloc() to allocate structure memory dynamically and print details. Check malloc and free.
*/
#include <stdio.h>
#include <stdlib.h>

struct Student { char name[100]; int roll_no; int marks; };

int main(void) {
    struct Student *student = malloc(sizeof *student);
    if (!student) {
        fputs("Error: could not allocate student memory.\n", stderr);
        return 1;
    }
    if (scanf("%99s%d%d", student->name, &student->roll_no, &student->marks) != 3) {
        free(student);
        return 1;
    }
    printf("Name: %s | Roll: %d | Marks: %d\n",
           student->name, student->roll_no, student->marks);
    free(student);
    return 0;
}
