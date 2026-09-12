# Question 68: Delete an element from an array.

**Original question wording:**

> Delete an element from an array.

**Day:** 34

**Date:** 12 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Skip the selected zero-based position while shifting later values one place left.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_68.c](Question_68.c).

```c
/* Original question from the reference website:
Delete an element from an array.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], position;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &position) != 1 || position < 0 || position >= n) return 1;
    for (int i = position; i < n - 1; i++) values[i] = values[i + 1];
    for (int i = 0; i < n - 1; i++) printf("%d%c", values[i], i + 1 == n - 1 ? '\n' : ' ');
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
5
10 20 30 40 50
2

Output:
10 20 40 50
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
  10 20 30 40 50
  2

  Output:
  10 20 40 50
```
- **Boundary/special case — executed**:

  ```text
  Input:
  3
  1 2 3
  2

  Output:
  1 2
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.