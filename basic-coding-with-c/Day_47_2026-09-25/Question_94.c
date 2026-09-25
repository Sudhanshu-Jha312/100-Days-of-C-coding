/* Original question from the reference website:
Find the longest word in a sentence.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char sentence[1000], longest[1000] = "";
    if (!fgets(sentence, sizeof sentence, stdin)) return 1;
    char *word = strtok(sentence, " \t\r\n");
    while (word) { if (strlen(word) > strlen(longest)) strcpy(longest, word); word = strtok(NULL, " \t\r\n"); }
    printf("Longest word = %s\n", longest);
    return 0;
}
