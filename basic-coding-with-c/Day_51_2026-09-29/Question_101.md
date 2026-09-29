# Question 101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

**Original question wording:**

> Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

**Day:** 51

**Date:** 29 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Use lower-bound and upper-bound binary searches to find the target's first and last indices.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_101.c](Question_101.c).

```c
/* Original question from the reference website:
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], target, first = -1, last = -1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    int left = 0, right = n - 1;
    while (left <= right) { int mid = left + (right - left) / 2; if (values[mid] < target) left = mid + 1; else right = mid - 1; }
    if (left < n && values[left] == target) {
        first = left; right = n - 1;
        while (left <= right) { int mid = left + (right - left) / 2; if (values[mid] <= target) left = mid + 1; else right = mid - 1; }
        last = right;
    }
    printf("%d %d\n", first, last);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
7
1 2 2 2 3 4 5
2

Output:
1 3
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  7
  1 2 2 2 3 4 5
  2

  Output:
  1 3
```
- **Boundary/special case — executed**:

  ```text
  Input:
  3
  1 2 3
  4

  Output:
  -1 -1
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.