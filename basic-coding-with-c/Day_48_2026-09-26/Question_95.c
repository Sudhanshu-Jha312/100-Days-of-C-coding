/* Original question from the reference website:
Check if one string is a rotation of another.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char first[500], second[500], doubled[1001];
    if (!fgets(first, sizeof first, stdin) || !fgets(second, sizeof second, stdin)) return 1;
    first[strcspn(first, "\n")] = '\0'; second[strcspn(second, "\n")] = '\0';
    if (strlen(first) != strlen(second)) { puts("Not a rotation"); return 0; }
    snprintf(doubled, sizeof doubled, "%s%s", first, first);
    puts(strstr(doubled, second) ? "Rotation" : "Not a rotation");
    return 0;
}
