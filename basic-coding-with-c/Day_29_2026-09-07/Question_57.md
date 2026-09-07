# Question 57: Find the sum of array elements.

**Original question wording:**

> Find the sum of array elements.

**Day:** 29

**Date:** 07 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Read each array value and add it to a running total.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_57.c](Question_57.c).

```c
/* Original question from the reference website:
Find the sum of array elements.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000];
    long long sum = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) { if (scanf("%d", &values[i]) != 1) return 1; sum += values[i]; }
    printf("Sum = %lld\n", sum);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
4
1 2 3 4

Output:
Sum = 10
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
  1 2 3 4

  Output:
  Sum = 10
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1
  -1

  Output:
  Sum = -1
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.