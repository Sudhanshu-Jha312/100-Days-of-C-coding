/* Original question from the reference website:
Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long seconds;
    if (scanf("%lld", &seconds) != 1 || seconds < 0) return 1;
    printf("%02lld:%02lld:%02lld\n", seconds / 3600, seconds / 60 % 60, seconds % 60);
    return 0;
}
