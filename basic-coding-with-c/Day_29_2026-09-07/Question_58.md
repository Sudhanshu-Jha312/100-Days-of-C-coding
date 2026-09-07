# Question 58: Find the maximum and minimum element in an array.

**Original question wording:**

> Find the maximum and minimum element in an array.

**Day:** 29

**Date:** 07 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Initialize the minimum and maximum from the first element, then update both while scanning.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_58.c](Question_58.c).

```c
/* Original question from the reference website:
Find the maximum and minimum element in an array.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value, minimum, maximum;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000 || scanf("%d", &value) != 1) return 1;
    minimum = maximum = value;
    for (int i = 1; i < n; i++) {
        if (scanf("%d", &value) != 1) return 1;
        if (value < minimum) minimum = value;
        if (value > maximum) maximum = value;
    }
    printf("Minimum = %d\nMaximum = %d\n", minimum, maximum);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
5
9 1 7 -2 5

Output:
Minimum = -2
Maximum = 9
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
  9 1 7 -2 5

  Output:
  Minimum = -2
  Maximum = 9
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1
  5

  Output:
  Minimum = 5
  Maximum = 5
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.