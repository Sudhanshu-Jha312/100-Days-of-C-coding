# Question 44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + â€¦ up to n terms.

**Original question wording:**

> Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + â€¦ up to n terms.

**Day:** 22

**Date:** 31 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Generate each numerator and denominator in the specified series and add the floating-point terms.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_44.c](Question_44.c).

```c
/* Original question from the reference website:
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + â€¦ up to n terms.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    double sum = 0;
    if (scanf("%d", &n) != 1 || n < 1) return 1;
    for (int i = 1; i <= n; i++) sum += (double)(2 * i - 1) / (i == 1 ? 1 : 2 * i);
    printf("Sum = %.6f\n", sum);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
4

Output:
Sum = 3.458333
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

  Output:
  Sum = 3.458333
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1

  Output:
  Sum = 1.000000
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.