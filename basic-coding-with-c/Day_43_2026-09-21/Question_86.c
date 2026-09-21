/* Original question from the reference website:
Check if a string is a palindrome.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof text, stdin)) return 1;
    size_t length = strcspn(text, "\n");
    int palindrome = 1;
    for (size_t i = 0; i < length / 2; i++) if (text[i] != text[length - 1 - i]) palindrome = 0;
    puts(palindrome ? "Palindrome" : "Not palindrome");
    return 0;
}
