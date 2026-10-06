/* Original question from the reference website:
Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000];
    long long prefix = 1, answer[1000];
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    for (int i = 0; i < n; i++) { answer[i] = prefix; prefix *= values[i]; }
    long long suffix = 1;
    for (int i = n - 1; i >= 0; i--) { answer[i] *= suffix; suffix *= values[i]; }
    for (int i = 0; i < n; i++) printf("%lld%c", answer[i], i + 1 == n ? '\n' : ' ');
    return 0;
}
