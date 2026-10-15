/* Original question from the reference website:
Return a structure containing top student's details from a function.
*/
#include <stdio.h>

struct Student { char name[100]; int roll_no; int marks; };

static struct Student top_student(struct Student students[], int count) {
    int top = 0;
    for (int i = 1; i < count; ++i)
        if (students[i].marks > students[top].marks) top = i;
    return students[top];
}

int main(void) {
    int count;
    struct Student students[1000];
    if (scanf("%d", &count) != 1 || count < 1 || count > 1000) return 1;
    for (int i = 0; i < count; ++i)
        if (scanf("%99s%d%d", students[i].name, &students[i].roll_no,
                  &students[i].marks) != 3) return 1;
    struct Student best = top_student(students, count);
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           best.name, best.roll_no, best.marks);
    return 0;
}
