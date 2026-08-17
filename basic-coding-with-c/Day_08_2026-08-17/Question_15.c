/* Original question from the reference website:
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char ch;
    if (scanf(" %c", &ch) != 1) return 1;
    if (ch >= 'A' && ch <= 'Z') puts("Uppercase alphabet");
    else if (ch >= 'a' && ch <= 'z') puts("Lowercase alphabet");
    else if (ch >= '0' && ch <= '9') puts("Digit");
    else puts("Special character");
    return 0;
}
