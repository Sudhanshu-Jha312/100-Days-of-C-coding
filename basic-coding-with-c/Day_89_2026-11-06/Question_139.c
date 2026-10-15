/* Original question from the reference website:
Enum: Show that enums store integers by printing assigned values. No input.
*/
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    printf("SUCCESS=%d\nFAILURE=%d\nTIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
