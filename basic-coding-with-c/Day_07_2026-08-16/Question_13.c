/* Original question from the reference website:
Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int year;
    if (scanf("%d", &year) != 1 || year <= 0) return 1;
    puts((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? "Leap year" : "Not a leap year");
    return 0;
}
