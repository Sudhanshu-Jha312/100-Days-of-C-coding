# Question 60: Count positive, negative, and zero elements in an array.

**Original question wording:**

> Count positive, negative, and zero elements in an array.

**Day:** 30

**Date:** 08 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Compare every array element with zero and increment its matching category count.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_60.c](Question_60.c).

```c
/* Original question from the reference website:
Count positive, negative, and zero elements in an array.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value, positive = 0, negative = 0, zero = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) { if (scanf("%d", &value) != 1) return 1; if (value > 0) positive++; else if (value < 0) negative++; else zero++; }
    printf("Positive = %d\nNegative = %d\nZero = %d\n", positive, negative, zero);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
5
-1 0 2 0 -3

Output:
Positive = 1
Negative = 2
Zero = 2
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
  -1 0 2 0 -3

  Output:
  Positive = 1
  Negative = 2
  Zero = 2
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1
  0

  Output:
  Positive = 0
  Negative = 0
  Zero = 1
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.