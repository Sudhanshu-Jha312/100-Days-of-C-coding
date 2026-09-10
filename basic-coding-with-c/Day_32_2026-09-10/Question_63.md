# Question 63: Merge two arrays.

**Original question wording:**

> Merge two arrays.

**Day:** 32

**Date:** 10 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Read two arrays and print all values from the first followed by all values from the second.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_63.c](Question_63.c).

```c
/* Original question from the reference website:
Merge two arrays.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int m, n, a[1000], b[1000];
    if (scanf("%d", &m) != 1 || m < 1 || m > 1000) return 1;
    for (int i = 0; i < m; i++) if (scanf("%d", &a[i]) != 1) return 1;
    if (scanf("%d", &n) != 1 || n < 1 || m + n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &b[i]) != 1) return 1;
    for (int i = 0; i < m; i++) printf("%d ", a[i]);
    for (int i = 0; i < n; i++) printf("%d%c", b[i], i + 1 == n ? '\n' : ' ');
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
3
1 3 5
2
2 4

Output:
1 3 5 2 4
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  3
  1 3 5
  2
  2 4

  Output:
  1 3 5 2 4
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1
  -2
  1
  -2

  Output:
  -2 -2
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.