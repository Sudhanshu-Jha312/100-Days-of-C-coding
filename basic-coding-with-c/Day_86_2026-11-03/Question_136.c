/* Original question from the reference website:
Enum: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/
#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    char name[16];
    int left, right;
    if (scanf("%15s%d%d", name, &left, &right) != 3) return 1;
    enum Operation operation;
    if (strcmp(name, "ADD") == 0) operation = ADD;
    else if (strcmp(name, "SUBTRACT") == 0) operation = SUBTRACT;
    else if (strcmp(name, "MULTIPLY") == 0) operation = MULTIPLY;
    else {
        fputs("Error: unknown operation.\n", stderr);
        return 1;
    }
    switch (operation) {
        case ADD: printf("%d\n", left + right); break;
        case SUBTRACT: printf("%d\n", left - right); break;
        case MULTIPLY: printf("%d\n", left * right); break;
    }
    return 0;
}
