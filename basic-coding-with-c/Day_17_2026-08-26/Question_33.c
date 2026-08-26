/* Original question from the reference website:
Write a program to check if a number is an Armstrong number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long number, value, original;
    int digits = 0;
    if (scanf("%lld", &number) != 1) return 1;
    value = number;
    do { digits++; value /= 10; } while (value != 0);
    original = value = number < 0 ? -number : number;
    long long sum = 0;
    while (value > 0) {
        int digit = (int)(value % 10);
        long long power = 1;
        for (int i = 0; i < digits; i++) power *= digit;
        sum += power;
        value /= 10;
    }
    puts(number >= 0 && sum == original ? "Armstrong number" : "Not an Armstrong number");
    return 0;
}
