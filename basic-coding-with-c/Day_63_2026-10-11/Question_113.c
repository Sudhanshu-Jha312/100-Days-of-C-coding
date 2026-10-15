/* Original question from the reference website:
Logic Enhancers: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
*/
#include <stdio.h>

int main(void) {
    int count, values[1000], k;
    if (scanf("%d", &count) != 1 || count < 1 || count > 1000) return 1;
    for (int i = 0; i < count; ++i)
        if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &k) != 1 || k < 1 || k > count) return 1;
    for (int i = 0; i < count - 1; ++i)
        for (int j = i + 1; j < count; ++j)
            if (values[j] < values[i]) {
                int temporary = values[i];
                values[i] = values[j];
                values[j] = temporary;
            }
    printf("%d\n", values[k - 1]);
    return 0;
}
