# Question 65: Search in a sorted array using binary search.

**Original question wording:**

> Search in a sorted array using binary search.

**Day:** 33

**Date:** 11 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Repeatedly halve the sorted search interval until the target is found or the interval is empty.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_65.c](Question_65.c).

```c
/* Original question from the reference website:
Search in a sorted array using binary search.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], target, left = 0, right, found = -1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    right = n - 1;
    while (left <= right) { int middle = left + (right - left) / 2; if (values[middle] == target) { found = middle; break; } if (values[middle] < target) left = middle + 1; else right = middle - 1; }
    printf("%d\n", found);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
5
1 3 5 7 9
7

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
  1 3 5 7 9
  7

  Output:
  3
```
- **Boundary/special case — executed**:

  ```text
  Input:
  3
  1 2 3
  4

  Output:
  -1
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.