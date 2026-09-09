# Question 61: Search for an element in an array using linear search.

**Original question wording:**

> Search for an element in an array using linear search.

**Day:** 31

**Date:** 09 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Compare each element with the target and stop at its first matching index.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_61.c](Question_61.c).

```c
/* Original question from the reference website:
Search for an element in an array using linear search.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], target, found = -1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    for (int i = 0; i < n; i++) if (values[i] == target) { found = i; break; }
    printf("%d\n", found);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
5
4 2 7 2 9
2

Output:
1
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
  4 2 7 2 9
  2

  Output:
  1
```
- **Boundary/special case — executed**:

  ```text
  Input:
  3
  1 2 3
  9

  Output:
  -1
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.