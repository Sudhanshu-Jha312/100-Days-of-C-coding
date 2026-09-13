# Question 69: Find the second largest element in an array.

**Original question wording:**

> Find the second largest element in an array.

**Day:** 35

**Date:** 13 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Track the largest and second-largest distinct values during one array scan.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_69.c](Question_69.c).

```c
/* Original question from the reference website:
Find the second largest element in an array.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value, largest = 0, second = 0, have_largest = 0, have_second = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &value) != 1) return 1;
        if (!have_largest || value > largest) { if (have_largest) { second = largest; have_second = 1; } largest = value; have_largest = 1; }
        else if (value < largest && (!have_second || value > second)) { second = value; have_second = 1; }
    }
    if (have_second) printf("Second largest = %d\n", second); else puts("No second distinct largest element");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
5
4 9 9 2 7

Output:
Second largest = 7
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
  4 9 9 2 7

  Output:
  Second largest = 7
```
- **Boundary/special case — executed**:

  ```text
  Input:
  4
  5 5 5 5

  Output:
  No second distinct largest element
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.