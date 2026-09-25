/* Original question from the reference website:
Check if two strings are anagrams of each other.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char first[1000], second[1000];
    int frequency[256] = {0};
    if (!fgets(first, sizeof first, stdin) || !fgets(second, sizeof second, stdin)) return 1;
    for (size_t i = 0; first[i] != '\0' && first[i] != '\n'; i++) frequency[(unsigned char)first[i]]++;
    for (size_t i = 0; second[i] != '\0' && second[i] != '\n'; i++) frequency[(unsigned char)second[i]]--;
    int same = 1;
    for (int i = 0; i < 256; i++) if (frequency[i] != 0) same = 0;
    puts(same ? "Anagrams" : "Not anagrams");
    return 0;
}
