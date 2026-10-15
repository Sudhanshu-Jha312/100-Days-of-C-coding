/* Original question from the reference website:
Use pointer to struct to modify and display data using -> operator.
*/
#include <stdio.h>

struct Student { char name[100]; int roll_no; int marks; };

int main(void) {
    struct Student student;
    struct Student *student_pointer = &student;
    if (scanf("%99s%d%d", student_pointer->name, &student_pointer->roll_no,
              &student_pointer->marks) != 3) return 1;
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           student_pointer->name, student_pointer->roll_no,
           student_pointer->marks);
    return 0;
}
