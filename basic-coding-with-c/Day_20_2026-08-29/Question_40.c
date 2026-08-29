/* Original question from the reference website:
Write a program to find the 1â€™s complement of a binary number and print it.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char binary[256];
    if (scanf("%255s", binary) != 1) return 1;
    for (size_t i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') { puts("Invalid binary number"); return 1; }
        binary[i] = binary[i] == '0' ? '1' : '0';
    }
    printf("%s\n", binary);
    return 0;
}
