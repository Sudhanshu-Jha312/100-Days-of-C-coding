/* Original question from the reference website:
Write a program to display the day of the week based on a number (1â€“7) using switch-case.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int day;
    if (scanf("%d", &day) != 1) return 1;
    const char *names[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    switch (day) {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: puts(names[day - 1]); break;
        default: puts("Invalid day");
    }
    return 0;
}
