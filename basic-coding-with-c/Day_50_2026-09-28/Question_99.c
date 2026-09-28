/* Original question from the reference website:
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int day, month, year;
    if (scanf("%d/%d/%d", &day, &month, &year) != 3 || day < 1 || day > 30 || month != 4 || year < 0) return 1;
    printf("%02d-Apr-%04d\n", day, year);
    return 0;
}
