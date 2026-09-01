# Question 45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

**Original question wording:**

> Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

**Day:** 23

**Date:** 01 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Generate each even numerator and matching denominator, then add the floating-point terms.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_45.c](Question_45.c).

```c
/* Original question from the reference website:
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
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
    for (int i = 1; i <= n; i++) sum += (double)(2 * i) / (4 * i - 1);
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
Sum = 2.316883
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
  Sum = 2.316883
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1

  Output:
  Sum = 0.666667
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.