/* Original question from the reference website:
File Handling: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/
#include <stdio.h>

int main(void) {
    FILE *file = fopen("numbers.txt", "r");
    long long sum = 0;
    int value, count = 0;
    if (!file) {
        perror("Could not open numbers.txt");
        return 1;
    }
    while (fscanf(file, "%d", &value) == 1) {
        sum += value;
        ++count;
    }
    if (ferror(file)) {
        perror("Could not read numbers.txt");
        fclose(file);
        return 1;
    }
    if (fclose(file) != 0) return 1;
    if (count == 0) {
        fputs("Error: numbers.txt contains no integers.\n", stderr);
        return 1;
    }
    printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
    return 0;
}
