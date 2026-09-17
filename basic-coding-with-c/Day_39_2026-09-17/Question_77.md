# Question 77: Check if the elements on the diagonal of a matrix are distinct.

**Original question wording:**

> Check if the elements on the diagonal of a matrix are distinct.

**Day:** 39

**Date:** 17 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Compare every pair of main-diagonal values to ensure none are equal.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_77.c](Question_77.c).

```c
/* Original question from the reference website:
Check if the elements on the diagonal of a matrix are distinct.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, matrix[50][50], distinct = 1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 50) return 1;
    for (int r = 0; r < n; r++) for (int c = 0; c < n; c++) if (scanf("%d", &matrix[r][c]) != 1) return 1;
    for (int i = 0; i < n; i++) for (int j = i + 1; j < n; j++) if (matrix[i][i] == matrix[j][j]) distinct = 0;
    puts(distinct ? "Diagonal elements are distinct" : "Diagonal elements are not distinct");
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
Diagonal elements are distinct
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
  Diagonal elements are distinct
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1
  5

  Output:
  Diagonal elements are distinct
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.