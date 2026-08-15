/* Original question from the reference website:
Write a program to input an integer and check whether it is even or odd using ifâ€“else.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int number;
    if (scanf("%d", &number) != 1) return 1;
    printf("%s\n", number % 2 == 0 ? "Even" : "Odd");
    return 0;
}
