/* Original question from the reference website:
Take two structs as input and check if they are identical.
*/
#include <stdio.h>
#include <string.h>

struct Student { char name[100]; int roll_no; int marks; };

int main(void) {
    struct Student first, second;
    if (scanf("%99s%d%d%99s%d%d", first.name, &first.roll_no, &first.marks,
              second.name, &second.roll_no, &second.marks) != 6) return 1;
    if (strcmp(first.name, second.name) == 0 &&
        first.roll_no == second.roll_no && first.marks == second.marks)
        puts("Same");
    else
        puts("Different");
    return 0;
}
