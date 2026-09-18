# Question 79: Perform diagonal traversal of a matrix.

**Original question wording:**

> Perform diagonal traversal of a matrix.

**Day:** 40

**Date:** 18 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Visit matrix diagonals by increasing row-plus-column index, alternating direction.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_79.c](Question_79.c).

```c
/* Original question from the reference website:
Perform diagonal traversal of a matrix.
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
    for (int diagonal = 0; diagonal < rows + columns - 1; diagonal++) {
        int low = diagonal - (columns - 1); if (low < 0) low = 0;
        int high = diagonal < rows ? diagonal : rows - 1;
        if (diagonal % 2 == 0) { for (int r = high; r >= low; r--) printf("%d ", matrix[r][diagonal - r]); }
        else { for (int r = low; r <= high; r++) printf("%d ", matrix[r][diagonal - r]); }
    }
    putchar('\n');
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
1 2 4 5 3 6 ```


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
  1 2 4 5 3 6
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1 1
  5

  Output:
  5
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.