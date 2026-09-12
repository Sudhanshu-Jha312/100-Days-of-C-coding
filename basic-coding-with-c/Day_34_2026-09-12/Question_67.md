# Question 67: Insert an element in an array at a given position.

**Original question wording:**

> Insert an element in an array at a given position.

**Day:** 34

**Date:** 12 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Shift elements right from the requested zero-based position and place the new value there.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_67.c](Question_67.c).

```c
/* Original question from the reference website:
Insert an element in an array at a given position.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1001], position, value;
    if (scanf("%d", &n) != 1 || n < 0 || n >= 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d %d", &position, &value) != 2 || position < 0 || position > n) return 1;
    for (int i = n; i > position; i--) values[i] = values[i - 1];
    values[position] = value;
    for (int i = 0; i <= n; i++) printf("%d%c", values[i], i == n ? '\n' : ' ');
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
4
10 20 30 40
2 25

Output:
10 20 25 30 40
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  4
  10 20 30 40
  2 25

  Output:
  10 20 25 30 40
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0
  0 9

  Output:
  9
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.