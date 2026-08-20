/* Original question from the reference website:
Write a program to display the month name and number of days using switch-case for a given month number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int month, days;
    if (scanf("%d", &month) != 1) return 1;
    const char *names[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    if (month < 1 || month > 12) { puts("Invalid month"); return 0; }
    switch (month) {
        case 2: days = 28; break;
        case 4: case 6: case 9: case 11: days = 30; break;
        default: days = 31;
    }
    printf("%s: %d days (February is a non-leap year)\n", names[month - 1], days);
    return 0;
}
