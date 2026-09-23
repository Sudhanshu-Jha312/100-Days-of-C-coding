/* Original question from the reference website:
Count frequency of a given character in a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000], target;
    int count = 0;
    if (!fgets(text, sizeof text, stdin)) return 1;
    if (scanf(" %c", &target) != 1) return 1;
    for (size_t i = 0; text[i] != '\0'; i++) if (text[i] == target) count++;
    printf("Frequency = %d\n", count);
    return 0;
}
