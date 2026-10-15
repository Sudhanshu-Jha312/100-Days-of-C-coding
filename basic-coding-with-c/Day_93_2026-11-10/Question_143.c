/* Original question from the reference website:
Find and print the student with the highest marks.
*/
#include <stdio.h>

struct Student { char name[100]; int roll_no; int marks; };

int main(void) {
    int count;
    struct Student students[1000];
    if (scanf("%d", &count) != 1 || count < 1 || count > 1000) return 1;
    for (int i = 0; i < count; ++i)
        if (scanf("%99s%d%d", students[i].name, &students[i].roll_no,
                  &students[i].marks) != 3) return 1;
    int top = 0;
    for (int i = 1; i < count; ++i)
        if (students[i].marks > students[top].marks) top = i;
    printf("Topper: %s (Marks: %d)\n", students[top].name, students[top].marks);
    return 0;
}
