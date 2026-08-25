/* Original question from the reference website:
Write a program to check if a number is a palindrome.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long number, value, reversed = 0;
    if (scanf("%lld", &number) != 1) return 1;
    value = number < 0 ? -number : number;
    long long original = value;
    do { reversed = reversed * 10 + value % 10; value /= 10; } while (value > 0);
    puts(number >= 0 && reversed == original ? "Palindrome" : "Not palindrome");
    return 0;
}
