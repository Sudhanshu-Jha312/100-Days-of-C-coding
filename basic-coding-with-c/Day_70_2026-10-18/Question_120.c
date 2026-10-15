/* Original question from the reference website:
File Handling: Write a program to take a string input. Change it to sentence case.
*/
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[10005];
    int capitalize = 1;
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] && text[i] != '\n' && text[i] != '\r'; ++i) {
        unsigned char ch = (unsigned char)text[i];
        if (isalpha(ch)) {
            text[i] = (char)(capitalize ? toupper(ch) : tolower(ch));
            capitalize = 0;
        } else {
            capitalize = isspace(ch) != 0;
        }
    }
    text[strcspn(text, "\r\n")] = '\0';
    puts(text);
    return 0;
}
