# Question 78: Find the sum of main diagonal elements for a square matrix.

**Original question wording:**

> Find the sum of main diagonal elements for a square matrix.

**Day:** 39

**Date:** 17 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Add the values whose row and column indices are equal.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_78.c](Question_78.c).

```c
/* Original question from the reference website:
Find the sum of main diagonal elements for a square matrix.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value;
    long long diagonal_sum = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 50) return 1;
    for (int r = 0; r < n; r++) for (int c = 0; c < n; c++) { if (scanf("%d", &value) != 1) return 1; if (r == c) diagonal_sum += value; }
    printf("Main diagonal sum = %lld\n", diagonal_sum);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
3
1 2 3
4 5 6
7 8 9

Output:
Main diagonal sum = 15
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
  1 2 3
  4 5 6
  7 8 9

  Output:
  Main diagonal sum = 15
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1
  5

  Output:
  Main diagonal sum = 5
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.