/* Original question from the reference website:
Logic Enhancers: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.
*/
#include <stdio.h>

int main(void) {
    int count, missing = 0, value;
    if (scanf("%d", &count) != 1 || count < 0 || count > 1000000) return 1;
    for (int i = 0; i <= count; ++i) missing ^= i;
    for (int i = 0; i < count; ++i) {
        if (scanf("%d", &value) != 1 || value < 0 || value > count) return 1;
        missing ^= value;
    }
    printf("%d\n", missing);
    return 0;
}
