# Question 103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

**Original question wording:**

> Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

**Day:** 53

**Date:** 01 October 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Compare the running left sum with the remaining right sum at each index.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_103.c](Question_103.c).

```c
/* Original question from the reference website:
Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000];
    long long total = 0, left_sum = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) { if (scanf("%d", &values[i]) != 1) return 1; total += values[i]; }
    for (int i = 0; i < n; i++) { if (left_sum == total - left_sum - values[i]) { printf("%d\n", i); return 0; } left_sum += values[i]; }
    puts("-1");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
6
1 7 3 6 5 6

Output:
3
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  6
  1 7 3 6 5 6

  Output:
  3
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1
  8

  Output:
  0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.