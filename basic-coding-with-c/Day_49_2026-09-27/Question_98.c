/* Original question from the reference website:
Print initials of a name with the surname displayed in full.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char name[500], *words[100];
    int count = 0;
    if (!fgets(name, sizeof name, stdin)) return 1;
    char *word = strtok(name, " \t\r\n");
    while (word && count < 100) { words[count++] = word; word = strtok(NULL, " \t\r\n"); }
    if (count == 0) return 1;
    for (int i = 0; i < count - 1; i++) printf("%c. ", (char)toupper((unsigned char)words[i][0]));
    printf("%s\n", words[count - 1]);
    return 0;
}
