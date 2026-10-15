/* Original question from the reference website:
Logic Enhancers: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count, value;
    if (scanf("%d", &count) != 1 || count < 1 || count > 1000000) return 1;
    size_t capacity = 1;
    while (capacity < (size_t)count * 2) capacity *= 2;
    int *keys = malloc(capacity * sizeof *keys);
    unsigned char *occupied = calloc(capacity, sizeof *occupied);
    if (!keys || !occupied) {
        fputs("Error: could not allocate duplicate lookup table.\n", stderr);
        free(keys);
        free(occupied);
        return 1;
    }
    for (int i = 0; i < count; ++i) {
        if (scanf("%d", &value) != 1) {
            free(keys);
            free(occupied);
            return 1;
        }
        size_t slot = ((unsigned int)value * 2654435761u) & (capacity - 1);
        while (occupied[slot] && keys[slot] != value)
            slot = (slot + 1) & (capacity - 1);
        if (occupied[slot]) {
            printf("%d\n", value);
            free(keys);
            free(occupied);
            return 0;
        }
        keys[slot] = value;
        occupied[slot] = 1;
    }
    free(keys);
    free(occupied);
    puts("-1");
    return 0;
}
