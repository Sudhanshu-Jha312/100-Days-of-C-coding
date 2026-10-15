/* Original question from the reference website:
Logic Enhancers: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
*/
#include <stdio.h>

int main(void) {
    int count, values[1000], target;
    if (scanf("%d", &count) != 1 || count < 1 || count > 1000) return 1;
    for (int i = 0; i < count; ++i)
        if (scanf("%d", &values[i]) != 1 || values[i] <= 0) return 1;
    if (scanf("%d", &target) != 1) return 1;
    for (int i = 0; i < count; ++i)
        for (int j = i + 1; j < count; ++j)
            if ((long long)values[i] + values[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
    puts("-1 -1");
    return 0;
}
