/* Original question from the reference website:
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double percentage;
    if (scanf("%lf", &percentage) != 1 || percentage < 0 || percentage > 100) return 1;
    char grade = percentage >= 90 ? 'A' : percentage >= 80 ? 'B' : percentage >= 70 ? 'C' : percentage >= 60 ? 'D' : 'F';
    printf("Grade %c\n", grade);
    return 0;
}
