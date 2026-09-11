# Question 66: Insert an element in a sorted array at the appropriate position.

**Original question wording:**

> Insert an element in a sorted array at the appropriate position.

**Day:** 33

**Date:** 11 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Find the first position not smaller than the new value, shift later elements right, and insert it.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_66.c](Question_66.c).

```c
/* Original question from the reference website:
Insert an element in a sorted array at the appropriate position.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1001], value, position = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n >= 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &value) != 1) return 1;
    while (position < n && values[position] < value) position++;
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
1 3 5 7
4

Output:
1 3 4 5 7
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
  1 3 5 7
  4

  Output:
  1 3 4 5 7
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0
  5

  Output:
  5
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.