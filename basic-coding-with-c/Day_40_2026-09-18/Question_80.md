# Question 80: Multiply two matrices.

**Original question wording:**

> Multiply two matrices.

**Day:** 40

**Date:** 18 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** For every output cell, sum products across the shared dimension of the two matrices.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_80.c](Question_80.c).

```c
/* Original question from the reference website:
Multiply two matrices.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int rows_a, common, common_b, columns_b, a[50][50], b[50][50];
    if (scanf("%d %d", &rows_a, &common) != 2 || rows_a < 1 || rows_a > 50 || common < 1 || common > 50) return 1;
    for (int r = 0; r < rows_a; r++) for (int c = 0; c < common; c++) if (scanf("%d", &a[r][c]) != 1) return 1;
    if (scanf("%d %d", &common_b, &columns_b) != 2 || common_b != common || columns_b < 1 || columns_b > 50) return 1;
    for (int r = 0; r < common_b; r++) for (int c = 0; c < columns_b; c++) if (scanf("%d", &b[r][c]) != 1) return 1;
    for (int r = 0; r < rows_a; r++) {
        for (int c = 0; c < columns_b; c++) {
            long long sum = 0;
            for (int k = 0; k < common; k++) sum += (long long)a[r][k] * b[k][c];
            printf("%lld%c", sum, c + 1 == columns_b ? '\n' : ' ');
        }
    }
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12

Output:
58 64
139 154
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  2 3
  1 2 3
  4 5 6
  3 2
  7 8
  9 10
  11 12

  Output:
  58 64
  139 154
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1 1
  5
  1 1
  0

  Output:
  0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.