/* Original question from the reference website:
Enum: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
*/
#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    char input[16];
    enum Status status;
    if (scanf("%15s", input) != 1) return 1;
    if (strcmp(input, "SUCCESS") == 0) status = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) status = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) status = TIMEOUT;
    else return 1;
    switch (status) {
        case SUCCESS: puts("Operation successful."); break;
        case FAILURE: puts("Operation failed."); break;
        case TIMEOUT: puts("Operation timed out."); break;
    }
    return 0;
}
