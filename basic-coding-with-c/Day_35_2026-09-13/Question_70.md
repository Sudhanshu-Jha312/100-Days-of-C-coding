# Question 70: Rotate an array to the right by k positions.

**Original question wording:**

> Rotate an array to the right by k positions.

**Day:** 35

**Date:** 13 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Reduce k modulo the array length and map each output index to its right-rotated source index.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_70.c](Question_70.c).

```c
/* Original question from the reference website:
Rotate an array to the right by k positions.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], k;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &k) != 1) return 1;
    k = ((k % n) + n) % n;
    for (int start = 0; start < n; start++) printf("%d%c", values[(start - k + n) % n], start + 1 == n ? '\n' : ' ');
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
5
1 2 3 4 5
2

Output:
4 5 1 2 3
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
  1 2 3 4 5
  2

  Output:
  4 5 1 2 3
```
- **Boundary/special case — executed**:

  ```text
  Input:
  3
  1 2 3
  0

  Output:
  1 2 3
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.