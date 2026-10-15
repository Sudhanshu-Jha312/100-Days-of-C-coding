/* Original question from the reference website:
Enum: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value. No input.
*/
#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main(void) {
    const char *names[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                           "Thursday", "Friday", "Saturday"};
    for (int day = SUNDAY; day <= SATURDAY; ++day)
        printf("%s=%d\n", names[day], day);
    return 0;
}
