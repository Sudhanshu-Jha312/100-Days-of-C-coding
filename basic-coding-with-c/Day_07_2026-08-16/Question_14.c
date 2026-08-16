/* Original question from the reference website:
Write a program to input a character and check whether it is a vowel or consonant using ifâ€“else.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char ch;
    if (scanf(" %c", &ch) != 1) return 1;
    ch = (char)tolower((unsigned char)ch);
    puts(ch >= 'a' && ch <= 'z' ? (strchr("aeiou", ch) ? "Vowel" : "Consonant") : "Not an alphabet");
    return 0;
}
