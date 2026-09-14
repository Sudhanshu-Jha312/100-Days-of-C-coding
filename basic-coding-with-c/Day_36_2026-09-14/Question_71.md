# Question 71: Read and print a matrix.

**Original question wording:**

> Read and print a matrix.

**Day:** 36

**Date:** 14 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Read the matrix dimensions and elements, then print the same rows and columns.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_71.c](Question_71.c).

```c
/* Original question from the reference website:
Read and print a matrix.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int rows, columns, matrix[50][50];
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 50 || columns < 1 || columns > 50) return 1;
    for (int r = 0; r < rows; r++) for (int c = 0; c < columns; c++) if (scanf("%d", &matrix[r][c]) != 1) return 1;
    for (int r = 0; r < rows; r++) { for (int c = 0; c < columns; c++) printf("%d%c", matrix[r][c], c + 1 == columns ? '\n' : ' '); }
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

Output:
1 2 3
4 5 6
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

  Output:
  1 2 3
  4 5 6
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1 1
  7

  Output:
  7
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.