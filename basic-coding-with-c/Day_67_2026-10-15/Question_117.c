/* Original question from the reference website:
Logic Enhancers: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/
#include <stdio.h>

int main(void) {
    int first_count, second_count, first[1000], second[1000];
    if (scanf("%d%d", &first_count, &second_count) != 2 ||
        first_count < 0 || second_count < 0 ||
        first_count > 1000 || second_count > 1000 ||
        first_count + second_count > 2000)
        return 1;
    for (int i = 0; i < first_count; ++i)
        if (scanf("%d", &first[i]) != 1 ||
            (i > 0 && first[i] < first[i - 1])) return 1;
    for (int i = 0; i < second_count; ++i)
        if (scanf("%d", &second[i]) != 1 ||
            (i > 0 && second[i] < second[i - 1])) return 1;
    int i = 0, j = 0;
    while (i < first_count || j < second_count) {
        int value;
        if (j == second_count || (i < first_count && first[i] <= second[j]))
            value = first[i++];
        else
            value = second[j++];
        printf("%s%d", (i + j == 1 ? "" : " "), value);
    }
    putchar('\n');
    return 0;
}
