/* Original question from the reference website:
Write a program to take a number as input and print its equivalent binary representation.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    unsigned int number;
    char bits[sizeof(number) * 8 + 1];
    int length = 0;
    if (scanf("%u", &number) != 1) return 1;
    do { bits[length++] = (char)('0' + number % 2); number /= 2; } while (number > 0);
    while (length > 0) putchar(bits[--length]);
    putchar('\n');
    return 0;
}
