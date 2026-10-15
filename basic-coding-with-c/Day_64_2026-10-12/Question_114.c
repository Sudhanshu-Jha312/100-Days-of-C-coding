/* Original question from the reference website:
Logic Enhancers: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[10005];
    int last_seen[256], start = 0, longest = 0;
    for (int i = 0; i < 256; ++i) last_seen[i] = -1;
    if (!fgets(text, sizeof text, stdin)) return 1;
    size_t length = strcspn(text, "\r\n");
    for (int i = 0; i < (int)length; ++i) {
        unsigned char ch = (unsigned char)text[i];
        if (last_seen[ch] >= start) start = last_seen[ch] + 1;
        last_seen[ch] = i;
        if (i - start + 1 > longest) longest = i - start + 1;
    }
    printf("%d\n", longest);
    return 0;
}
