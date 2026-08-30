/* Original question from the reference website:
Write a program to swap the first and last digit of a number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long number, value, first, last, place = 1;
    if (scanf("%lld", &number) != 1) return 1;
    value = number < 0 ? -number : number;
    last = value % 10;
    if (value < 10) { printf("%lld\n", number); return 0; }
    while (value >= 10) { value /= 10; place *= 10; }
    first = value;
    value = number < 0 ? -number : number;
    long long swapped = last * place + (value % place - last) + first;
    printf("%s%lld\n", number < 0 ? "-" : "", swapped);
    return 0;
}
