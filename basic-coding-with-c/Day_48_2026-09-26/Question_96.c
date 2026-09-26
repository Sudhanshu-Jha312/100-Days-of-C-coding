/* Original question from the reference website:
Reverse each word in a sentence without changing the word order.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char sentence[1000];
    if (!fgets(sentence, sizeof sentence, stdin)) return 1;
    size_t length = strcspn(sentence, "\n");
    for (size_t start = 0; start < length;) {
        while (start < length && sentence[start] == ' ') start++;
        size_t end = start;
        while (end < length && sentence[end] != ' ') end++;
        for (size_t left = start, right = end; left < right && left < --right; left++) { char temporary = sentence[left]; sentence[left] = sentence[right]; sentence[right] = temporary; }
        start = end + 1;
    }
    sentence[length] = '\0';
    puts(sentence);
    return 0;
}
