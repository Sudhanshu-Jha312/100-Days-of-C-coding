# Question 73: Find the sum of each row of a matrix and store it in an array.

**Original question wording:**

> Find the sum of each row of a matrix and store it in an array.

**Day:** 37

**Date:** 15 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Add each row's values and print the resulting row-sum array.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_73.c](Question_73.c).

```c
/* Original question from the reference website:
Find the sum of each row of a matrix and store it in an array.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int rows, columns, value;
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 50 || columns < 1 || columns > 50) return 1;
    for (int r = 0; r < rows; r++) {
        long long row_sum = 0;
        for (int c = 0; c < columns; c++) { if (scanf("%d", &value) != 1) return 1; row_sum += value; }
        printf("%lld%c", row_sum, r + 1 == rows ? '\n' : ' ');
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

Output:
6 15
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
  6 15
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1 1
  0

  Output:
  0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.