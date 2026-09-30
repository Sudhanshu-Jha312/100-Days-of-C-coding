# Question 102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

**Original question wording:**

> Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

**Day:** 52

**Date:** 30 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Use lower-bound binary search to find the first value at least x.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_102.c](Question_102.c).

```c
/* Original question from the reference website:
Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], x, left = 0, right;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &x) != 1) return 1;
    right = n;
    while (left < right) { int mid = left + (right - left) / 2; if (values[mid] < x) left = mid + 1; else right = mid; }
    printf("%d\n", left == n ? -1 : left);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
5
1 3 3 7 9
4

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
  5
  1 3 3 7 9
  4

  Output:
  3
```
- **Boundary/special case — executed**:

  ```text
  Input:
  3
  1 3 5
  9

  Output:
  -1
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.