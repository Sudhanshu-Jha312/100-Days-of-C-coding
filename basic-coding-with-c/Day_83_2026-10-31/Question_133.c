/* Original question from the reference website:
Enum: Create an enum for months and print how many days each month has. Input month name; FEB->28 or 29 days. Account for leap years if asking year, otherwise state February normal year; preferably input month and year to resolve 28/29.
*/
#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void) {
    const char *names[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                           "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    const int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char input[16];
    int year;
    if (scanf("%15s%d", input, &year) != 2 || year < 1) return 1;
    enum Month month = DEC + 1;
    for (int i = JAN; i <= DEC; ++i)
        if (strcmp(input, names[i]) == 0) month = (enum Month)i;
    if (month > DEC) {
        fputs("Error: enter a month as JAN, FEB, ..., DEC.\n", stderr);
        return 1;
    }
    int days = month_days[month];
    if (month == FEB && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        days = 29;
    printf("%s has %d days.\n", names[month], days);
    return 0;
}
