/* Original question from the reference website:
Enum: Assign explicit values starting from 10 and print them. No input.
*/
#include <stdio.h>

enum Letter { A = 10, B, C };

int main(void) {
    printf("A=%d\nB=%d\nC=%d\n", A, B, C);
    return 0;
}
